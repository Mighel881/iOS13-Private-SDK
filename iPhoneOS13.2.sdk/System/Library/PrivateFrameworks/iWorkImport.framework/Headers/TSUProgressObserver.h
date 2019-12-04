//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUProgressObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _handler;
    double _lastHandledValue;
    _Bool _lastHandledIndeterminate;
    double _valueInterval;
}

@property(readonly, nonatomic) double valueInterval; // @synthesize valueInterval=_valueInterval;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(_Bool)arg3;
- (id)init;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

@end
