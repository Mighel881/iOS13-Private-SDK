//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MNPlannedDestination, MNRouteUpdate, MNTimeballService, NSError;

@protocol MNDestinationSubscriber <NSObject>

@optional
- (void)timeballService:(MNTimeballService *)arg1 didReceiveError:(NSError *)arg2 forDestination:(MNPlannedDestination *)arg3;
- (void)timeballService:(MNTimeballService *)arg1 didReceiveUpdate:(MNRouteUpdate *)arg2 forDestination:(MNPlannedDestination *)arg3;
- (void)timeballService:(MNTimeballService *)arg1 willMakeNetworkRequestForDestination:(MNPlannedDestination *)arg2;
@end
