//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/DNDRemoteServiceConnectionEventListener-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface DNDSettingsService : NSObject <DNDRemoteServiceConnectionEventListener>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_settingsUpdateListeners;
    _Bool _registeredForUpdates;
    NSString *_clientIdentifier;
}

+ (id)serviceForClientIdentifier:(id)arg1;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)_handleLostXPCConnectionWithRetry:(_Bool)arg1;
- (_Bool)_queue_registerForSettingsUpdatesIfRequired;
- (void)remoteService:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)removeSettingsUpdateListener:(id)arg1;
- (void)addSettingsUpdateListener:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (_Bool)setScheduleSettings:(id)arg1 error:(id *)arg2;
- (id)scheduleSettingsReturningError:(id *)arg1;
- (_Bool)setPhoneCallBypassSettings:(id)arg1 error:(id *)arg2;
- (id)phoneCallBypassSettingsReturningError:(id *)arg1;
- (_Bool)setBehaviorSettings:(id)arg1 error:(id *)arg2;
- (id)behaviorSettingsReturningError:(id *)arg1;
- (id)_initWithClientIdentifier:(id)arg1;
- (_Bool)setScheduleSettings:(id)arg1 returningError:(id *)arg2;
- (_Bool)setPhoneCallBypassSettings:(id)arg1 returningError:(id *)arg2;
- (_Bool)setBehaviorSettings:(id)arg1 returningError:(id *)arg2;
- (_Bool)removeSettingsUpdateListener:(id)arg1 error:(id *)arg2;
- (_Bool)addSettingsUpdateListener:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
