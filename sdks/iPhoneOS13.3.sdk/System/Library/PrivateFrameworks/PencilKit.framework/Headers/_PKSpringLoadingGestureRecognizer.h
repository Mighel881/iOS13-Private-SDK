//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface _PKSpringLoadingGestureRecognizer : UIGestureRecognizer
{
    BOOL _hasRecognized;
    double _stationaryFingerTimeout;
    UITouch *_gestureTouch;
    CGPoint _startLocation;
}

@property(nonatomic) CGPoint startLocation; // @synthesize startLocation=_startLocation;
@property(retain, nonatomic) UITouch *gestureTouch; // @synthesize gestureTouch=_gestureTouch;
@property(nonatomic) BOOL hasRecognized; // @synthesize hasRecognized=_hasRecognized;
@property(nonatomic) double stationaryFingerTimeout; // @synthesize stationaryFingerTimeout=_stationaryFingerTimeout;
// - (void).cxx_destruct;
- (BOOL)_pointShouldBeRecognized:(CGPoint)arg1;
- (BOOL)_pointInsideRecognitionPossibleArea:(CGPoint)arg1;
- (void)_stationaryFingerTimerFired;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

