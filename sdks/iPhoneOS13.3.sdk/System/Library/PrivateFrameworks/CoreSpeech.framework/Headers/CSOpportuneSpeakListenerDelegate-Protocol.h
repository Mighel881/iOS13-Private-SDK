//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSOpportuneSpeakListener;

@protocol CSOpportuneSpeakListenerDelegate <NSObject>

@optional
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 didStopUnexpectly:(BOOL)arg2;
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 hasVADAvailable:(BOOL)arg2;
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 hasRemoteVADAvailable:(BOOL)arg2;
@end
