//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (RCAdditions)
+ (id)recursiveDescription;
- (void)rc_configurePopoverControllerWithSource:(id)arg1;
- (void)rc_applicationWillEnterForeground;
- (void)rc_applicationDidEnterBackground;
- (BOOL)rc_shouldAutoDisableUpdatesWhenInBackground;
- (void)rc_screenUpdatesDisabledDidChange;
@property(nonatomic, setter=rc_setScreenUpdatesDisabled:) BOOL rc_screenUpdatesDisabled;
- (void)rc_automaticallyUpdateScreenUpdatesDisabled;
- (void)rc_ensureIsInterfaceOrientationMask:(NSUInteger)arg1 preferredOrientation:(long long)arg2 doneEnsuringBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)rc_isDescendantOfViewController:(id)arg1;
- (id)rc_navigationItemForPresentingNavigationItem:(id)arg1 forViewController:(id)arg2;
- (void)rc_loadViewIfNecessary;
- (BOOL)rc_isPrimaryLayoutAxis:(long long)arg1;
- (BOOL)rc_canAnimate;
- (void)rc_addChildViewWithViewController:(id)arg1 toView:(id)arg2;
- (void)rc_addChildViewWithViewController:(id)arg1;
- (void)rc_runAutomatedDebuggingTestsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)recursiveDescription;
- (id)_recursiveDescriptionWithInset:(id)arg1;
@end

