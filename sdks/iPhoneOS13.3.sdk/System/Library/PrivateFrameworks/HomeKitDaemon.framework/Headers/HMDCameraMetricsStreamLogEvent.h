//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraMetricsLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSNumber;

@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent>
{
    NSNumber *_referenceTimestamp;
}

+ (id)uuid;
+ (void)initialize;
@property(retain, nonatomic) NSNumber *referenceTimestamp; // @synthesize referenceTimestamp=_referenceTimestamp;
// - (void).cxx_destruct;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3;
- (id)metricForAWD;
- (void)addStreamMessaging:(id)arg1;
- (void)addIDSSession:(id)arg1;
- (void)addIDSConnectionSetup:(id)arg1;
- (void)addReconfiguration:(id)arg1;
- (void)addInitialConfiguration:(id)arg1;
- (unsigned int)timeSinceReference:(id)arg1;
- (unsigned int)AWDMessageType;

@end
