//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class TRCompanionAuthOperationHandler, TRProxyAuthOperationHandler;

@interface TRAuthenticationOperationHandler : NSObject <TROperationHandler>
{
    TRCompanionAuthOperationHandler *_companionAuthHandler;
    TRProxyAuthOperationHandler *_proxyAuthHandler;
}

@property(retain, nonatomic) TRProxyAuthOperationHandler *proxyAuthHandler; // @synthesize proxyAuthHandler=_proxyAuthHandler;
@property(retain, nonatomic) TRCompanionAuthOperationHandler *companionAuthHandler; // @synthesize companionAuthHandler=_companionAuthHandler;
// - (void).cxx_destruct;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithCompanionAuthHandler:(id /* CDUnknownBlockType */)arg1 proxyAuthHandler:(id /* CDUnknownBlockType */)arg2;

@end

