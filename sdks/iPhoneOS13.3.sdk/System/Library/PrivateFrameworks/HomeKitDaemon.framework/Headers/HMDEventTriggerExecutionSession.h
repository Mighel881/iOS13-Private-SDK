//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDEventTriggerSession.h>

#import <HomeKitDaemon/HMDEventDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDEventTriggerUserConfirmationSession, HMDPredicateUtilities, HMDTriggerConfirmationTimer, HMFTimer, HomeKitEventTriggerExecutionSessionEvent, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSPredicate, NSString;

@interface HMDEventTriggerExecutionSession : HMDEventTriggerSession <HMFDumpState, HMFLogging, HMDEventDelegate, HMFTimerDelegate>
{
    BOOL _actionSetExecutionInProgress;
    BOOL _restoreInProgress;
    BOOL _executionCompleteCalled;
    NSMutableArray *_triggerEvents;
    NSMutableArray *_causingDevices;
    NSArray *_endEvents;
    NSArray *_monitorEvents;
    NSUInteger _executionState;
    HMDPredicateUtilities *_predicateUtilities;
    NSArray *_actionSets;
    NSPredicate *_evaluationCondition;
    NSArray *_recurrences;
    HMDEventTriggerUserConfirmationSession *_userConfirmationSession;
    HMDTriggerConfirmationTimer *_secureTriggerConfirmationTimer;
    HMFTimer *_startCharacteristicsMonitorTimer;
    HomeKitEventTriggerExecutionSessionEvent *_metricEvent;
    NSMapTable *_writeRequests;
    NSMutableSet *_mediaProfiles;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSMutableSet *mediaProfiles; // @synthesize mediaProfiles=_mediaProfiles;
@property(readonly, nonatomic) NSMapTable *writeRequests; // @synthesize writeRequests=_writeRequests;
@property(readonly, nonatomic) HomeKitEventTriggerExecutionSessionEvent *metricEvent; // @synthesize metricEvent=_metricEvent;
@property(nonatomic) BOOL executionCompleteCalled; // @synthesize executionCompleteCalled=_executionCompleteCalled;
@property(nonatomic) BOOL restoreInProgress; // @synthesize restoreInProgress=_restoreInProgress;
@property(nonatomic) BOOL actionSetExecutionInProgress; // @synthesize actionSetExecutionInProgress=_actionSetExecutionInProgress;
@property(retain, nonatomic) HMFTimer *startCharacteristicsMonitorTimer; // @synthesize startCharacteristicsMonitorTimer=_startCharacteristicsMonitorTimer;
@property(retain, nonatomic) HMDTriggerConfirmationTimer *secureTriggerConfirmationTimer; // @synthesize secureTriggerConfirmationTimer=_secureTriggerConfirmationTimer;
@property(readonly, nonatomic) HMDEventTriggerUserConfirmationSession *userConfirmationSession; // @synthesize userConfirmationSession=_userConfirmationSession;
@property(readonly, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(readonly, nonatomic) NSPredicate *evaluationCondition; // @synthesize evaluationCondition=_evaluationCondition;
@property(readonly, nonatomic) NSArray *actionSets; // @synthesize actionSets=_actionSets;
@property(readonly, nonatomic) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(nonatomic) NSUInteger executionState; // @synthesize executionState=_executionState;
@property(retain, nonatomic) NSArray *monitorEvents; // @synthesize monitorEvents=_monitorEvents;
@property(readonly, nonatomic) NSArray *endEvents; // @synthesize endEvents=_endEvents;
@property(readonly, nonatomic) NSMutableArray *causingDevices; // @synthesize causingDevices=_causingDevices;
@property(readonly, nonatomic) NSMutableArray *triggerEvents; // @synthesize triggerEvents=_triggerEvents;
// - (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (id)didOccurEvent:(id)arg1 causingDevice:(id)arg2;
- (void)_callExecutionCompleteIfNoMoreOutstandingRequests;
- (void)handleSessionPlaybackStateUpdatedNotification:(id)arg1;
- (void)_handleMonitoringEvent:(id)arg1;
- (void)_restoreState;
- (void)_removeUserDialog;
- (void)_callExecutionComplete:(id)arg1;
- (void)_submitMetric:(id)arg1;
- (void)_callExecutionComplete:(id)arg1 callDelegate:(BOOL)arg2;
- (id)valueInActionSetWriteResponse:(id)arg1 actionSetUUID:(id)arg2 accUUID:(id)arg3 serviceID:(id)arg4 characteristicID:(id)arg5;
- (id)_createMonitoringEvents:(id)arg1;
- (void)_activateEvents:(id)arg1;
- (void)_activateMonitoringEvents;
- (void)_activateDurationEvents;
- (void)_handleActionSetExecutionResponse:(id)arg1 actionSetError:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_directlyExecuteActionSetsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_addEvent:(id)arg1 causingDevice:(id)arg2;
- (void)addEvent:(id)arg1 causingDevice:(id)arg2;
- (void)_userResponse:(NSUInteger)arg1 device:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)userResponse:(NSUInteger)arg1 device:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)durationEndEvents;
- (void)postponeRestoreIfWaitingForEndEvent;
- (void)cancelSessionIfWaitingForUserResponse;
- (BOOL)containsSecureActionSet;
- (void)_executeTriggerAfterEvaluatingCondition:(id)arg1;
- (void)_evaluateFiringTrigger;
- (void)evaluateFiringTrigger;
- (id)dumpState;
@property(readonly, nonatomic) BOOL needsUserConfirmation;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithEventTrigger:(id)arg1 predicateUtilities:(id)arg2 triggerEvent:(id)arg3 causingDevice:(id)arg4 workQueue:(id)arg5 actionSets:(id)arg6 evaluationCondition:(id)arg7 recurrences:(id)arg8 endEvents:(id)arg9 msgDispatcher:(id)arg10;

@end
