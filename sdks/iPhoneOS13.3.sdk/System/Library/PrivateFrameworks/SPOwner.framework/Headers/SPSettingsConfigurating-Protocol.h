//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol SPSettingsConfigurating <NSObject>
- (void)setServiceState:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)beginRefreshingServiceStateWithBlock:(void (^)(NSString *, NSSet *))arg1;
@end

