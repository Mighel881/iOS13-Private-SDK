//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HDHeartDailyAnalytics : NSObject
{
    NSMutableDictionary *_payload;
}

// - (void).cxx_destruct;
- (id)_ecgClassificationWithin24HoursPostIRNKeyFromClassification:(NSUInteger)arg1;
- (id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)updateWithElectrocardiogramClassifications:(id)arg1;
- (void)updateWeeksSinceElectrocardiogramOnboardedWithFirstOnboardingCompletedDate:(id)arg1;
- (void)submit;
- (void)updateIrregularRhythmNotificationClassificationCount:(long long)arg1;
- (void)updateElectrocardiogramClassificationCount:(long long)arg1;
- (void)updateIsImproveHealthAndActivityAllowed:(BOOL)arg1;
- (void)updateIsEcgOnboarded:(BOOL)arg1;
- (id)init;

@end
