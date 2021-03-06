//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MSConnection : NSObject
{
    NSXPCConnection *_center;
    NSXPCConnection *_noWakeCenter;
    NSMutableDictionary *_serverSideConfig;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
    int _serverSideConfigNotificationToken;
}

+ (id)sharedConnection;
// - (void).cxx_destruct;
- (id)_machErrorWithUnderlyingError:(id)arg1;
- (BOOL)isBusy;
- (void)isBusyCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)resume:(id)arg1;
- (id)pause;
- (void)abortActivitiesForPersonID:(id)arg1;
- (void)resetServerStateForPersonID:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (void)forgetPersonID:(id)arg1;
- (void)handleSubscriptionPushForPersonID:(id)arg1;
- (void)checkForOutstandingActivities;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id )arg3;
- (BOOL)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id )arg3;
- (void)dealloc;
- (id)init;
- (void)_waitForMessageToBeSent;

@end

