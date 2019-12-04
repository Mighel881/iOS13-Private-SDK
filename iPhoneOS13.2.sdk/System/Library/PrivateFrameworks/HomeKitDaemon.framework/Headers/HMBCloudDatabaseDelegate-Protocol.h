//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HMBCloudDatabase, HMBCloudZoneID, NAFuture, NSDictionary;

@protocol HMBCloudDatabaseDelegate 

@optional
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didChangeManateeKeysForZoneWithID:(HMBCloudZoneID *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didRemoveZoneWithID:(HMBCloudZoneID *)arg2;
- (NAFuture *)cloudDatabase:(HMBCloudDatabase *)arg1 willRemoveZoneWithID:(HMBCloudZoneID *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didCreateZoneWithID:(HMBCloudZoneID *)arg2;
@end
