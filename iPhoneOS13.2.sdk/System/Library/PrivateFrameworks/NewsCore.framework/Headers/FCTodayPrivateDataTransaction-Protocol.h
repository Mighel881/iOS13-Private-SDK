//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//




@class NSObject;
@protocol FCMutableTodayPrivateData, FCPrivateDataContext;

@protocol FCTodayPrivateDataTransaction <NSCopying, NSSecureCoding>
- (void)performWithTodayPrivateData:(NSObject<FCMutableTodayPrivateData> *)arg1;
- (void)performWithPrivateDataContext:(id <FCPrivateDataContext>)arg1;
@end
