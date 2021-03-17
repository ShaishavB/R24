//
//  UnityPluginBridge.m
//  UnityIosPlugin
//
//  Created by ShaishavB on 25/12/20.
//

#import <Foundation/Foundation.h>
#include "UnityFramework/UnityFramework-Swift.h"


typedef void (*CompletionBlock) (NSInteger completionReason);
typedef void (*AmazonComp) (NSInteger status, const char* error);

extern "C" {

    void getAmazonBalance(AmazonComp comp) {
        [UnityPlugin getBalanceWithComp:^(PlugResType res, NSString *error) {
            char* cStringCopy(const char* string);
            comp(res, cStringCopy([error UTF8String]));
        }];
    }

    void logoutAmazon(AmazonComp comp) {
        [UnityPlugin logOutWithComp:^(PlugResType res, NSString *error) {
            char* cStringCopy(const char* string);
            comp(res, cStringCopy([error UTF8String]));
        }];
    }

    void loginWithAmazon(AmazonComp comp) {
        [UnityPlugin loginWithAmazonWithComp:^(PlugResType res, NSString *error) {
            char* cStringCopy(const char* string);
            comp(res, cStringCopy([error UTF8String]));
        }];
    }

    void processCharge(const char* amount, const char* orderId, const char* token, AmazonComp comp) {
        [[UnityPlugin shared] processChargeWithAmount:[NSString stringWithUTF8String: amount] orderId:[NSString stringWithUTF8String: orderId] token:[NSString stringWithUTF8String: token] comp:^(PlugResType res, NSString *error) {
            char* cStringCopy(const char* string);
            comp(res, cStringCopy([error UTF8String]));
        }];
    }
//@"$2b$10$EzsavYiFCLVU6G3k3yNqQ.VqInQiXo0QQjfUZxk7XCIAPWnzOzHyu"
}

char* cStringCopy(const char* string){
     if (string == NULL){
          return NULL;
     }
     char* res = (char*)malloc(strlen(string)+1);
     strcpy(res, string);
     return res;
}

