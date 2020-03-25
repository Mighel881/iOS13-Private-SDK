//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class CSLockScreenBiometricFailureSettings;

@interface CSLockScreenMesaSettings : PTSettings
{
    BOOL _passcodeRequiredEventsCountAsFailures;
    BOOL _flashRedOnPasscodeRequiredEvents;
    BOOL _successFeedbackWaitsUntilButtonUp;
    CSLockScreenBiometricFailureSettings *_firstFailureSettings;
    CSLockScreenBiometricFailureSettings *_secondFailureSettings;
    CSLockScreenBiometricFailureSettings *_thirdFailureSettings;
    CSLockScreenBiometricFailureSettings *_fourthFailureSettings;
    CSLockScreenBiometricFailureSettings *_fifthFailureSettings;
    double _slowPressDuration;
}

+ (id)settingsControllerModule;
@property(nonatomic) double slowPressDuration; // @synthesize slowPressDuration=_slowPressDuration;
@property(nonatomic) BOOL successFeedbackWaitsUntilButtonUp; // @synthesize successFeedbackWaitsUntilButtonUp=_successFeedbackWaitsUntilButtonUp;
@property(nonatomic) BOOL flashRedOnPasscodeRequiredEvents; // @synthesize flashRedOnPasscodeRequiredEvents=_flashRedOnPasscodeRequiredEvents;
@property(nonatomic) BOOL passcodeRequiredEventsCountAsFailures; // @synthesize passcodeRequiredEventsCountAsFailures=_passcodeRequiredEventsCountAsFailures;
@property(retain, nonatomic) CSLockScreenBiometricFailureSettings *fifthFailureSettings; // @synthesize fifthFailureSettings=_fifthFailureSettings;
@property(retain, nonatomic) CSLockScreenBiometricFailureSettings *fourthFailureSettings; // @synthesize fourthFailureSettings=_fourthFailureSettings;
@property(retain, nonatomic) CSLockScreenBiometricFailureSettings *thirdFailureSettings; // @synthesize thirdFailureSettings=_thirdFailureSettings;
@property(retain, nonatomic) CSLockScreenBiometricFailureSettings *secondFailureSettings; // @synthesize secondFailureSettings=_secondFailureSettings;
@property(retain, nonatomic) CSLockScreenBiometricFailureSettings *firstFailureSettings; // @synthesize firstFailureSettings=_firstFailureSettings;
// - (void).cxx_destruct;
- (void)setDefaultValues;

@end
