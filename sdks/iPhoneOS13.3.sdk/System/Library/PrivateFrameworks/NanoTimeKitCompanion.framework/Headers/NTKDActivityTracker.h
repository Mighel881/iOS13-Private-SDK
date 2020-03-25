//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKDActivityTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activityIdentifiers;
    NSObject<OS_dispatch_source> *_adjustCriteriaTimer;
    NSObject<OS_dispatch_source> *_removePostWakeActivityTimer;
    BOOL _xpcActivityRegistered;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_queue_setOrUpdateActivityAndTimer;
- (void)_queue_endActivity:(id)arg1;
- (void)_queue_beginActivity:(id)arg1;
- (void)checkin;
- (void)endActivity:(id)arg1;
- (void)beginActivity:(id)arg1;
- (id)init;

@end
