//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

#import <StoreKitUI/SKUIInspectableObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMetricsPageRenderEvent : SSMetricsBaseEvent <SKUIInspectableObject>
{
    NSMutableArray *_domChanges;
    NSMutableArray *_requests;
    NSDictionary *_metricsBase;
}

+ (id)_sampleWindowStartTime;
+ (void)_setSampleWindowStartTime:(id)arg1;
+ (double)_randomDouble;
+ (BOOL)shouldCollectPageRenderDataForDocument:(id)arg1;
+ (BOOL)shouldCollectPageRenderData;
@property(copy, nonatomic) NSDictionary *metricsBase; // @synthesize metricsBase=_metricsBase;
@property(readonly, copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, copy, nonatomic) NSArray *domChanges; // @synthesize domChanges=_domChanges;
// - (void).cxx_destruct;
- (void)populateObjectInspector:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)appendPropertiesToBody:(id)arg1;
@property(readonly, nonatomic, getter=isReadyForSubmission) BOOL readyForSubmission;
- (void)appendSamplingPropertiesFromClientContext:(id)arg1;
- (void)appendMetricsBaseProperties:(id)arg1;
@property(nonatomic, setter=setXPSamplingPercentageUsers:) double xpSamplingPercentageUsers;
@property(nonatomic, setter=setXPSamplingForced:) BOOL xpSamplingForced;
@property(nonatomic, setter=setXPSessionDuration:) double xpSessionDuration;
@property(nonatomic) double pageUserReadyTime;
@property(nonatomic) double resourceRequestEndTime;
@property(nonatomic) double resourceRequestOnScreenEndTime;
@property(nonatomic) double resourceRequestStartTime;
- (void)addRequest:(id)arg1;
- (void)addDOMChange:(id)arg1;
@property(nonatomic) double platformJsonParseEndTime;
@property(nonatomic) double platformJsonParseStartTime;
@property(nonatomic) BOOL platformResponseWasCached;
@property(nonatomic) double platformResponseEndTime;
@property(nonatomic) double platformResponseStartTime;
@property(nonatomic) double platformRequestStartTime;
@property(nonatomic) double pageDisappearTime;
@property(nonatomic) double pageAppearTime;
@property(nonatomic) double pageRequestedTime;
@property(retain, nonatomic) NSString *launchCorrelationKey;
@property(retain, nonatomic) NSString *clientCorrelationKey;
- (id)init;

@end

