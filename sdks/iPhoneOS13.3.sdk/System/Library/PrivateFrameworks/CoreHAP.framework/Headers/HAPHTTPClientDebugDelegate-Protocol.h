//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HAPHTTPClient, NSData;

@protocol HAPHTTPClientDebugDelegate <NSObject>
- (void)httpClient:(HAPHTTPClient *)arg1 willSendHTTPMessageWithHeaders:(NSData *)arg2 body:(NSData *)arg3;
- (void)httpClient:(HAPHTTPClient *)arg1 didReceiveHTTPMessageWithHeaders:(NSData *)arg2 body:(NSData *)arg3;
@end

