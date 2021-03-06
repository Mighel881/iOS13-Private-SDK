//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AVTUIEnvironment;
@protocol AVTViewLayoutInfo;

@interface AVTActionsToAttributeEditorTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    AVTUIEnvironment *_environment;
    id <AVTViewLayoutInfo> _avtViewLayoutInfo;
}

+ (UIEdgeInsets)adjustedSafeAreaInsetsForView:(id)arg1;
@property(readonly, nonatomic) id <AVTViewLayoutInfo> avtViewLayoutInfo; // @synthesize avtViewLayoutInfo=_avtViewLayoutInfo;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
// - (void).cxx_destruct;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithAVTViewLayoutInfo:(id)arg1 environment:(id)arg2;

@end

