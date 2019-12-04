//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CURunLoopThread : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    struct __CFRunLoop *_runLoop;
    _Bool _runLoopValid;
    struct NSMutableArray *_startBlocks;
    _Bool _threadRunning;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _invalidationHandler;
    NSString *_label;
    id /* block */ _threadInitializeHandler;
    id /* block */ _threadFinalizeHandler;
}

@property(copy, nonatomic) id /* block */ threadFinalizeHandler; // @synthesize threadFinalizeHandler=_threadFinalizeHandler;
@property(copy, nonatomic) id /* block */ threadInitializeHandler; // @synthesize threadInitializeHandler=_threadInitializeHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_threadMain;
- (_Bool)_scheduleStopThread;
- (void)performBlock:(id /* block */)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end
