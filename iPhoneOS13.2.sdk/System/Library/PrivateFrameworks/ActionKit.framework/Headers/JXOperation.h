//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface JXOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
- (void)startAndWaitUntilFinished;
- (void)finish;
- (void)willFinish;
- (void)cancel;
- (_Bool)isConcurrent;
- (void)start;
- (id)init;
- (void)dealloc;

@end
