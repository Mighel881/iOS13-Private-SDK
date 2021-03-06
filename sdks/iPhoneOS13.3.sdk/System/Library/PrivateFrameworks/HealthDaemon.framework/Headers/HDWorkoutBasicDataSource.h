//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDClientDataCollectionObservationStateMonitorDelegate-Protocol.h>
#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutDataSource-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>

@class HDClientDataCollectionObservationStateMonitor, HDDataCollectionAssertion, HDHealthStoreClient, HDProfile, HKDataFlowLink, HKWorkoutConfiguration, NSLock, NSSet, NSUUID;

@interface HDWorkoutBasicDataSource : NSObject <HDDataObserver, HKDataFlowLinkProcessor, HDClientDataCollectionObservationStateMonitorDelegate, HDWorkoutDataSource>
{
    HDProfile *_profile;
    HDHealthStoreClient *_client;
    NSLock *_lock;
    HKDataFlowLink *_workoutDataFlowLink;
    NSUUID *_workoutDataProcessorUUID;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSSet *_sampleTypesToCollect;
    HDDataCollectionAssertion *_collectionAssertion;
    HDClientDataCollectionObservationStateMonitor *_clientStateMonitor;
}

// - (void).cxx_destruct;
- (void)dataCollectionObservationStateDidChangeForClient:(id)arg1;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (void)_forwardSamples:(id)arg1;
- (BOOL)_enumerateSamplesOfType:(id)arg1 from:(id)arg2 to:(id)arg3 error:(id )arg4 handler:(id /* CDUnknownBlockType */)arg5;
- (void)_stopObservingSampleTypes:(id)arg1;
- (void)_startObservingSampleTypes:(id)arg1;
- (double)_collectionInterval;
- (id)_initialMetadata;
@property(copy, nonatomic) NSSet *sampleTypesToCollect;
- (void)_stopCollection;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 client:(id)arg2;

@end

