#import "GetBalanceRequestBuilder.h"

@interface GetBalanceRequest : NSObject

// Properties

@property (strong, nonatomic, readonly) NSString *merchantId;
@property (strong, nonatomic, readonly) NSString *requestId;
@property (assign, nonatomic, readonly) BOOL isSandbox;

// Restricting the usage of init method.
-(instancetype) init __attribute__((unavailable("Unavailable, use build instead")));

/**
 * This method build the get balance request object with the builder protocol passed to it.
 * @param buildBlock a delegate for the builder protocol, to be implemented by the caller method.
 *
 * @return it returns an instance of GetBalanceRequest object.
 */
+ (instancetype) build:(void(^)(id<GetBalanceRequestBuilder>builder))buildBlock;

@end
