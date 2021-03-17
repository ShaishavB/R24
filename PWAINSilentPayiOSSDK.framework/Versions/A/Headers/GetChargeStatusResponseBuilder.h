@protocol GetChargeStatusResponseBuilder <NSObject>

- (void) withTransactionId:(NSString *) transactionId;

- (void) withMerchantTransactionId:(NSString *) merchantTransactionId;

- (void) withSignature:(NSString *) signature;

- (void) withTransactionValue:(NSString *) transactionValue;

- (void) withTransactionCurrencyCode:(NSString *) transactionCurrencyCode;

- (void) withTransactionStatusCode:(NSString *) transactionStatusCode;

- (void) withTransactionStatusDescription:(NSString *) transactionStatusDescription;

- (void) withMerchantCustomData:(NSString *) merchantCustomData;

- (void) withTransactionDate:(NSString *) transactionDate;

@end
