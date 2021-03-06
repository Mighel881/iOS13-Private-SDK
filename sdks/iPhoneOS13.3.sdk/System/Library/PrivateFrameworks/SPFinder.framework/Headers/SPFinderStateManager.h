//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPFinder/SPFinderStateManagement-Protocol.h>

@class FMXPCServiceDescription, FMXPCSession;
@protocol OS_dispatch_queue, SPFinderStateXPCProtocol;

@interface SPFinderStateManager : NSObject <SPFinderStateManagement>
{
    id /* CDUnknownBlockType */ stateInfoChangedBlock;
    id /* CDUnknownBlockType */ _stateChangedBlock;
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPFinderStateXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPFinderStateXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property(copy, nonatomic) id /* CDUnknownBlockType */ stateChangedBlock; // @synthesize stateChangedBlock=_stateChangedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ stateInfoChangedBlock; // @synthesize stateInfoChangedBlock;
// - (void).cxx_destruct;
- (void)stateInfoWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchFinderState:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (void)updateStateBlock;
- (void)setActiveCache:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)disableFinderModeWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)enableFinderModeWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)start;
- (id)remoteInterface;
- (id)init;

@end

