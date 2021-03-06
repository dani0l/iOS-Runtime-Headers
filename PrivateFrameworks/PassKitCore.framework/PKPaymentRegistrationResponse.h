/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSNumber, NSString, NSURL;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse {
    NSURL *_brokerURL;
    NSNumber *_cardsOnFile;
    NSArray *_certificates;
    NSString *_deviceIdentifier;
    NSNumber *_maxCards;
    NSURL *_paymentServicesURL;
    NSURL *_trustedServiceManagerURL;
}

@property(retain) NSURL * brokerURL;
@property(retain) NSNumber * cardsOnFile;
@property(retain) NSArray * certificates;
@property(retain) NSString * deviceIdentifier;
@property(retain) NSNumber * maxCards;
@property(retain) NSURL * paymentServicesURL;
@property(retain) NSURL * trustedServiceManagerURL;

- (id)brokerURL;
- (id)cardsOnFile;
- (id)certificates;
- (void)dealloc;
- (id)deviceIdentifier;
- (id)initWithData:(id)arg1;
- (id)maxCards;
- (id)paymentServicesURL;
- (void)setBrokerURL:(id)arg1;
- (void)setCardsOnFile:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setMaxCards:(id)arg1;
- (void)setPaymentServicesURL:(id)arg1;
- (void)setTrustedServiceManagerURL:(id)arg1;
- (id)trustedServiceManagerURL;

@end
