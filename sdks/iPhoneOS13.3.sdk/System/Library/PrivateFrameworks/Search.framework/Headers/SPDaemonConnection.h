//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPXPCConnection;
@protocol OS_dispatch_queue;

@interface SPDaemonConnection : NSObject
{
    SPXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSString *_daemonName;
    struct __CFDictionary _runningQueries;
}

+ (id)sharedBackgroundConnection;
+ (id)sharedConnection;
@property(nonatomic) struct __CFDictionary runningQueries; // @synthesize runningQueries=_runningQueries;
@property(retain, nonatomic) NSString *daemonName; // @synthesize daemonName=_daemonName;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)barrierOnXPC:(id /* CDUnknownBlockType */)arg1;
- (id)connectionQueue;
- (id)init;
- (id)initWithDaemonName:(id)arg1 qos:(unsigned int)arg2;
- (void)sendSFFeedback:(id)arg1 type:(long long)arg2 queryId:(NSUInteger)arg3;
- (void)requestParsecParametersWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)retrieveFirstTimeExperienceTextWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)clearInput:(id)arg1;
- (void)preheat;
- (void)deactivate;
- (void)sendApps:(id)arg1;
- (void)activate:(id /* CDUnknownBlockType */)arg1;
- (void)activate;
- (void)cancelQuery:(id)arg1;
- (id)startQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)sendMessageForToken:(id)arg1;
- (void)_sendMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)_sendFeedbackMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (id)_connection;
- (void)_resetConnection;

@end

