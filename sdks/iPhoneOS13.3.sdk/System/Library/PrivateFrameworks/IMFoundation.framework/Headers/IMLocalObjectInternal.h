//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMMessageContext, NSArray, NSLock, NSMutableArray, NSProtocolChecker, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_xpc_object;

@interface IMLocalObjectInternal : NSObject
{
    IMMessageContext *_currentMessageContext;
    NSRecursiveLock *_lock;
    id _target;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_deathLock;
    NSString *_portName;
    NSString *_processName;
    NSProtocolChecker *_protocolChecker;
    NSArray *_whitelistedClasses;
    NSMutableArray *_componentQueue;
    NSLock *_componentQueueLock;
    NSRecursiveLock *_componentQueueProcessingLock;
    struct __CFRunLoopSource _runloopSource;
    BOOL _pendingComponentQueueProcessing;
    BOOL _busyForwarding;
    BOOL _offMainThread;
    BOOL _wasInterrupted;
}

- (void)dealloc;

@end

