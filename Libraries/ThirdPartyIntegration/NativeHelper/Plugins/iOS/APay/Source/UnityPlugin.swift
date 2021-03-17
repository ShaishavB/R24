//
//  UnityPlugin.swift
//  UnityIosPlugin
//
//  Created by ShaishavB on 25/12/20.
//

import Foundation
import LoginWithAmazon
import PWAINSilentPayiOSSDK

//let ENDPOINT = "https://node.11wickets.com/node_application_public/"
//let PROCESS_CHARGE_PATH = "amazonpay/process-charge"
//let VALIDATION_PATH = "amazonpay/verify-signature"
//let GET_CHARGE_STATUS_PATH = "amazonpay/charge-status"
//let isAmazonSandBoxOn = false
//let amazonMerchantId = "A1TLCFBFL2CVCI"

let ENDPOINT = "http://35.154.65.109:3000/"
let PROCESS_CHARGE_PATH = "api/v1/transaction/amazon/processChargeCall"
let VALIDATION_PATH = "api/v1/transaction/amazon/verifySignature"
let GET_CHARGE_STATUS_PATH = "api/v1/transaction/amazon/processChargeCallStatus"
let isAmazonSandBoxOn = false
let amazonMerchantId = "A2M3Y2296TXHV8"

func kprint(_ items: Any...) {
    for item in items {
        print(item)
    }
}

@objc public class UnityPlugin : NSObject {
    
    @objc public static let shared = UnityPlugin()
    @objc public var token: String!
    @objc var comp: ((PlugResType, String?) -> ())?
    
    @objc public class func getBalance(comp: ((PlugResType, String?) -> ())?) {
        
        let req = GetBalanceRequest.build { (builder) in
            builder?.withIsSandbox(isAmazonSandBoxOn)
            builder?.withMerchantId(amazonMerchantId)
        }
        let callBack = KPGetBalanceCallback()
        callBack.callBack = { type in
            if case let .success(res) = type {
                let balance = res as! GetBalanceResponse
                kprint(balance)
                comp?(.success ,balance.balance)
            } else if case let .fail(_, error) = type {
                kprint(error.localizedDescription)
                comp?(.otherError, error.localizedDescription)
            } else if case let .sdkError(error) = type {
                kprint(error.localizedDescription)
                comp?(.sdkError, error.localizedDescription)
            } else if case .networkError = type {
                kprint("Network Unavailable")
                comp?(.networkError, "Network Unavailable")
            }
        }
        AmazonPay.sharedInstance()?.getBalance(req, apayGetBalanceCallback: callBack)
    }
    
    @objc public class func logOut(comp: ((PlugResType, String?) -> ())?) {
        AMZNAuthorizationManager.shared().signOut { (error) in
            if let err = error {
                kprint(err.localizedDescription)
                comp?(.otherError, err.localizedDescription)
            } else {
                comp?(.success, nil)
            }
        }
    }
    
    @objc public class func loginWithAmazon(comp: ((PlugResType, String?) -> ())?) {
        let callBack = KPAuthorizeCallback()
        callBack.callBack = { type in
            if case .success(_) = type {
                comp?(.success, nil)
            } else if case .fail(_, let error) = type {
                if (error as NSError).code == 3 {
                    comp?(.userCancel, error.localizedDescription) // User cancel
                } else {
                    comp?(.otherError, error.localizedDescription)
                }
                kprint(error.localizedDescription)
            } else if case let .sdkError(error) = type {
                kprint(error.localizedDescription)
                comp?(.sdkError, error.localizedDescription)
            } else if case .networkError = type {
                comp?(.networkError, "Network Unavailable")
            } else if case .cancel = type {
                comp?(.userCancel, nil)
            }
        }
        AmazonPay.sharedInstance()?.authorize(callBack)
    }
    
    @objc func fireCallBack(res: PlugResType, error: String?) {
        token = nil
        kprint(error ?? "")
        comp?(res, error)
        comp = nil
    }
    
