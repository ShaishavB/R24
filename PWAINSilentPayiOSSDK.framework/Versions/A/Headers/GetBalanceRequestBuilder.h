@protocol GetBalanceRequestBuilder <NSObject>

- (void) withMerchantId:(NSString *) merchantId;

- (void) withIsSandbox:(BOOL) isSandbox;

@end

