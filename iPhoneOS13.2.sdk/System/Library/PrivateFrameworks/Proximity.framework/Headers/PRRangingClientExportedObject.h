//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Proximity/PRAidedRangingClientProtocol-Protocol.h>
#import <Proximity/PRRangingClientProtocol-Protocol.h>

@class NSString;
@protocol PRRangingClientProtocol;

@interface PRRangingClientExportedObject : NSObject <PRRangingClientProtocol, PRAidedRangingClientProtocol>
{
    id <PRRangingClientProtocol> _rangingClient;
}

@property(nonatomic) __weak id <PRRangingClientProtocol> rangingClient; // @synthesize rangingClient=_rangingClient;
- (void)sendDataToPeers:(id)arg1;
- (void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)didReceiveNewSolutions:(id)arg1;
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;
- (void)didFailWithError:(id)arg1;
- (id)initWithRangingClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
