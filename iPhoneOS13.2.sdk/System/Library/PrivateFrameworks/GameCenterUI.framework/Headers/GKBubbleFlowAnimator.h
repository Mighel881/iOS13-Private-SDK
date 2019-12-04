//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/UINavigationControllerDelegate-Protocol.h>

@class GKBubbleSet, NSString;

@interface GKBubbleFlowAnimator : NSObject <UINavigationControllerDelegate>
{
    GKBubbleSet *_mostRecentOverlayBubbleSet;
}

+ (id)sharedAnimator;
@property(retain, nonatomic) GKBubbleSet *mostRecentOverlayBubbleSet; // @synthesize mostRecentOverlayBubbleSet=_mostRecentOverlayBubbleSet;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesGoingOffscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesComingOnscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesStayingOnscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithInfo:(id)arg1;
- (void)_resetContentInBubbles:(id)arg1 viewController:(id)arg2 adoptionFlags:(CDStruct_b207fc29)arg3;
- (void)_addKeyframesForSubviewsToFadeInForTransitionWithInfo:(id)arg1;
- (void)_cleanupSubviewsWeFadedOutForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeOutForTransitionWithInfo:(id)arg1;
- (void)_stopIdleAnimatingOffscreenBubblesAfterTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForAnimatingBubblePathsForTransitionWithInfo:(id)arg1;
- (id)_pathTransitionInfoFromPathAnimator:(id)arg1 forTransitionWithInfo:(id)arg2;
-     // Error parsing type: 48@0:8@16@24@32^{CGRect={CGPoint=dd}{CGSize=dd}}40, name: restingWorldPositionForBubble:viewController:forTransitionWithInfo:getFrame:
- (void)_addKeyframesForCustomToAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomFromAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForViewCrossfadeForTransitionWithInfo:(id)arg1;
- (void)_finishTransitionWithInfo:(id)arg1;
- (void)_finalPreparationsBeforeBeginningTransitionWithInfo:(id)arg1;
- (void)_prepareTransitionWithInfo:(id)arg1;
- (void)_syncBubbleVisibilityWithInfo:(id)arg1;
- (long long)syncOverlayViewBubbles:(id)arg1 withViewController:(id)arg2;
- (id)transitionInfoForBubbleFlowTransitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)_transitionInfoForBubbleFlowInvalidationOfViewController:(id)arg1;
- (id)_transitionInfoForBubbleFlowSimpleUpdateOfViewController:(id)arg1;
- (void)invalidateBubblePositionsForViewController:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)animateBubblesFromViewController:(id)arg1 toViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)_animateBubblesTransitionWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)_savvyViewControllerForViewController:(id)arg1 fromViewController:(id)arg2;
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (void)dealloc;
- (void)_returnBubblesFromTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)_moveBubblesToTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)overlayViewNeedsUpdateForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
