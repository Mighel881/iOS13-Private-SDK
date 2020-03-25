//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPConnectionsClientProtocol-Protocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPConnectionsClient : NSObject <PPConnectionsClientProtocol>
{
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)registerFeedback:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)recentLocationsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(NSUInteger)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (BOOL)recentLocationsForConsumer:(NSUInteger)arg1 criteria:(id)arg2 limit:(NSUInteger)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id )arg6 handleBatch:(id /* CDUnknownBlockType */)arg7;
- (BOOL)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id )arg3 handleBatch:(id /* CDUnknownBlockType */)arg4;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (id)init;

@end