    @objc public func processCharge(amount: String, orderId: String, token: String, comp: ((PlugResType, String?) -> ())?) {
        self.token = token
        self.comp = comp
        callProcessChargeApi(amount: amount , orderId: orderId) { [weak self] (req, err) in
            guard let weakObj = self else { return }
            if let request = req {
                let callBack = KPProcessChargeCallback()
                callBack.callBack = { [weak self] type in
                    guard let weakSelf = self else { return }
                    if case .success(let res) = type {
                        let charge = res as! ProcessChargeResponse
                        weakSelf.validateProcessChargeResponse(response: charge)
                    } else if case .fail(_, let error) = type {
                        kprint("Payment Failed?")
                        weakSelf.fireCallBack(res: .otherError, error: error.localizedDescription)
                    } else if case let .sdkError(error) = type {
                        kprint("SDK Error?")
                        weakSelf.fireCallBack(res: .sdkError, error: error.localizedDescription)
                    } else if case .networkError = type {
                        weakSelf.fireCallBack(res: .networkError, error: "Network Unavailable")
                    } else if case .cancel = type {
                        weakSelf.fireCallBack(res: .userCancel, error: nil)
                    }
                }
                AmazonPay.sharedInstance()?.processCharge(request, apayProcessChargeCallback: callBack)
            } else if let error = err {
                weakObj.fireCallBack(res: .otherError, error: error.localizedDescription)
            } else {
                weakObj.fireCallBack(res: .otherError, error: "Process charge failed!!")
            }
        }
    }
    
    func getChargeStatus(tranId: String) {
        self.callGetChargeStatusApi(transactionId: tranId) { [weak self] (req, err) in
            guard let weakObj = self else { return }
            if let request = req {
                let callBack = KPGetChargeStatusCallback()
                callBack.callBack = { [weak self] type in
                    guard let weakSelf = self else { return }
                    if case .success(let res) = type {
                        let status = res as! GetChargeStatusResponse
                        if status.transactionStatus == TransactionStatus.SUCCESS {
                            weakSelf.validateGetChargeStatusResponse(response: status)
                        } else if status.transactionStatus == TransactionStatus.FAILURE {
                            weakSelf.validateGetChargeStatusResponse(response: status)
                        } else {
                            kprint("Pending...")
                            DispatchQueue.main.asyncAfter(deadline: DispatchTime.now() + Double(Int(2 * Double(NSEC_PER_SEC))) / Double(NSEC_PER_SEC), execute: {() -> Void in
                                weakSelf.getChargeStatus(tranId: status.transactionId)
                            })
                        }
                    } else if case .fail(_, let error) = type {
                        weakObj.fireCallBack(res: .otherError, error: error.localizedDescription)
                    } else if case let .sdkError(error) = type {
                        weakObj.fireCallBack(res: .sdkError, error: error.localizedDescription)
                    } else if case .networkError = type {
                        weakObj.fireCallBack(res: .networkError, error: "Network Unavailable")
                    }
                }
                AmazonPay.sharedInstance().getChargeStatus(request, apayGetChargeStatusCallback: callBack)
            } else if let error = err {
                weakObj.fireCallBack(res: .otherError, error: error.localizedDescription)
            } else {
                weakObj.fireCallBack(res: .otherError, error: "Get charge status failed!!")
            }
        }
    }
}

// MARK:- Api and Utility methods
extension UnityPlugin {
    
