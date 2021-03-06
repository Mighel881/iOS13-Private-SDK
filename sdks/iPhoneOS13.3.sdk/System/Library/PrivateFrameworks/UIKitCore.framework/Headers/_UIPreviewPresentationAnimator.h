//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationAnimator : NSObject
{
    double _duration;
    CAMediaTimingFunction *_mediaTimingFunction;
    double _startMediaTime;
    id /* CDUnknownBlockType */ _advanceBlock;
    CADisplayLink *_displayLink;
}

@property(nonatomic) __weak CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) id /* CDUnknownBlockType */ advanceBlock; // @synthesize advanceBlock=_advanceBlock;
@property(nonatomic) double startMediaTime; // @synthesize startMediaTime=_startMediaTime;
@property(retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction; // @synthesize mediaTimingFunction=_mediaTimingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (void)_advanceFromDisplayLink:(id)arg1;
- (void)stopAnimation;
- (id)initWithDuration:(double)arg1 advanceBlock:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

