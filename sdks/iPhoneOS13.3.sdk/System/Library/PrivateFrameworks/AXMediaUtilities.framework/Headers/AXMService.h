//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMServiceClientInterface-Protocol.h>
#import <AXMediaUtilities/AXMServiceInterface-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXMService : NSObject <AXMServiceClientInterface, AXMServiceInterface>
{
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSXPCConnection *_xpcConnection;
}

@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
// - (void).cxx_destruct;
- (void)visionEngine:(id)arg1 evaluateSource:(id)arg2 context:(id)arg3 options:(long long)arg4 result:(id /* CDUnknownBlockType */)arg5;
- (void)prewarmVisionEngineService;
- (id)_serviceProxy;
- (void)dealloc;
- (void)_destroyXPCConnection;
- (id)init;

@end
