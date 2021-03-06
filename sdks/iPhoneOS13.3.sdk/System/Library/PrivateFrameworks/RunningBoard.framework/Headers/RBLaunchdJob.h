//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSMachPortTaskNameRight, NSArray, NSDictionary, NSString, RBLaunchdJobLabel, RBSProcessExitStatus;
@protocol RBSProcessIdentifier;

__attribute__((visibility("hidden")))
@interface RBLaunchdJob : NSObject
{
//     struct os_unfair_lock_s _lock;
    BOOL _lock_started;
    BOOL _lock_invalid;
    BOOL _disableASLR;
    BOOL _runAtLoad;
    BOOL _waitForDebugger;
    BOOL _buildDYLDClosure;
    RBLaunchdJobLabel *_label;
    BSMachPortTaskNameRight *_lock_taskNameRight;
    NSString *_executablePath;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSArray *_machServices;
    NSString *_standardOutputPath;
    NSString *_standardErrorPath;
    NSString *_posixSpawnType;
    NSString *_managedPersona;
}

+ (id)sharedPersonaManager;
+ (BOOL)_stopJobLabel:(id)arg1 error:(out id )arg2;
+ (BOOL)_startJobLabel:(id)arg1 error:(out id )arg2;
+ (BOOL)startJobLabel:(id)arg1 error:(out id )arg2;
+ (id)lastExitStatusForLabel:(id)arg1 error:(out id )arg2;
+ (int)pidForJobLabel:(id)arg1 error:(out id )arg2;
+ (id)jobWithLabel:(id)arg1 launchdData:(struct _launch_data )arg2 error:(out id )arg3;
+ (id)newJobWithIdentity:(id)arg1 launchContext:(id)arg2 error:(out id )arg3;
@property(readonly, copy, nonatomic) NSString *managedPersona; // @synthesize managedPersona=_managedPersona;
@property(readonly, nonatomic) BOOL buildDYLDClosure; // @synthesize buildDYLDClosure=_buildDYLDClosure;
@property(readonly, nonatomic) BOOL waitForDebugger; // @synthesize waitForDebugger=_waitForDebugger;
@property(readonly, nonatomic) BOOL runAtLoad; // @synthesize runAtLoad=_runAtLoad;
@property(readonly, nonatomic) BOOL disableASLR; // @synthesize disableASLR=_disableASLR;
@property(readonly, copy, nonatomic) NSString *posixSpawnType; // @synthesize posixSpawnType=_posixSpawnType;
@property(readonly, copy, nonatomic) NSString *standardErrorPath; // @synthesize standardErrorPath=_standardErrorPath;
@property(readonly, copy, nonatomic) NSString *standardOutputPath; // @synthesize standardOutputPath=_standardOutputPath;
@property(readonly, copy, nonatomic) NSArray *machServices; // @synthesize machServices=_machServices;
@property(readonly, copy, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, copy, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, copy, nonatomic) RBLaunchdJobLabel *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (struct _launch_data )generateData;
- (BOOL)_lock_acquireTaskNameRightForOperation:(id)arg1 error:(out id )arg2;
- (id)debugDescription;
- (id)description;
- (BOOL)isRunningWithError:(out id )arg1;
- (BOOL)stopWithError:(out id )arg1;
- (BOOL)startWithError:(out id )arg1;
@property(readonly, retain, nonatomic) RBSProcessExitStatus *lastExitStatus; // @dynamic lastExitStatus;
@property(readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight; // @synthesize taskNameRight=_lock_taskNameRight;
@property(readonly, retain, nonatomic) id <RBSProcessIdentifier> processIdentifier; // @dynamic processIdentifier;
- (void)invalidate;
- (id)_initWithLabel:(id)arg1 executablePath:(id)arg2 arguments:(id)arg3 environment:(id)arg4 machServices:(id)arg5 standardOutputPath:(id)arg6 standardErrorPath:(id)arg7 posixSpawnType:(id)arg8 options:(NSUInteger)arg9 managedPersona:(id)arg10;
- (id)init;

@end

