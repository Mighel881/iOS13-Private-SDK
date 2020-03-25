//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDDataStreamBulkSendListener-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHAPAccessory, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject <HMFLogging, HMDDataStreamBulkSendListener>
{
    BOOL _hasRegisteredBulkSendListener;
    BOOL _canSendBulkSendSessionOpenRequest;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_accessory;
    id /* CDUnknownBlockType */ _pendingStartSessionCallback;
}

+ (id)logCategory;
@property(copy) id /* CDUnknownBlockType */ pendingStartSessionCallback; // @synthesize pendingStartSessionCallback=_pendingStartSessionCallback;
@property BOOL canSendBulkSendSessionOpenRequest; // @synthesize canSendBulkSendSessionOpenRequest=_canSendBulkSendSessionOpenRequest;
@property BOOL hasRegisteredBulkSendListener; // @synthesize hasRegisteredBulkSendListener=_hasRegisteredBulkSendListener;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
// - (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, getter=isSessionOpenInProgress) BOOL sessionOpenInProgress;
- (void)_callPendingStartSessionCallbackWithSession:(id)arg1 error:(id)arg2;
- (void)callPendingStartSessionCallback:(id)arg1 error:(id)arg2;
- (void)_startBulkSendSession;
- (void)openNewSessionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)accessoryDidCloseDataStream:(id)arg1;
- (void)accessoryDidStartListening:(id)arg1;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;
- (void)_registerAsBulkSendListener;
- (void)handleAccessoryDoesSupportBulkSendDataStream:(id)arg1;
- (void)dealloc;
- (void)shutDown;
- (void)start;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;

@end
