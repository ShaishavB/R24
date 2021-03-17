@protocol EncryptedRequestBuilder <NSObject>

- (void) withPayload:(NSString *) payload;

- (void) withKey:(NSString *) key;

- (void) withIV:(NSString *) iv;

- (void) withIsSandbox:(BOOL) isSandbox;

@end

