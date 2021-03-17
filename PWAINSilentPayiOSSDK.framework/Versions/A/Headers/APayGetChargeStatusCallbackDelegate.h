#import "GetChargeStatusResponse.h"

@protocol APayGetChargeStatusCallbackDelegate
// by default required methods

- (void) onSuccess:(GetChargeStatusResponse *)response;

- (void) onFailure:(NSError *) error;

- (void) onMobileSDKError:(NSError *) error;

- (void) onNetworkUnavailable;

@end

