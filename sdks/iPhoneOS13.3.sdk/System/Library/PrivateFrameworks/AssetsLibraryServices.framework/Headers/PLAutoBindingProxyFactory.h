//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLXPCProxyCreating-Protocol.h>

@class NSURL, PLLazyObject, PLResult;
@protocol PLXPCProxyCreating;

@interface PLAutoBindingProxyFactory : NSObject <PLXPCProxyCreating>
{
//     struct os_unfair_lock_s _bindLock;
    PLLazyObject *_lazyBindToPhotoLibrary;
    PLResult *_cachedBindResult;
    id <PLXPCProxyCreating> _proxyFactory;
    NSURL *_photoLibraryURL;
}

+ (id)clientToServiceBookmarkForURL:(id)arg1;
+ (NSUInteger)maxBindAttemptCount;
@property(readonly, copy) NSURL *photoLibraryURL; // @synthesize photoLibraryURL=_photoLibraryURL;
@property(readonly) id <PLXPCProxyCreating> proxyFactory; // @synthesize proxyFactory=_proxyFactory;
// - (void).cxx_destruct;
- (void)_connectionInterrupted:(id)arg1;
- (BOOL)_isResultAnInterruptionError:(id)arg1;
- (id)_attemptBindToPhotoLibrary;
- (id)_bindToPhotoLibrary;
- (id)_lazilyBindToPhotoLibrary;
- (void)_updateCachedBindResult:(id)arg1;
- (id)_cachedBindResult;
- (id)_bindToPhotoLibraryAndCacheResult;
- (id)_bindToPhotoLibraryIfNecessary;
- (BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)addBarrierBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_unboostingRemoteObjectProxy;
- (id)_blackholeProxyForProxy:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithProxyFactory:(id)arg1 photoLibraryURL:(id)arg2;

@end
