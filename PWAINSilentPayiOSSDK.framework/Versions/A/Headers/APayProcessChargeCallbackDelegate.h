#import "ProcessChargeResponse.h"

@protocol APayProcessChargeCallbackDelegate

-(void) onSuccess:(ProcessChargeResponse *)response;

-(void) onFailure:(NSError *)error;

- (void) onMobileSDKError:(NSError *) error;

- (void) onNetworkUnavailable;

- (void) onCancel;

@end


