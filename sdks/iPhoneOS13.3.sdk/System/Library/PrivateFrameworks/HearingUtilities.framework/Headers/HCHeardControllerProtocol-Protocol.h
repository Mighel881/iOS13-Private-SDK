//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HCXPCClient, HCXPCMessage, NSDictionary;

@protocol HCHeardControllerProtocol <NSObject>
- (NSUInteger)countOfClientsListeningForIdentifier:(NSUInteger)arg1;
- (void)sendClientsMessageWithPayload:(NSDictionary *)arg1 excluding:(HCXPCClient *)arg2;
- (void)sendUpdateMessage:(HCXPCMessage *)arg1 forIdentifier:(NSUInteger)arg2;
- (BOOL)sendMessage:(HCXPCMessage *)arg1 withError:(id )arg2;
@end

