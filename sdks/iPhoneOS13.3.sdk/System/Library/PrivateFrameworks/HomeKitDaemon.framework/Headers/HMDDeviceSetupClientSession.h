//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDDeviceSetupSessionInternal.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging>
{
}

+ (id)logCategory;
+ (id)allowedClasses;
+ (BOOL)isSupported;
+ (long long)role;
- (BOOL)processSessionData:(id)arg1 error:(id )arg2;

@end
