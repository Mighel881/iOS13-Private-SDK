//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol TUNotifyObserver <NSObject>
@property(readonly, nonatomic, getter=isObserving) BOOL observing;
@property(readonly, nonatomic) NSUInteger state;
@property(copy, nonatomic) id /* CDUnknownBlockType */ callback;
- (void)endObserving;
- (void)beginObserving;
@end

