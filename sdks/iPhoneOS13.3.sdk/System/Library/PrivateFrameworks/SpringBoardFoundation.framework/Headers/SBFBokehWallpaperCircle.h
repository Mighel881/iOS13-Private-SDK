//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSTimer;

@interface SBFBokehWallpaperCircle : CALayer
{
    NSTimer *_lifetimeTimer;
    long long _fillColor;
    BOOL _shouldBlink;
    BOOL _isFading;
    long long _direction;
    double _velocity;
    CGRect _originalFrame;
    BOOL _fadingOut;
    BOOL _shouldPause;
    BOOL _isPulsating;
    CGRect _superviewBounds;
}

@property(nonatomic) BOOL isPulsating; // @synthesize isPulsating=_isPulsating;
@property(nonatomic) BOOL shouldPause; // @synthesize shouldPause=_shouldPause;
@property(nonatomic) CGRect superviewBounds; // @synthesize superviewBounds=_superviewBounds;
@property(nonatomic, getter=isFadingOut) BOOL fadingOut; // @synthesize fadingOut=_fadingOut;
// - (void).cxx_destruct;
- (void)_resumeAnimations;
- (void)_pauseAnimations;
- (void)setAnimationsEnabled:(BOOL)arg1;
- (double)randomOpacity;
- (void)_animateInNewCircle;
- (void)prepareForReuse;
- (void)_timerFired;
- (double)desiredOpacity;
- (void)startPulsatingCircle;
- (CGPoint)desiredPositionDeltaForX:(double)arg1 y:(double)arg2 lockScreen:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1 fillColor:(long long)arg2;
- (void)setCircleColor:(long long)arg1;

@end

