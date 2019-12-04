//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class MTAlarm, MTSleepCoordinator, NSDate;

@protocol MTSleepObserver 

@optional
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 sleepAlarmDidChange:(MTAlarm *)arg2;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 bedtimeSessionEnded:(NSDate *)arg2 reason:(unsigned long long)arg3 sleepAlarm:(MTAlarm *)arg4;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 bedtimeDNDManuallyExited:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 wakeUpAlarmWasSnoozed:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 wakeUpAlarmWasDismissed:(NSDate *)arg2 dismissAction:(unsigned long long)arg3 sleepAlarm:(MTAlarm *)arg4;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 wakeUpAlarmDidFire:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 waketimeWasReached:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 bedtimeWasReached:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 bedtimeReminderWasSnoozed:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 bedtimeReminderWasConfirmed:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 bedtimeReminderDidFire:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 userWokeUp:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepCoordinator:(MTSleepCoordinator *)arg1 userWentToBed:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
@end
