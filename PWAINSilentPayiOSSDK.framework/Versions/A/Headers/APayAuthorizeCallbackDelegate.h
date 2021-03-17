@protocol APayAuthorizeCallbackDelegate

-(void) onSuccess;

-(void) onFailure:(NSError *)error;

- (void) onMobileSDKError:(NSError *) error;

- (void) onNetworkUnavailable;

- (void) onCancel;

@end

