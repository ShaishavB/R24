#import "GetBalanceResponse.h"

@protocol APayGetBalanceCallbackDelegate
// by default required methods

- (void) onSuccess:(GetBalanceResponse *)response;

- (void) onFailure:(GetBalanceResponse *) response
             error:(NSError *) error;

- (void) onMobileSDKError:(NSError *) error;

- (void) onNetworkUnavailable;

@end
