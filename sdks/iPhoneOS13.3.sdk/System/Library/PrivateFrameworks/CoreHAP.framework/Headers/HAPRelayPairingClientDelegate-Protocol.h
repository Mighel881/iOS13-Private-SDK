//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HAPRelayPairingClient, NSData, NSError, NSString;

@protocol HAPRelayPairingClientDelegate <NSObject>
- (void)relayPairingClient:(HAPRelayPairingClient *)arg1 didReceiveAccessToken:(NSData *)arg2 accessoryIdentifier:(NSString *)arg3;
- (void)relayPairingClient:(HAPRelayPairingClient *)arg1 didReceiveControllerIdentifier:(NSString *)arg2;
- (void)relayPairingClient:(HAPRelayPairingClient *)arg1 didCloseWithError:(NSError *)arg2;
@end

