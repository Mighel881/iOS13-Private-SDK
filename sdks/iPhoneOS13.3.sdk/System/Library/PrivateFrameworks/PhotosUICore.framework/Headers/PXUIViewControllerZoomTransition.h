//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXUIViewControllerTransition.h>

@interface PXUIViewControllerZoomTransition : PXUIViewControllerTransition
{
}

+ (BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
- (void)animateZoomTransition:(id)arg1 withInitialVelocity:(struct PXDisplayVelocity)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (long long)transitionIdentifierForTransitionMode:(NSUInteger)arg1;
- (BOOL)supportsEdgeSwipeBackGesture;

@end

