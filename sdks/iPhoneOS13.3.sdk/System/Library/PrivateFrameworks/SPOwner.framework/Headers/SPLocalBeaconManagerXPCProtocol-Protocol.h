//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SPLocalBeaconManagerXPCProtocol <NSObject>
- (oneway void)getMacBeaconConfigWithCompletion:(void (^)(SPMacBeaconConfig *, NSError *))arg1;
- (oneway void)beaconingKeysWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)beaconingStateWithCompletion:(void (^)(long long))arg1;
@end

