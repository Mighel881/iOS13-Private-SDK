//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMISystemResourceUsageMonitorDelegate-Protocol.h>

@class HMDHomeManager, HMFUnfairLock, HMISystemResourceUsageMonitor, NSMutableDictionary, NSString;

@interface HMDCameraRecordingResidentElector : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate>
{
    HMFUnfairLock *_lock;
    unsigned long long _totalNumberOfStreams;
    HMISystemResourceUsageMonitor *_systemResourceUsageMonitor;
    HMDHomeManager *_homeManager;
    NSMutableDictionary *_readyToRecordByCameraUUIDString;
}

+ (id)logCategory;
@property(readonly) NSMutableDictionary *readyToRecordByCameraUUIDString; // @synthesize readyToRecordByCameraUUIDString=_readyToRecordByCameraUUIDString;
@property(readonly) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor; // @synthesize systemResourceUsageMonitor=_systemResourceUsageMonitor;
@property unsigned long long totalNumberOfStreams; // @synthesize totalNumberOfStreams=_totalNumberOfStreams;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;
- (void)handleResidentMeshInitialized:(id)arg1;
- (void)_updateReadyToRecordMetric;
- (id)preferredResidentDevicesForCamera:(id)arg1;
- (void)setReadyToRecord:(_Bool)arg1 forCamera:(id)arg2;
- (_Bool)isReadyToRecordForCamera:(id)arg1;
- (void)recordingDidEndForCamera:(id)arg1;
- (void)recordingDidStartForCamera:(id)arg1;
- (void)start;
- (id)initWithHomeManager:(id)arg1 resourceUsageMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