    func callProcessChargeApi(amount: String, orderId: String, comp: ((EncryptedRequest?, Error?) -> ())?) {
        let params:[String : Any] = [
            "orderTotalAmount" : amount,
            "orderTotalCurrencyCode" : "INR",
            "sellerNote" : "Deposit",
            "sellerStoreName" : "Rummy24",
            "sellerOrderId" : orderId
            //            "isSandbox": "true"
        ]
        kprint("=======================" + #function + "=======================")
        let url = buildURLforHost(host: ENDPOINT, protocol1: "", path: PROCESS_CHARGE_PATH, shouldEncodeQueryParams: true, urlParams: params)
        var request:URLRequest = URLRequest(url: url)
        request.setValue(token, forHTTPHeaderField: "Authorization")
        request.httpMethod = "POST"
        kprint(request.url ?? "")
        dispatchAsync(request: request, onRequestCompletion: {(data:Data?, error:Error?)-> Void in
            if let data1 = data {
                let newStr = String(data: data1, encoding: .utf8)?.trimmingCharacters(in: .whitespacesAndNewlines)
                let dic = self.getParamsFromQueryString(queryString: newStr!, excludeKeys: [], shouldUrlDecode: true)
                kprint(dic)
                let encryptedRequest:EncryptedRequest = EncryptedRequest.build({(builder) in
                    builder?.withIV(dic["iv"] as? String)
                    builder?.withKey(dic["key"] as? String)
                    builder?.withPayload(dic["payload"] as? String)
                    builder?.withIsSandbox(isAmazonSandBoxOn)
                }
                )
                comp?(encryptedRequest, error)
            } else {
                comp?(nil, error)
            }
        })
        
    }
    
    func validateProcessChargeResponse(response:ProcessChargeResponse) {
        var request:URLRequest = postURLRequest(pathName: VALIDATION_PATH, urlParams: response.getVerificationParameters() as! [AnyHashable : Any])
        request.setValue(token, forHTTPHeaderField: "Authorization")
        kprint("Verifying process charge response....")
        kprint("=======================" + #function + "=======================")
        dispatchAsync(request: request, onRequestCompletion: { [weak self] (data:Data?, error:Error?) -> Void in
            guard let weakself = self else { return }
            if let data1 = data {
                let newStr = String(data: data1, encoding: .utf8)?.trimmingCharacters(in: .whitespacesAndNewlines)
                kprint(newStr ?? "")
                if (newStr == "true") {
                    weakself.getChargeStatus(tranId: response.amazonOrderId)
                } else if let err = error {
                    weakself.fireCallBack(res: .otherError, error: err.localizedDescription)
                } else {
                    weakself.fireCallBack(res: .otherError, error: "failed to verify process charge response")
                }
            } else if let err = error {
                weakself.fireCallBack(res: .otherError, error: err.localizedDescription)
            } else {
                weakself.fireCallBack(res: .otherError, error: "failed to verify process charge response")
            }
        })
    }
    
    func callGetChargeStatusApi(transactionId:String, comp: ((EncryptedRequest?, Error?) -> ())?) {
        let params:[String : Any] = [
            "transactionId": transactionId,
            "transactionIdType": "TRANSACTION_ID"
        ]
        
        let url:URL = buildURLforHost(host: ENDPOINT, protocol1: "", path: GET_CHARGE_STATUS_PATH, shouldEncodeQueryParams: true, urlParams: params)
        kprint("=======================" + #function + "=======================")
        var request:URLRequest = URLRequest(url: url)
        request.httpMethod = "POST"
        request.setValue(token, forHTTPHeaderField: "Authorization")
        dispatchAsync(request: request, onRequestCompletion: {(data:Data?, error:Error?) -> Void in
            if let data1 = data {
                let newStr = String(data: data1, encoding: .utf8)?.trimmingCharacters(in: .whitespacesAndNewlines)
                //                let paramStartIndex = newStr?.index((newStr?.firstIndex(of: "?"))!, offsetBy: 1)
                //                let endIndex = newStr?.range(of: "<br/>")?.lowerBound
                //                newStr = String(newStr![paramStartIndex!..<endIndex!])
                let dic = self.getParamsFromQueryString(queryString: newStr!, excludeKeys: [], shouldUrlDecode: true)
                kprint(dic)
                let isSandbox = (transactionId.contains("S04-"))
                
                let encryptedRequest:EncryptedRequest = EncryptedRequest.build({(builder) in
                    builder?.withIV(dic["iv"] as? String)
                    builder?.withKey(dic["key"] as? String)
                    builder?.withPayload(dic["payload"] as? String)
                    builder?.withIsSandbox(isSandbox)
                }
                )
                comp?(encryptedRequest, error)
            } else {
                comp?(nil, error)
            }
        })
    }
    
    func validateGetChargeStatusResponse(response:GetChargeStatusResponse) {
        var request:URLRequest = postURLRequest(pathName: VALIDATION_PATH, urlParams: response.getVerificationParameters() as! [AnyHashable : Any])
        request.setValue(token, forHTTPHeaderField: "Authorization")
        kprint("Verifying charge status response....")
        kprint("=======================" + #function + "=======================")
        dispatchAsync(request: request, onRequestCompletion:  { [weak self] (data:Data?, error:Error?) -> Void in
            guard let weakself = self else { return }
            if let data1 = data {
                let newStr = String(data: data1, encoding: .utf8)?.trimmingCharacters(in: .whitespacesAndNewlines)
                if (newStr == "true") {
                    if response.transactionStatus == TransactionStatus.SUCCESS {
                        weakself.fireCallBack(res: .success, error: nil)
                    } else {
                        weakself.fireCallBack(res: .otherError, error: response.transactionStatusDesciption)
                    }
                } else if let err = error {
                    weakself.fireCallBack(res: .otherError, error: err.localizedDescription)
                } else {
                    weakself.fireCallBack(res: .otherError, error: "failed to verify charge status response")
                }
            } else if let err = error {
                weakself.fireCallBack(res: .otherError, error: err.localizedDescription)
            } else {
                weakself.fireCallBack(res: .otherError, error: "failed to verify charge status response")
            }
        })
    }
    
    func dispatchAsync(request:URLRequest, onRequestCompletion:@escaping (_ result:Data?, _ error:Error?) -> Void) -> Void {
        let dataTaskHandler = { (data:Data?, response:URLResponse?, error:Error?) -> Void in
            if (error != nil) {
                onRequestCompletion(nil,error)
                return
            } else if (response?.isEqual(nil))! {
                onRequestCompletion(data, nil)
                return
            }
            let httpResponse:HTTPURLResponse = response as! HTTPURLResponse
            let statusCode = httpResponse.statusCode
            
            if (statusCode >= 200 && statusCode < 300) {
                onRequestCompletion(data!, nil);
                return;
            } else if (statusCode >= 500 && statusCode < 600) {
                self.dispatchAsync(request: request, onRequestCompletion: onRequestCompletion)
                return;
            }
        }
        var urlSession: URLSession
        let config = URLSessionConfiguration.default
        config.requestCachePolicy = .reloadIgnoringCacheData
        urlSession = URLSession(configuration: config)
        
        let dataTask = urlSession.dataTask(with: request, completionHandler: dataTaskHandler)
        dataTask.resume()
    }
    
    
    //helper methods
    func postURLRequest(pathName:String, urlParams:[AnyHashable:Any]) -> URLRequest {
        let url = buildURLforHost(host: ENDPOINT, protocol1: "", path: pathName, shouldEncodeQueryParams: true, urlParams: urlParams)
        var request = URLRequest(url: url)
        request.httpMethod = "POST"
        return request
    }
    
    func getParamsFromQueryString(queryString:String, excludeKeys:NSArray, shouldUrlDecode:Bool) -> Dictionary<String, Any> {
        var params = [String:String]()
        for (object) in queryString.components(separatedBy: "&") {
            let pair = object.components(separatedBy: "=")
            if(pair.count == 2) {
                let key = pair[0].trimmingCharacters(in: .whitespacesAndNewlines)
                let value = pair[1].trimmingCharacters(in: .whitespacesAndNewlines)
                if(!excludeKeys.contains(key)) {
                    if (shouldUrlDecode) {
                        params[self.getURLDecodedString(encodedString: key)] = self.getURLDecodedString(encodedString: value)
                    } else {
                        params[key] = value
                    }
                }
            }
        }
        return params
    }
    
    func buildURLforHost(host: String,  protocol1: String,path: String, shouldEncodeQueryParams: Bool, urlParams: [AnyHashable: Any]) -> URL {
        
        var modifiedHostName = host
        
        if (!protocol1.isEmpty) {
            modifiedHostName = protocol1 + "://" + host
        }
        
        let baseUrl:URL = URL(string: modifiedHostName + path)!
        
        return buildURLWithBaseURL(baseUrl: baseUrl, shouldEncodeQueryParams: shouldEncodeQueryParams, urlParams: urlParams)
    }
    
    func buildURLWithBaseURL(baseUrl:URL, shouldEncodeQueryParams:Bool, urlParams:[AnyHashable: Any]) -> URL {
        if(urlParams.count > 0) {
            var paramArray = [String]()
            for (key, value) in urlParams{
                paramArray.append("\(key)=\(value)")
            }
            var queryString = paramArray.joined(separator: "&").replacingOccurrences(of: "\n", with: "")
            if(shouldEncodeQueryParams) {
                queryString = getEncodedString(decodedString: queryString)
            }
            let urlString = baseUrl.absoluteString + "?" + queryString
            let url = URL(string: urlString)
            return url!
        }
        return baseUrl
    }
    
    func getEncodedString(decodedString:String) -> String {
        var urlEncodedString = decodedString.addingPercentEncoding(withAllowedCharacters: CharacterSet.urlQueryAllowed)
        urlEncodedString = urlEncodedString?.replacingOccurrences(of: "+", with: "%2B")
        return urlEncodedString!
    }
    
    func getURLDecodedString(encodedString:String) -> String {
        let urlDecodedString = encodedString.removingPercentEncoding
        return urlDecodedString!
    }
}

@objc public enum PlugResType: Int {
    case success = 0
    case userCancel = 1
    case sdkError = 2
    case networkError = 3
    case otherError = 4
}

enum KPError: Error {
    case error(Error)
    case unknown(String)
    case userCancel
}

enum CallbackType {
    case success(Any?)
    case fail(Any?, Error)
    case sdkError(Error)
    case networkError
    case cancel
}

class KPAuthorizeCallback: APayAuthorizeCallbackDelegate {
    
    var callBack: ((CallbackType) -> ())?
    
    func onSuccess() {
        callBack?(.success(nil))
    }
    
    func onFailure(_ error: Error!) {
        callBack?(.fail(nil, error))
    }
    
    func onMobileSDKError(_ error: Error!) {
        callBack?(.sdkError(error))
    }
    
    func onNetworkUnavailable() {
        callBack?(.networkError)
    }
    
    func onCancel() {
        callBack?(.cancel)
    }
}

class KPGetBalanceCallback: APayGetBalanceCallbackDelegate {
    
    var callBack: ((CallbackType) -> ())?
    
    func onSuccess(_ response: GetBalanceResponse!) {
        callBack?(.success(response))
    }
    
    func onFailure(_ response: GetBalanceResponse!, error: Error!) {
        callBack?(.fail(response, error))
    }
    
    func onMobileSDKError(_ error: Error!) {
        callBack?(.sdkError(error))
    }
    
    func onNetworkUnavailable() {
        callBack?(.networkError)
    }
}

class KPProcessChargeCallback: APayProcessChargeCallbackDelegate {
    
    var callBack: ((CallbackType) -> ())?
    
    func onSuccess(_ response: ProcessChargeResponse!) {
        callBack?(.success(response))
    }
    
    func onFailure(_ error: Error!) {
        callBack?(.fail(nil, error))
    }
    
    func onMobileSDKError(_ error: Error!) {
        callBack?(.sdkError(error))
    }
    
    func onNetworkUnavailable() {
        callBack?(.networkError)
    }
    
    func onCancel() {
        callBack?(.cancel)
    }
}

class KPGetChargeStatusCallback: APayGetChargeStatusCallbackDelegate {
    
    var callBack: ((CallbackType) -> ())?
    
    func onSuccess(_ response: GetChargeStatusResponse!) {
        callBack?(.success(response))
    }
    
    func onFailure(_ error: Error!) {
        callBack?(.fail(nil, error))
    }
    
    func onMobileSDKError(_ error: Error!) {
        callBack?(.sdkError(error))
    }
    
    func onNetworkUnavailable() {
        callBack?(.networkError)
    }
}
