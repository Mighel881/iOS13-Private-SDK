//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, SUActivity;

@protocol SUActivityDelegate <NSObject>

@optional
- (void)performActionForActivity:(SUActivity *)arg1;
- (void)activity:(SUActivity *)arg1 prepareWithActivityItems:(NSArray *)arg2;
- (BOOL)activity:(SUActivity *)arg1 canPerformWithActivityItems:(NSArray *)arg2;
@end

