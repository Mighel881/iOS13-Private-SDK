//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FBSXPCMessage, NSObject;
@protocol OS_dispatch_queue;

@protocol FBSServiceFacilityClientMessaging <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2 replyHandler:(void (^)(FBSXPCMessage *))arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;
- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2;
@end
