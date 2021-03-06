//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKKeychainItem-Protocol.h>

@protocol CRKCertificate, CRKPrivateKey;

@protocol CRKIdentity <CRKKeychainItem>
@property(readonly, nonatomic) struct __SecIdentity underlyingIdentity;
@property(readonly, nonatomic) id <CRKPrivateKey> privateKey;
@property(readonly, nonatomic) id <CRKCertificate> certificate;
@end

