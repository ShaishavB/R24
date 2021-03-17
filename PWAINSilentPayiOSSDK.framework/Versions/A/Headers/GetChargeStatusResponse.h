#import <Foundation/Foundation.h>
#import "GetChargeStatusResponseBuilder.h"

typedef NS_ENUM(NSInteger, TransactionStatus){
    SUCCESS,
    PENDING,
    FAILURE
};


@interface GetChargeStatusResponse : NSObject

@property (strong, nonatomic, readonly) NSString* transactionId;
@property (strong, nonatomic, readonly) NSString* merchantTransactionId;
@property (strong, nonatomic, readonly) NSString* transactionValue;
@property (strong, nonatomic, readonly) NSString* transactionCurrencyCode;
@property (strong, nonatomic, readonly) NSString* transactionStatusDesciption;
@property (strong, nonatomic, readonly) NSString* merchantCustomData;
@property (strong, nonatomic, readonly) NSString* transactionDate;
@property (strong, nonatomic, readonly) NSString* transactionStatusCode;
@property (strong, nonatomic, readonly) NSString* signature;
@property (nonatomic, readonly) TransactionStatus transactionStatus;

// Restricting the usage of init method.
-(instancetype) init __attribute__((unavailable("Unavailable, use build instead")));

/**
 * This method build the process payment response object with the builder protocol passed to it.
 */
+ (instancetype) build:(void(^)(id<GetChargeStatusResponseBuilder>builder))buildBlock;

-(NSMutableDictionary *)getVerificationParameters;

-(void)updateVerificationParamets;

@end
