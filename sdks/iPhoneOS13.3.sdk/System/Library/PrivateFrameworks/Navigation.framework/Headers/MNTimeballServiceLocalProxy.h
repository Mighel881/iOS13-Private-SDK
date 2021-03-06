//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeballInternalObserver-Protocol.h>
#import <Navigation/MNTimeballInternalProvider-Protocol.h>
#import <Navigation/MNTimeballServiceProxyInterface-Protocol.h>

@class MNObserverHashTable, MNRouteRefreshPolicyScheduler, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, MNTimeballServicePeer, MNXPCTransactionCounter, NSMutableDictionary, NSString;
@protocol MNTimeballServiceProxyDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNTimeballServiceLocalProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballInternalProvider, MNTimeballInternalObserver>
{
    MNTimeballServicePeer *_peer;
    MNObserverHashTable *_observers;
    MNTimeballCache *_cache;
    MNRouteRefreshPolicyScheduler *_scheduler;
    MNTimeballRoutingProvider *_routingProvider;
    MNTimeballLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_operationQueue;
    MNXPCTransactionCounter *_xpcTransactionCounter;
    NSMutableDictionary *_destinationOptions;
    BOOL _isLeeching;
    id <MNTimeballServiceProxyDelegate> _delegate;
}

@property(readonly, nonatomic) MNTimeballServicePeer *peer; // @synthesize peer=_peer;
@property(nonatomic) id <MNTimeballServiceProxyDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)unsubscribeFromAllDestinations;
- (void)subscribeToAllDestinations;
- (void)unsubscribeFromDestination:(id)arg1;
- (void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(NSUInteger)arg3;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4;
- (void)provider:(id)arg1 didReceiveUpdate:(id)arg2 forDestination:(id)arg3;
- (void)provider:(id)arg1 didReceiveError:(id)arg2 forDestination:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_requestOptions:(long long)arg1 forDestinations:(id)arg2 fromLocation:(id)arg3 freshness:(id)arg4 handlerID:(id)arg5;
- (void)_receivedNetworkError:(id)arg1 forDestination:(id)arg2;
- (void)_receivedNetworkUpdate:(id)arg1 forDestination:(id)arg2;
- (void)_handleResult:(id)arg1 forDestination:(id)arg2 error:(id)arg3 fromNetwork:(BOOL)arg4 requestingClientID:(id)arg5 handlerID:(id)arg6 completed:(BOOL)arg7;
- (void)_completedUpdateForDelegateHandlerID:(id)arg1;
- (void)_invokeDelegateHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
- (void)_enqueOperation:(id /* CDUnknownBlockType */)arg1;
- (void)_removeHighMemoryThreshold;
- (void)_requestHighMemoryThreshold:(id)arg1;
- (id)_delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 targetQueue:(id)arg2 cache:(id)arg3 locationManager:(id)arg4 routingProvider:(id)arg5 scheduler:(id)arg6;

@end

