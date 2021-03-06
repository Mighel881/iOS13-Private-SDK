//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/MTLumaDodgePillBackgroundLuminanceObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyPathObserver-Protocol.h>
#import <SpringBoard/SBAttentionAwarenessClientDelegate-Protocol.h>

@class MTLumaDodgePillSettings, MTLumaDodgePillView, NSMutableSet, SBAttentionAwarenessClient, SBFHomeGrabberSettings;
@protocol SBHomeGrabberDelegate;

@interface SBHomeGrabberView : UIView <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, MTLumaDodgePillBackgroundLuminanceObserver>
{
    SBFHomeGrabberSettings *_settings;
    MTLumaDodgePillSettings *_pillSettings;
    MTLumaDodgePillView *_pillView;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    long long _touchState;
    NSUInteger _lastActivatingToken;
    NSUInteger _lastInitialHideToken;
    BOOL _autoHides;
    BOOL _edgeProtectEnabled;
    NSMutableSet *_hiddenOverrides;
    long long _luma;
    long long _presence;
    long long _style;
    NSUInteger _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    BOOL _suppressesBounce;
    id <SBHomeGrabberDelegate> _delegate;
    long long _colorBias;
}

@property(nonatomic) BOOL suppressesBounce; // @synthesize suppressesBounce=_suppressesBounce;
@property(nonatomic) long long colorBias; // @synthesize colorBias=_colorBias;
@property(nonatomic, getter=isEdgeProtectEnabled) BOOL edgeProtectEnabled; // @synthesize edgeProtectEnabled=_edgeProtectEnabled;
@property(nonatomic) BOOL autoHides; // @synthesize autoHides=_autoHides;
@property(nonatomic) __weak id <SBHomeGrabberDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg1;
- (void)clientDidResetForUserAttention:(id)arg1;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(NSUInteger)arg3 withAssociatedObject:(id)arg4;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)layoutSubviews;
- (void)_bounce;
- (void)_noteActiveForTouchThatShouldUnhideImmediately:(BOOL)arg1;
- (void)_invalidateInitialAutoHideTime;
- (BOOL)_bounceHitTest:(CGPoint)arg1;
- (CGRect)_calculatePillFrame;
- (void)_updatePresence:(long long)arg1 style:(long long)arg2 withAnimationSettings:(id)arg3;
- (void)_animateToStyle:(long long)arg1 disallowAdditive:(BOOL)arg2 withAnimationSettings:(id)arg3;
- (void)_updateIdleTouchAwarenessClient;
- (id)_animationSettingsForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 fromPresence:(long long)arg3 toPresence:(long long)arg4;
- (BOOL)_edgeProtectEffectivelyEnabled;
- (BOOL)_autohideEffectivelyEnabled;
- (long long)_calculateStyle;
- (long long)_calculateLumaStyle;
- (long long)_calculatePresence;
- (id)_newPillView;
- (void)setHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationSettings:(id)arg3;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (CGRect)grabberFrameForBounds:(CGRect)arg1;
- (CGSize)suggestedSizeForContentWidth:(double)arg1;
@property(readonly, nonatomic) double suggestedEdgeSpacing;
- (void)updateStyleWithAnimationSettings:(id)arg1;
- (void)updateStyle;
- (void)resetAutoHideWithInitialDelay:(double)arg1;
- (void)resetAutoHide;
- (void)forgetBackgroundLuminance;
- (void)turnOffAutoHideWithDelay:(double)arg1;
- (void)turnOnAutoHideWithInitialDelay:(double)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 settings:(id)arg2 shouldEnableGestures:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1 shouldEnableGestures:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

