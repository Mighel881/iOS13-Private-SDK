//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/SBHardwareButtonInteraction-Protocol.h>

@class NSString, SiriLongPressButtonSource;
@protocol SiriAssertion;

@interface SBSiriHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>
{
    double _initialPressDownTime;
    long long _siriButtonIdentifier;
    SiriLongPressButtonSource *_siriActivationSource;
    double _activationInterval;
    id <SiriAssertion> _siriPreheatAssertion;
    id <SiriAssertion> _siriButtonDownAssertion;
}

+ (_Bool)dismissSiriTransientOverlayOnSinglePressUp:(long long)arg1;
+ (id)hardwareButtonInteractionForLockButton;
+ (id)hardwareButtonInteractionForHomeButton;
@property(retain, nonatomic) id <SiriAssertion> siriButtonDownAssertion; // @synthesize siriButtonDownAssertion=_siriButtonDownAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriPreheatAssertion; // @synthesize siriPreheatAssertion=_siriPreheatAssertion;
@property(nonatomic) double activationInterval; // @synthesize activationInterval=_activationInterval;
@property(retain, nonatomic) SiriLongPressButtonSource *siriActivationSource; // @synthesize siriActivationSource=_siriActivationSource;
@property(nonatomic) long long siriButtonIdentifier; // @synthesize siriButtonIdentifier=_siriButtonIdentifier;
@property(nonatomic) double initialPressDownTime; // @synthesize initialPressDownTime=_initialPressDownTime;
- (id)hardwareButtonGestureParameters;
- (_Bool)consumeLongPress;
- (_Bool)consumeSinglePressUp;
- (_Bool)consumeInitialPressDown;
- (void)observeLongPressCanceled;
- (void)observeFinalPressUp;
- (void)_cancelAllSiriActions;
- (void)_cancelPreheating;
- (void)_preheatSiriForPresentationAfterInterval:(double)arg1;
- (void)_siriHomeButtonPrefsDidChange:(id)arg1;
- (id)initWithSiriButton:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
