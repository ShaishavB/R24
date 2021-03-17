#import <Foundation/Foundation.h>
#import <PWAINSilentPayiOSSDK/SilentPayOperation.h>
#import "SilentPayConfig.h"
#import "GetBalanceRequest.h"
#import "APayAuthorizeCallbackDelegate.h"
#import "APayGetBalanceCallbackDelegate.h"
#import "APayProcessChargeCallbackDelegate.h"
#import "APayGetChargeStatusCallbackDelegate.h"
#import "EncryptedRequest.h"
/** version 1.2 **/
@interface AmazonPay : NSObject

@property (nonatomic, assign) enum SilentPayOperation operation;
@property (nonatomic, strong) NSDate *startTime;

/**
 * This makes the init method of AmazonPay class inaccessible for the outer world.
 */
-(instancetype) init __attribute__((unavailable("Unavailable, use sharedInstance instead.")));

/**
 * Method to get the static instance of the class
 */
+ (AmazonPay *) sharedInstance;

/**
 * Method to get the static silentPayConfig field.
 */
- (SilentPayConfig *) getConfig;

/**
 * Method to authorize the account with AmazonPay
 **/
-(void) authorize: (id<APayAuthorizeCallbackDelegate>) apayAuthorizeCallback;

/**
 * Method to return the Amazon Pay Balance details availabe
 **/
-(void) getBalance: (GetBalanceRequest *)getBalanceRequest
apayGetBalanceCallback:(id<APayGetBalanceCallbackDelegate>) apayGetBalanceCallback;


/**
 * Process a charge against the customer's Apay account. In case of insufficient balance, will proceed in mobile browser
 **/
-(void) processCharge: (EncryptedRequest *)encryptedRequest
apayProcessChargeCallback:(id<APayProcessChargeCallbackDelegate>) apayProcessChargeCallback;


/**
 *Gets status of an existing charge operation
 **/
-(void) getChargeStatus: (EncryptedRequest *)encryptedRequest
apayGetChargeStatusCallback:(id<APayGetChargeStatusCallbackDelegate>)apayGetChargeStatusCallback;


/**
 * Handles the response when transaction cancelled by user
 */
- (void) handleCancelledResponse;


/**
 * Handles the redirection back to the app from the PWA UI
 *
 * @param url the redirect URL
 * @param sourceApplication the sourceApplication where it comes from
 *
 * @return whether the response with the URl was handled successfully or not.
 */
- (BOOL) handleRedirectURL:(NSURL *)url
         sourceApplication:(NSString *)sourceApplication;


@end
