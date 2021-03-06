//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsSettings/UNUserNotificationSettingsClientProtocol-Protocol.h>

@class NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNUserNotificationSettingsServiceConnection : NSObject <UNUserNotificationSettingsClientProtocol>
{
    NSMutableArray *_observers;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)updateNotificationSystemSettings:(id)arg1;
- (void)updateNotificationSourcesWithBundleIdentifiers:(id)arg1;
- (void)_queue_invalidatedConnection;
- (void)_queue_interruptedConnection;
- (id)_queue_ensureConnection;
- (void)_invalidate;
- (void)_queue_removeObserver:(id)arg1;
- (void)_queue_addObserver:(id)arg1;
- (void)setNotificationSystemSettings:(id)arg1;
- (id)notificationSystemSettings;
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
- (id)allNotificationSources;
- (id)notificationSourcesWithIdentifiers:(id)arg1;
- (id)notificationSourceWithIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

