#import "EncryptedRequestBuilder.h"

@interface EncryptedRequest : NSObject

// Properties
@property (strong, nonatomic, readonly) NSString *payload;
@property (strong, nonatomic, readonly) NSString *iv;
@property (strong, nonatomic, readonly) NSString *key;
@property (strong, nonatomic, readonly) NSString *requestId;
@property (assign, nonatomic, readonly) BOOL isSandbox;

// Restricting the usage of init method.
-(instancetype) init __attribute__((unavailable("Unavailable, use builder instead")));

/**
 * This method build the encrypted request object with the builder protocol passed to it.
 * @param buildBlock a delegate for the builder protocol, to be implemented by the caller method.
 *
 * @return it returns an instance of EncryptedRequest object.
 */
+ (instancetype) build:(void(^)(id<EncryptedRequestBuilder>builder))buildBlock;


@end
