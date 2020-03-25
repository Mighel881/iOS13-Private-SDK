//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>

@class HMDNetworkRouterClientStatusControlOperation, HMDNetworkRouterClientStatusIdentifierList, NSString;

@interface HMDNetworkRouterClientStatusControl : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterClientStatusControlOperation *_operation;
    HMDNetworkRouterClientStatusIdentifierList *_clientStatusIdentifierList;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
@property(retain, nonatomic) HMDNetworkRouterClientStatusIdentifierList *clientStatusIdentifierList; // @synthesize clientStatusIdentifierList=_clientStatusIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterClientStatusControlOperation *operation; // @synthesize operation=_operation;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithOperation:(id)arg1 clientStatusIdentifierList:(id)arg2;
- (id)init;

@end
