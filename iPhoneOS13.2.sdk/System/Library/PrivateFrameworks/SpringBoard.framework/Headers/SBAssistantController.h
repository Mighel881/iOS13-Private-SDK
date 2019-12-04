//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSCoverSheetOverlaying-Protocol.h>
#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBFAuthenticationResponder-Protocol.h>
#import <SpringBoard/SBFIdleTimerBehaviorProviding-Protocol.h>
#import <SpringBoard/SBFluidGestureDismissable-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBIdleTimerProviding-Protocol.h>
#import <SpringBoard/SiriPresentationSpringBoardMainScreenViewControllerDelegate-Protocol.h>

@class BSEventQueue, FBDisplayLayoutElement, NSHashTable, NSMutableArray, NSSet, NSString, SBAssistantWindow, SBFAuthenticationAssertion, SBFluidDismissalState, SBHomeGestureParticipant, SBSystemAnimationSettings, SiriPresentationSpringBoardMainScreenViewController, UIApplicationSceneDeactivationAssertion;
@protocol BSInvalidatable, SBIdleTimer, SBIdleTimerCoordinating;

@interface SBAssistantController : NSObject <SBFluidGestureDismissable, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, PTSettingsKeyObserver, SBHomeGestureParticipantDelegate, SBFAuthenticationResponder, SiriPresentationSpringBoardMainScreenViewControllerDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying>
{
    BSEventQueue *_operationQueue;
    NSString *_appDisplayIDBeingHosted;
    SBAssistantWindow *_assistantWindow;
    _Bool _unlockedDevice;
    _Bool _isHidingOtherWindows;
    SBFAuthenticationAssertion *_disableAssertion;
    NSHashTable *_observers;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SiriPresentationSpringBoardMainScreenViewController *_mainScreenSiriPresentation;
    SiriPresentationSpringBoardMainScreenViewController *_presentedMainScreenSiriPresentation;
    _Bool _visible;
    _Bool _dismissing;
    FBDisplayLayoutElement *_mainDisplayLayoutElement;
    SBFluidDismissalState *_fluidDismissalState;
    NSSet *_audioCategoriesDisablingVolumeHUD;
    id <BSInvalidatable> _hideApplicationModalAlertsAssertion;
    SBSystemAnimationSettings *_settings;
    id <SBIdleTimer> _idleTimer;
    NSMutableArray *_windowLevelAssertions;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
    id <BSInvalidatable> _suspendWallpaperAnimationAssertion;
}

+ (void)bootstrapServices;
+ (_Bool)isVisible;
+ (_Bool)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
@property(retain, nonatomic) id <BSInvalidatable> suspendWallpaperAnimationAssertion; // @synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion;
@property(nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator; // @synthesize idleTimerCoordinator=_idleTimerCoordinator;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) _Bool unlockedDevice; // @synthesize unlockedDevice=_unlockedDevice;
- (void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(id /* block */)arg3;
- (void)siriPresentation:(id)arg1 isEnabledDidChange:(_Bool)arg2;
- (void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(id /* block */)arg3;
- (void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(id /* block */)arg3;
- (void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
- (_Bool)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2;
- (void)deviceUnlockRequestedWithPassword:(id)arg1;
- (void)screenWakeIdleTimerResetRequested;
- (void)screenWakeRequested;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (void)dismissOverlayForDashBoardAnimated:(_Bool)arg1;
- (id)_idleTimerBehavior;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)_prototypeSettingsChanged;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)_updateRootViewControllerOwnsHomeGesture;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)_setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_dismissForMainScreenWithFactory:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentForMainScreenAnimated:(_Bool)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_createAssistantWindowIfNecessary;
- (void)_updateWindowLevel;
- (void)_remoteLocked:(id)arg1;
- (void)_deviceBlocked:(id)arg1;
- (void)_uiLocked:(id)arg1;
- (void)_noteDeviceLockedOrBlocked;
- (void)_restoreOrientation;
- (void)_setVisible:(_Bool)arg1;
- (void)_setUnlockedDevice:(_Bool)arg1;
- (void)_updateOrientationLock;
- (void)_updateSceneClientSettings;
- (void)_bioAuthenticated:(id)arg1;
- (void)_viewDidDisappearOnMainScreen:(_Bool)arg1;
- (void)_toggleModalAlertHidingAssertion:(_Bool)arg1;
- (void)_viewWillDisappearOnMainScreen:(_Bool)arg1;
- (void)_viewDidAppearOnMainScreen:(_Bool)arg1;
- (void)_viewWillAppearOnMainScreen:(_Bool)arg1;
- (id)_activationSettingsWithPunchoutStyle:(long long)arg1;
- (double)_defaultAnimatedDismissDurationForMainScreen;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)mainScreenView;
- (id)window;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)shouldShowSystemVolumeHUDForCategory:(id)arg1;
- (_Bool)overrideInterfaceOrientation:(long long *)arg1;
- (id)activationSettings;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 factory:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 completion:(id /* block */)arg2;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1;
- (void)dismissAssistantViewIfNecessary;
- (_Bool)requestPasscodeUnlockWithCompletion:(id /* block */)arg1;
- (id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3;
- (void)dealloc;
- (id)_init;
- (id)init;
@property(retain, nonatomic) SBFluidDismissalState *fluidDismissalState;

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
