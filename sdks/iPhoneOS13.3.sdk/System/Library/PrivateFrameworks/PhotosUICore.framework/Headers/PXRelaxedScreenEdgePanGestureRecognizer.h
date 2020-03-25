//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@interface PXRelaxedScreenEdgePanGestureRecognizer : UIPanGestureRecognizer
{
    CGPoint _initialTouchLocation;
    NSUInteger _edges;
    double _minAngleToEdge;
    NSUInteger _trackingEdge;
    UIEdgeInsets _edgeAllowances;
}

@property(nonatomic) NSUInteger trackingEdge; // @synthesize trackingEdge=_trackingEdge;
@property(nonatomic) double minAngleToEdge; // @synthesize minAngleToEdge=_minAngleToEdge;
@property(nonatomic) UIEdgeInsets edgeAllowances; // @synthesize edgeAllowances=_edgeAllowances;
@property(nonatomic) NSUInteger edges; // @synthesize edges=_edges;
- (double)translationDistanceInView:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setMaximumNumberOfTouches:(NSUInteger)arg1;
- (void)setMinimumNumberOfTouches:(NSUInteger)arg1;
@property(nonatomic) double minTranslation;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
