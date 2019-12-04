//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class CATMessage, CATRemoteTransport;

__attribute__((visibility("hidden")))
@interface _CATRemoteTransportSendMessageOperation : CATOperation
{
    CATRemoteTransport *_transport;
    CATMessage *_message;
}

@property(retain, nonatomic) CATMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak CATRemoteTransport *transport; // @synthesize transport=_transport;
- (void)didFailWithError:(id)arg1;
- (void)didSendData;
- (void)didEncodeData:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;

@end
