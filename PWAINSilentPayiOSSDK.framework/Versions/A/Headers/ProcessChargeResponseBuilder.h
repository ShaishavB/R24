@protocol ProcessChargeResponseBuilder <NSObject>

- (void) withAmazonOrderId:(NSString *) amazonOrderId;

- (void) withTransactionId:(NSString *)transactionId;

- (void) withSellerOrderId:(NSString *) sellerOrderId;

- (void) withReasonCode:(NSString *) reasonCode;

- (void) withDescription:(NSString *) desc;

- (void) withRequestId:(NSString *) requestId;

- (void) withSignature:(NSString *) signature;

- (void) withStatus:(NSString *) status;

- (void) withAmount:(NSString *) amount;

- (void) withCurrencyCode:(NSString *) currencyCode;

- (void) withTransactionDate:(NSString *) transactionDate;

- (void) withCustomInformation:(NSString *) customInformation;

- (void) withPayURL:(NSString *)payURL;

- (void) withVerificationOperationName:(NSString *)verificationOperationName;

@end



