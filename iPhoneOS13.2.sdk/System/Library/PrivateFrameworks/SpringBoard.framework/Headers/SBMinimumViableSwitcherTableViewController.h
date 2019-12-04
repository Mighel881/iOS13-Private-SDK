//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <SpringBoard/SBSwitcherContentViewControlling-Protocol.h>

@class BSAnimationSettings, NSString, SBApplicationSceneView, SBBestAppSuggestion;
@protocol SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBSwitcherContentViewControlling>
{
    id <SBSwitcherContentViewControllerDelegate> _delegate;
    SBApplicationSceneView *_temporaryAppView;
    SBApplicationSceneView *_temporarySideAppView;
    SBBestAppSuggestion *_bestAppSuggestion;
    _Bool _liveContentRasterizationDisabled;
    id <SBSwitcherContentViewControllerDataSource> _dataSource;
    long long _contentOrientation;
}

@property(nonatomic, getter=isLiveContentRasterizationDisabled) _Bool liveContentRasterizationDisabled; // @synthesize liveContentRasterizationDisabled=_liveContentRasterizationDisabled;
@property(nonatomic) long long contentOrientation; // @synthesize contentOrientation=_contentOrientation;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // @synthesize bestAppSuggestion=_bestAppSuggestion;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)noteAppLayoutsDidChange;
- (id)dispatchAndReturnTetheredRemovalEventWithID:(id)arg1 phase:(unsigned long long)arg2;
- (void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(id /* block */)arg3;
- (id)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(_Bool)arg3;
- (id)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (_Bool)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (id)dispatchAndReturnTetheredInsertionEventWithID:(id)arg1 phase:(unsigned long long)arg2;
- (void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(id /* block */)arg3;
- (id)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(_Bool)arg3;
- (id)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (_Bool)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (id)enterAppExposeForBundleID:(id)arg1;
- (void)handleModifierAction:(id)arg1;
@property(nonatomic, getter=isShowingModifierTimeline) _Bool showModifierTimeline;
- (id)handleGestureDidEnd:(id)arg1;
- (id)handleGestureDidUpdate:(id)arg1;
- (id)handleGestureDidBegin:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
@property(readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property(readonly, nonatomic) _Bool canInterruptActiveTransition;
- (void)performTransitionWithContext:(id)arg1 animated:(_Bool)arg2 alongsideAnimationHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_appLayouts;
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(_Bool)arg1;
- (_Bool)isStatusBarHiddenForAppLayout:(id)arg1;
- (_Bool)shouldRubberbandHomeGrabberView;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (_Bool)isUserInteractionEnabled;
- (_Bool)isWindowVisible;
- (_Bool)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(_Bool)arg3;
- (void)relinquishTransientOverlayViewController:(id)arg1;
- (void)failMultitaskingGesturesForReason:(id)arg1;
- (double)minimumHomeScreenScale;
- (double)switcherCardScale;
- (double)snapshotScaleForSceneHandle:(id)arg1;
- (void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
