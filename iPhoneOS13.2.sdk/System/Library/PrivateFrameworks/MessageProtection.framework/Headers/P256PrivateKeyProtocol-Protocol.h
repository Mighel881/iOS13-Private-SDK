//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData;
@protocol P256PublicKeyProtocol;

@protocol P256PrivateKeyProtocol 
+ (id)generate;
- (id <P256PublicKeyProtocol>)publicKey;
- (NSData *)keyAgreement:(id <P256PublicKeyProtocol>)arg1 error:(id *)arg2;
- (NSData *)signData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)keychainData;
- (id)initWithData:(NSData *)arg1 error:(id *)arg2;
@end
