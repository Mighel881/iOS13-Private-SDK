//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKWebServiceContext.h>

@class NSData, NSString, NSURL;

@interface PKPeerPaymentWebServiceContext : PKWebServiceContext
{
    BOOL _devSigned;
    NSURL *_serviceURL;
    NSString *_deviceIdentifier;
    NSString *_pushTopic;
    NSString *_pushToken;
    NSString *_companionSerialNumber;
    NSData *_signedEnrollmentDataSignature;
}

+ (id)contextWithArchive:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *signedEnrollmentDataSignature; // @synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature;
@property(readonly, copy, nonatomic) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(nonatomic) BOOL devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(readonly, copy, nonatomic) NSString *pushTopic; // @synthesize pushTopic=_pushTopic;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, copy, nonatomic) NSURL *serviceURL; // @synthesize serviceURL=_serviceURL;
// - (void).cxx_destruct;
- (void)updateContextWithDeviceRegistrationData:(id)arg1 registrationResponse:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

