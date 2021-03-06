//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryProfile.h>

@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile
{
    NSUInteger _networkStatus;
    long long _satelliteStatus;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
@property(nonatomic) long long satelliteStatus; // @synthesize satelliteStatus=_satelliteStatus;
@property(nonatomic) NSUInteger networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)__handleAccessoryConfigured;
- (void)handleCharacteristicValuesChanged:(id)arg1;
- (void)_handleCharacteristicChanges:(id)arg1;
- (void)__updateSatelliteStatus:(id)arg1;
- (void)_updateNetworkStatus;
- (void)__notifyClientsOfNetworkStatusUpdate:(NSUInteger)arg1;
- (void)handleInitialState;
- (void)registerForMessages;
- (void)_registerForNotifications;
- (id)runtimeState;
- (void)dealloc;
- (void)unconfigure;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2;

@end

