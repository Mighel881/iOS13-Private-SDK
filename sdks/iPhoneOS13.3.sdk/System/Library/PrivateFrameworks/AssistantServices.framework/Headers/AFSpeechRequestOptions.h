//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AFLanguageDetectionUserContext, AFMyriadContext, AFSpeechSynthesisRecord, CLLocation, NSDictionary, NSFileHandle, NSNumber, NSString, NSURL, NSUUID, NSXPCListenerEndpoint;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding>
{
    BOOL _isEyesFree;
    BOOL _useAutomaticEndpointing;
    BOOL _useStreamingDictation;
    BOOL _isInitialBringUp;
    BOOL _acousticIdEnabled;
    BOOL _releaseAudioSessionOnRecordingCompletion;
    BOOL _usePrelisteningMode;
    BOOL _pendCallbacksUntilAfterContinuation;
    BOOL _useBorealisBuffer;
    BOOL _fetchSmartSiriVolume;
    BOOL _suppressStartAlert;
    BOOL _suppressStopAlert;
    BOOL _hasPlayedStartAlert;
    BOOL _isOnPhoneCall;
    long long _activationEvent;
    NSString *_activationDeviceIdentifier;
    NSString *_serverCommandId;
    long long _endpointerOperationMode;
    double _homeButtonDownEventTime;
    NSUInteger _homeButtonDownEventMachAbsoluteTime;
    double _activationEventTime;
    NSUInteger _activationEventMachAbsoluteTime;
    double _expectedActivationEventTime;
    NSNumber *_homeButtonUpFromBeep;
    long long _audioFileType;
    NSFileHandle *_audioFileHandle;
    NSDictionary *_voiceTriggerEventInfo;
    AFMyriadContext *_myriadContext;
    NSString *_recordDeviceIdentifier;
    NSXPCListenerEndpoint *_speechRecordingEventListeningEndpoint;
    NSNumber *_notifyState;
    NSURL *_audioFileURL;
    NSUInteger _bargeInOptions;
    AFSpeechSynthesisRecord *_speechSynthesisRecord;
    CLLocation *_location;
    NSString *_locationStatus;
    NSDictionary *_clientAnalyticsContext;
    NSDictionary *_startContext;
    NSDictionary *_stopContext;
    AFLanguageDetectionUserContext *_languageDetectionUserContext;
    long long _dictationInputOrigin;
    NSUUID _turnIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *turnIdentifier; // @synthesize turnIdentifier=_turnIdentifier;
@property(nonatomic) long long dictationInputOrigin; // @synthesize dictationInputOrigin=_dictationInputOrigin;
@property(copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext; // @synthesize languageDetectionUserContext=_languageDetectionUserContext;
@property(nonatomic) BOOL isOnPhoneCall; // @synthesize isOnPhoneCall=_isOnPhoneCall;
@property(copy, nonatomic) NSDictionary *stopContext; // @synthesize stopContext=_stopContext;
@property(copy, nonatomic) NSDictionary *startContext; // @synthesize startContext=_startContext;
@property(copy, nonatomic) NSDictionary *clientAnalyticsContext; // @synthesize clientAnalyticsContext=_clientAnalyticsContext;
@property(copy, nonatomic) NSString *locationStatus; // @synthesize locationStatus=_locationStatus;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) AFSpeechSynthesisRecord *speechSynthesisRecord; // @synthesize speechSynthesisRecord=_speechSynthesisRecord;
@property(nonatomic) NSUInteger bargeInOptions; // @synthesize bargeInOptions=_bargeInOptions;
@property(nonatomic) BOOL hasPlayedStartAlert; // @synthesize hasPlayedStartAlert=_hasPlayedStartAlert;
@property(nonatomic) BOOL suppressStopAlert; // @synthesize suppressStopAlert=_suppressStopAlert;
@property(nonatomic) BOOL suppressStartAlert; // @synthesize suppressStartAlert=_suppressStartAlert;
@property(copy, nonatomic) NSURL *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
@property(copy, nonatomic) NSNumber *notifyState; // @synthesize notifyState=_notifyState;
@property(nonatomic) BOOL fetchSmartSiriVolume; // @synthesize fetchSmartSiriVolume=_fetchSmartSiriVolume;
@property(nonatomic) BOOL useBorealisBuffer; // @synthesize useBorealisBuffer=_useBorealisBuffer;
@property(nonatomic) BOOL pendCallbacksUntilAfterContinuation; // @synthesize pendCallbacksUntilAfterContinuation=_pendCallbacksUntilAfterContinuation;
@property(nonatomic) BOOL usePrelisteningMode; // @synthesize usePrelisteningMode=_usePrelisteningMode;
@property(retain, nonatomic) NSXPCListenerEndpoint *speechRecordingEventListeningEndpoint; // @synthesize speechRecordingEventListeningEndpoint=_speechRecordingEventListeningEndpoint;
@property(copy, nonatomic) NSString *recordDeviceIdentifier; // @synthesize recordDeviceIdentifier=_recordDeviceIdentifier;
@property(nonatomic) BOOL releaseAudioSessionOnRecordingCompletion; // @synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion;
@property(copy, nonatomic) AFMyriadContext *myriadContext; // @synthesize myriadContext=_myriadContext;
@property(copy, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
@property(retain, nonatomic) NSFileHandle *audioFileHandle; // @synthesize audioFileHandle=_audioFileHandle;
@property(nonatomic) long long audioFileType; // @synthesize audioFileType=_audioFileType;
@property(nonatomic) BOOL acousticIdEnabled; // @synthesize acousticIdEnabled=_acousticIdEnabled;
@property(copy, nonatomic) NSNumber *homeButtonUpFromBeep; // @synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep;
@property(nonatomic) BOOL isInitialBringUp; // @synthesize isInitialBringUp=_isInitialBringUp;
@property(nonatomic) double expectedActivationEventTime; // @synthesize expectedActivationEventTime=_expectedActivationEventTime;
@property(nonatomic) NSUInteger activationEventMachAbsoluteTime; // @synthesize activationEventMachAbsoluteTime=_activationEventMachAbsoluteTime;
@property(nonatomic) double activationEventTime; // @synthesize activationEventTime=_activationEventTime;
@property(nonatomic) NSUInteger homeButtonDownEventMachAbsoluteTime; // @synthesize homeButtonDownEventMachAbsoluteTime=_homeButtonDownEventMachAbsoluteTime;
@property(nonatomic) double homeButtonDownEventTime; // @synthesize homeButtonDownEventTime=_homeButtonDownEventTime;
@property(nonatomic) BOOL useStreamingDictation; // @synthesize useStreamingDictation=_useStreamingDictation;
@property(nonatomic) long long endpointerOperationMode; // @synthesize endpointerOperationMode=_endpointerOperationMode;
@property(nonatomic) BOOL useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(copy, nonatomic) NSString *serverCommandId; // @synthesize serverCommandId=_serverCommandId;
@property(nonatomic) BOOL isEyesFree; // @synthesize isEyesFree=_isEyesFree;
@property(copy, nonatomic) NSString *activationDeviceIdentifier; // @synthesize activationDeviceIdentifier=_activationDeviceIdentifier;
@property(nonatomic) long long activationEvent; // @synthesize activationEvent=_activationEvent;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(copy, nonatomic) NSString *btDeviceAddress;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isRaiseToSpeak;
- (BOOL)isVoiceTrigger;
- (id)initWithActivationEvent:(long long)arg1;

@end

