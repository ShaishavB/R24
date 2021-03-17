#import <Foundation/Foundation.h>
#import "GetBalanceResponseBuilder.h"


@interface GetBalanceResponse : NSObject

@property (strong, nonatomic, readonly) NSString *balance;
@property (strong, nonatomic, readonly) NSString *currencyCode;

// Restricting the usage of init method.
-(instancetype) init __attribute__((unavailable("Unavailable, use build instead")));

/**
 * This method build the process payment response object with the builder protocol passed to it.
 */
+ (instancetype) build:(void(^)(id<GetBalanceResponseBuilder>builder))buildBlock;

@end

