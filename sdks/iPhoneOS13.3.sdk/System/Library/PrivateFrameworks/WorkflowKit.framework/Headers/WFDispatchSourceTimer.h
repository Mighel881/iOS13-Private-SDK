//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface WFDispatchSourceTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
// - (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 repeatIntervalInt:(NSUInteger)arg2 queue:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (id)initWithInterval:(double)arg1 repeatInterval:(double)arg2 queue:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;

@end

