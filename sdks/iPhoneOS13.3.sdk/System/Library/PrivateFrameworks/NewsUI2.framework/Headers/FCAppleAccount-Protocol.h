//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ACAccount, NSString;

@protocol FCAppleAccount <NSObject>
- (BOOL)isPrimaryAccountEmailAddress;
- (NSString *)currentStoreFrontID;
- (void)checkAllDevicesRunningMinimumiOSVersion:(CDStruct_912cb5d2)arg1 macOSVersion:(CDStruct_912cb5d2)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(CDStruct_912cb5d2)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)loadStoreFrontWithCompletionHandler:(void (^)(void))arg1;
- (NSString *)iCloudAccountDSID;
- (NSString *)iTunesAccountDSID;
- (NSString *)iTunesAccountName;
- (BOOL)isUserSignedIntoiTunes;
@property(nonatomic, readonly) ACAccount *activeiTunesAccount;
@property(nonatomic, readonly) NSString *endpointConnectionClientID;
- (BOOL)isUserSignedInToiCloud;
- (BOOL)isPrivateDataSyncingEnabled;
@property(nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property(nonatomic, readonly) BOOL isContentStoreFrontSupported;
@property(nonatomic, readonly) NSString *primaryLanguageCode;
@property(nonatomic, readonly) NSString *contentStoreFrontID;
@property(nonatomic, readonly) NSString *userStoreFrontID;
@property(nonatomic, readonly) NSString *DSID;
@end

