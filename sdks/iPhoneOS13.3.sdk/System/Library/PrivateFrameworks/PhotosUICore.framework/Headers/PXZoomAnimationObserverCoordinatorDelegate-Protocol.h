//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXZoomAnimationObserverCoordinator;
@protocol PXZoomAnimationContext;

@protocol PXZoomAnimationObserverCoordinatorDelegate <NSObject>

@optional
- (void)zoomAnimationObserverCoordinator:(PXZoomAnimationObserverCoordinator *)arg1 animationDidEndWithContext:(id <PXZoomAnimationContext>)arg2;
- (void)zoomAnimationObserverCoordinator:(PXZoomAnimationObserverCoordinator *)arg1 animationWillBeginWithContext:(id <PXZoomAnimationContext>)arg2;
@end

