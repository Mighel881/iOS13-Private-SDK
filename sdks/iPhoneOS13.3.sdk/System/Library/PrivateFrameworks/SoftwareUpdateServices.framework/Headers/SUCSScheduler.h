//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDContextualChangeRegistration;
@protocol _CDContext;

@interface SUCSScheduler : NSObject
{
    id <_CDContext> _context;
    _CDContextualChangeRegistration *_registration;
}

+ (BOOL)_hasNetworkConnection;
+ (BOOL)_callInProgress;
+ (int)_batteryLevel;
+ (int)_getIntForKeyPath:(id)arg1;
+ (BOOL)_getBoolForKeyPath:(id)arg1;
+ (id)carplayPredicate:(BOOL)arg1;
+ (id)batteryLevelPredicate:(id)arg1;
+ (id)phoneCallPredicate:(BOOL)arg1;
+ (id)networkPredicate:(BOOL)arg1;
- (void)unregisterInstallationAlertAction;
- (void)registerInstallAlertConditionsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end

