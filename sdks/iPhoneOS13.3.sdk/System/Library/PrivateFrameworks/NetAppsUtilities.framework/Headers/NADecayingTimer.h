//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

@interface NADecayingTimer : NSObject
{
    NSDate *_referenceDate;
    NSUInteger _minimumUnit;
    id /* CDUnknownBlockType */ _block;
    NSTimer *_timer;
}

+ (id)scheduledTimerWithReferenceDate:(id)arg1 minimumUnit:(NSUInteger)arg2 block:(id /* CDUnknownBlockType */)arg3;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(readonly, nonatomic) NSUInteger minimumUnit; // @synthesize minimumUnit=_minimumUnit;
@property(readonly, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
// - (void).cxx_destruct;
- (NSUInteger)_mostSignificantUnitForDateComponents:(id)arg1;
- (void)_timerEvent;
- (void)_scheduleNextTimer;
- (id)_nextFireDate;
- (void)invalidate;
- (void)dealloc;
- (id)initWithReferenceDate:(id)arg1 minimumUnit:(NSUInteger)arg2 block:(id /* CDUnknownBlockType */)arg3;

@end

