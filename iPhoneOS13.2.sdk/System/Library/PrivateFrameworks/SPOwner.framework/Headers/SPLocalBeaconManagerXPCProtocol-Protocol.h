//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol SPLocalBeaconManagerXPCProtocol 
- (oneway void)getMacBeaconConfigWithCompletion:(void (^)(SPMacBeaconConfig *, NSError *))arg1;
- (oneway void)beaconingKeysWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)beaconingStateWithCompletion:(void (^)(long long))arg1;
@end
