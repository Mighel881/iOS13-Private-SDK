//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFUnlockClientProtocol-Protocol.h>

@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>
{
    id <SFAutoUnlockManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (void)enableBluetoothAndWiFi;
+ (BOOL)bluetoothAndWiFiEnabled;
+ (BOOL)autoUnlockEnabled:(unsigned int)arg1;
+ (BOOL)autoUnlockSupported;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) id <SFAutoUnlockManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)authPromptInfoWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)autoUnlockStateWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)failedUnlockWithError:(id)arg1;
- (void)completedUnlockWithDevice:(id)arg1;
- (void)beganAttemptWithDevice:(id)arg1;
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;
- (void)enabledDevice:(id)arg1;
- (void)keyDeviceLocked:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;
- (void)cancelAutoUnlock;
- (void)attemptAutoUnlock;
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)repairCloudPairing;
@property(readonly, nonatomic) double spinnerDelay;
- (id)init;

@end
