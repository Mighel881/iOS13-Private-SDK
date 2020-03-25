//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

#import <CoreSpeech/CSCommandControlBehaviorMonitorDelegate-Protocol.h>

@interface CSCommandControlStreamEventMonitor : CSEventMonitor <CSCommandControlBehaviorMonitorDelegate>
{
    BOOL _isCommandControlStreaming;
}

+ (id)sharedInstance;
- (void)_notifyStopCommandControl;
- (void)commandControlBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)commandControlBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)commandControlBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4;
- (void)commandControlBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (BOOL)isStreaming;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end
