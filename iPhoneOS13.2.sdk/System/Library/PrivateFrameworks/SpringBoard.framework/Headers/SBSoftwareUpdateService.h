//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemServiceServerSoftwareUpdateDelegate-Protocol.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBSoftwareUpdateService : NSObject <SBSystemServiceServerSoftwareUpdateDelegate>
{
    FBServiceClientAuthenticator *_serviceClientSoftwareUpdatePasscodePolicyEntitlementAuthenticator;
}

+ (id)sharedInstance;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setPasscodePolicy:(long long)arg3;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 passcodePolicy:(id /* block */)arg3;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
