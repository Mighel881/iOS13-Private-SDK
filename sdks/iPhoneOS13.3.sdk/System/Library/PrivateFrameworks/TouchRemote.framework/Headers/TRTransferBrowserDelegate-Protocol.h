//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, TRTransferBrowser;

@protocol TRTransferBrowserDelegate <NSObject>

@optional
- (void)browserDidDisconnect:(TRTransferBrowser *)arg1;
- (void)browser:(TRTransferBrowser *)arg1 didReceiveData:(NSData *)arg2 replyHandler:(void (^)(NSData *))arg3;
- (void)browser:(TRTransferBrowser *)arg1 didStartTransferWithSendDataHandler:(void (^)(NSData *))arg2;
@end

