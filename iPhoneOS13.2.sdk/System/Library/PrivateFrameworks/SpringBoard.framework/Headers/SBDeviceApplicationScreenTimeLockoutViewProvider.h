//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>

#import <SpringBoard/LOViewControllerDelegate-Protocol.h>

@class NSString, UIViewController;
@protocol LOViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider <LOViewControllerDelegate>
{
    UIViewController<LOViewController> *_lockoutViewController;
}

- (id)_newLockoutViewControllerWithBundleIdentifier:(id)arg1;
- (id)_realOverlayViewController;
- (void)_deactivateIfPossible;
- (void)_activateIfPossible;
- (void)lockoutViewControllerDidFinishDismissing:(id)arg1;
- (void)_handleInstalledAppsChanged:(id)arg1;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
