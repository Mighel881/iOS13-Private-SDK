//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>
#import <FrontBoardServices/FBSOrientationObserverClientDelegate-Protocol.h>

@class FBSOrientationObserverClient, FBSOrientationUpdate;
@protocol OS_dispatch_queue;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate, BSInvalidatable>
{
    FBSOrientationObserverClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callback_queue;
    id /* CDUnknownBlockType */ _handler;
    FBSOrientationUpdate *_freshestUpdate;
}

// - (void).cxx_destruct;
- (void)handleOrientationResetForClient:(id)arg1;
- (void)client:(id)arg1 handleOrientationUpdate:(id)arg2;
- (id)_getAndSetFreshestUpdateGivenUpdate:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handler;
- (void)activeInterfaceOrientationWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (long long)activeInterfaceOrientation;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

