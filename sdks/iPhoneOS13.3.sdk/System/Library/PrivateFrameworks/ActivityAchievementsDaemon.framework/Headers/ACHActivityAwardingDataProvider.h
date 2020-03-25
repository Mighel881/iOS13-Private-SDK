//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ACHDataStoreActivityProperties, HKActivitySummary, HKQuantity;

@interface ACHActivityAwardingDataProvider : NSObject <NSCopying>
{
    HKActivitySummary *_todayActivitySummary;
    HKActivitySummary *_yesterdayActivitySummary;
    ACHDataStoreActivityProperties *_properties;
    long long _lastCheckedIndexForMove;
    HKQuantity *_lastProcessedTodayMoveValue;
    HKQuantity *_previousProcessedTodayMoveValue;
    HKQuantity *_lastTodayMoveGoal;
    long long _lastCheckedIndexForExercise;
    HKQuantity *_lastProcessedTodayExerciseValue;
    HKQuantity *_previousProcessedTodayExerciseValue;
    HKQuantity *_lastTodayExerciseGoal;
    long long _lastCheckedIndexForStand;
    HKQuantity *_lastProcessedTodayStandValue;
    HKQuantity *_previousProcessedTodayStandValue;
    HKQuantity *_lastTodayStandGoal;
    long long _lastCheckedIndexForAllGoals;
    long long _lastCheckedIndexForDistance;
    HKQuantity *_todayDistanceValue;
    HKQuantity *_lastTodayDistanceValue;
}

@property(retain, nonatomic) HKQuantity *lastTodayDistanceValue; // @synthesize lastTodayDistanceValue=_lastTodayDistanceValue;
@property(readonly, nonatomic) HKQuantity *todayDistanceValue; // @synthesize todayDistanceValue=_todayDistanceValue;
@property(nonatomic) long long lastCheckedIndexForDistance; // @synthesize lastCheckedIndexForDistance=_lastCheckedIndexForDistance;
@property(nonatomic) long long lastCheckedIndexForAllGoals; // @synthesize lastCheckedIndexForAllGoals=_lastCheckedIndexForAllGoals;
@property(retain, nonatomic) HKQuantity *lastTodayStandGoal; // @synthesize lastTodayStandGoal=_lastTodayStandGoal;
@property(retain, nonatomic) HKQuantity *previousProcessedTodayStandValue; // @synthesize previousProcessedTodayStandValue=_previousProcessedTodayStandValue;
@property(retain, nonatomic) HKQuantity *lastProcessedTodayStandValue; // @synthesize lastProcessedTodayStandValue=_lastProcessedTodayStandValue;
@property(nonatomic) long long lastCheckedIndexForStand; // @synthesize lastCheckedIndexForStand=_lastCheckedIndexForStand;
@property(retain, nonatomic) HKQuantity *lastTodayExerciseGoal; // @synthesize lastTodayExerciseGoal=_lastTodayExerciseGoal;
@property(retain, nonatomic) HKQuantity *previousProcessedTodayExerciseValue; // @synthesize previousProcessedTodayExerciseValue=_previousProcessedTodayExerciseValue;
@property(retain, nonatomic) HKQuantity *lastProcessedTodayExerciseValue; // @synthesize lastProcessedTodayExerciseValue=_lastProcessedTodayExerciseValue;
@property(nonatomic) long long lastCheckedIndexForExercise; // @synthesize lastCheckedIndexForExercise=_lastCheckedIndexForExercise;
@property(retain, nonatomic) HKQuantity *lastTodayMoveGoal; // @synthesize lastTodayMoveGoal=_lastTodayMoveGoal;
@property(retain, nonatomic) HKQuantity *previousProcessedTodayMoveValue; // @synthesize previousProcessedTodayMoveValue=_previousProcessedTodayMoveValue;
@property(retain, nonatomic) HKQuantity *lastProcessedTodayMoveValue; // @synthesize lastProcessedTodayMoveValue=_lastProcessedTodayMoveValue;
@property(nonatomic) long long lastCheckedIndexForMove; // @synthesize lastCheckedIndexForMove=_lastCheckedIndexForMove;
@property(readonly, nonatomic) ACHDataStoreActivityProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) HKActivitySummary *yesterdayActivitySummary; // @synthesize yesterdayActivitySummary=_yesterdayActivitySummary;
@property(retain, nonatomic) HKActivitySummary *todayActivitySummary; // @synthesize todayActivitySummary=_todayActivitySummary;
// - (void).cxx_destruct;
@property(readonly, nonatomic) HKQuantity *yesterdayStandGoal;
@property(readonly, nonatomic) HKQuantity *todayStandGoal;
@property(readonly, nonatomic) HKQuantity *yesterdayStandValue;
@property(readonly, nonatomic) HKQuantity *todayStandValue;
@property(readonly, nonatomic) HKQuantity *yesterdayExerciseGoal;
@property(readonly, nonatomic) HKQuantity *todayExerciseGoal;
@property(readonly, nonatomic) HKQuantity *yesterdayExerciseValue;
@property(readonly, nonatomic) HKQuantity *todayExerciseValue;
@property(readonly, nonatomic) HKQuantity *yesterdayMoveGoal;
@property(readonly, nonatomic) HKQuantity *todayMoveGoal;
@property(readonly, nonatomic) HKQuantity *yesterdayMoveValue;
@property(readonly, nonatomic) HKQuantity *todayMoveValue;
- (BOOL)allGoalsMetToday;
- (void)setNewStandState:(CDStruct_c642f51a)arg1;
- (void)setNewExerciseState:(CDStruct_c642f51a)arg1;
- (void)_setBaseMoveState:(CDStruct_c642f51a)arg1;
- (void)setNewMoveState:(CDStruct_c642f51a)arg1;
- (CDStruct_c642f51a)currentStandState;
- (CDStruct_c642f51a)currentExerciseState;
- (CDStruct_c642f51a)_baseMoveState;
- (CDStruct_c642f51a)currentMoveState;
- (void)setNewState:(CDStruct_c642f51a)arg1 forGoalType:(long long)arg2;
- (CDStruct_c642f51a)currentStateForGoalType:(long long)arg1;
@property(readonly, nonatomic) long long todayIndex;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)setLastCheckedIndex:(long long)arg1;
- (void)clearAllProperties;
- (void)updatePreviousPropertiesWithCurrentProperties;
- (id)init;

@end
