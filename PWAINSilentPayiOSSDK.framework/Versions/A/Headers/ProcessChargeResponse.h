#import <Foundation/Foundation.h>
#import "ProcessChargeResponseBuilder.h"

@interface ProcessChargeResponse : NSObject

@property (strong, nonatomic, readonly) NSString *amazonOrderId;
@property (strong, nonatomic, readonly) NSString *signature;
@property (strong, nonatomic, readonly) NSString *status;

// Restricting the usage of init method.
-(instancetype) init __attribute__((unavailable("Unavailable, use build instead")));

/**
 * This method build the process payment response object with the builder protocol passed to it.
 */
+ (instancetype) build:(void(^)(id<ProcessChargeResponseBuilder>builder))buildBlock;

-(NSMutableDictionary *)getVerificationParameters;

@end
