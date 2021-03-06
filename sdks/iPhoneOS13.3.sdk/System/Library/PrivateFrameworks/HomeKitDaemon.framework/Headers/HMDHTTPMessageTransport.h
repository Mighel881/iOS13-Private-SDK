//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteMessageTransport.h>

#import <HomeKitDaemon/HMDHTTPClientMessageTransportDelegate-Protocol.h>
#import <HomeKitDaemon/HMDHTTPServerMessageTransportDelegate-Protocol.h>
#import <HomeKitDaemon/HMFNetServiceBrowserDelegate-Protocol.h>

@class HMDHTTPDevice, HMDHTTPServerMessageTransport, HMFNetServiceBrowser, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDHTTPMessageTransport : HMDRemoteMessageTransport <HMDHTTPClientMessageTransportDelegate, HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_residentDevices;
    NSMutableSet *_transientDevices;
    NSMutableDictionary *_txtRecord;
    NSMutableArray *_clientTransports;
    BOOL _serverEnabled;
    HMDHTTPDevice *_currentDevice;
    HMDHTTPServerMessageTransport *_serverTransport;
    HMFNetServiceBrowser *_clientBrowser;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)protocolVersionSupportsExtendedMessages:(id)arg1;
+ (BOOL)shouldHostMessageServer;
+ (id)protocolVersion;
+ (NSUInteger)restriction;
@property(readonly, nonatomic) HMFNetServiceBrowser *clientBrowser; // @synthesize clientBrowser=_clientBrowser;
// - (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)server:(id)arg1 didRemoveDevice:(id)arg2;
- (void)server:(id)arg1 didAddDevice:(id)arg2;
- (void)server:(id)arg1 didStopWithError:(id)arg2;
- (void)client:(id)arg1 didReceiveMessage:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)client:(id)arg1 didStopWithError:(id)arg2;
- (void)_connectToDevice:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_stopServer;
- (void)_startServerWithDevice:(id)arg1;
- (void)configureWithDevice:(id)arg1;
- (id)_serviceForDevice:(id)arg1;
- (void)removeAllClientTransports;
- (void)removeClientTransport:(id)arg1;
- (void)addClientTransport:(id)arg1;
- (id)clientTransportForService:(id)arg1;
- (id)clientTransportForDevice:(id)arg1;
@property(readonly, nonatomic) NSArray *clientTransports;
- (id)deviceForHTTPDevice:(id)arg1;
@property(readonly, nonatomic) HMDHTTPServerMessageTransport *serverTransport; // @synthesize serverTransport=_serverTransport;
@property(readonly, nonatomic) HMDHTTPDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *TXTRecord;
- (void)handleServerEnabled:(BOOL)arg1;
@property(getter=isServerEnabled) BOOL serverEnabled; // @synthesize serverEnabled=_serverEnabled;
- (void)_handleReceivedRequestMessage:(id)arg1 fromDevice:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_sendMessage:(id)arg1 destination:(id)arg2 timeout:(double)arg3 responseHandler:(id /* CDUnknownBlockType */)arg4;
- (void)sendMessage:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)canSendMessage:(id)arg1;
- (BOOL)isDeviceConnected:(id)arg1;
- (long long)qualityOfService;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (id)initWithAccountRegistry:(id)arg1 clientBrowser:(id)arg2;
- (id)initWithAccountRegistry:(id)arg1;

@end

