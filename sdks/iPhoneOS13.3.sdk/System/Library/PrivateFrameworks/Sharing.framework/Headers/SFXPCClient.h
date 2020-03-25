//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionEstablished;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)connectionEstablished;
- (void)onqueue_invalidated;
- (void)invalidated;
- (void)onqueue_interrupted;
- (void)interrupted;
- (void)onqueue_ensureConnectionEstablished;
- (void)onqueue_ensureXPCStarted;
- (void)onqueue_invalidate;
- (void)_invalidate;
- (void)onqueue_activate;
- (void)_activate;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* CDUnknownBlockType */)arg1;
- (void)getRemoteObjectProxyOnQueue:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end
