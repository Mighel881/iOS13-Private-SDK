//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDateRange, NSArray, NSDictionary, NSError, NSMapTable;
@protocol FCCoreConfiguration;

@interface FCMyArticlesOperation : FCOperation
{
    BOOL _streamFeedItems;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCDateRange *_dateRange;
    id /* CDUnknownBlockType */ _feedItemsChangedHandler;
    NSArray *_feedItems;
    NSMapTable *_nonEditorialScoreProfiles;
    NSDictionary *_feedContextByFeedID;
    NSError *_error;
    long long _binOverride;
    id /* CDUnknownBlockType */ _feedItemCompletionBlock;
    NSUInteger _maxNumberOfFeedsToQuery;
    NSUInteger _perFeedLimit;
}

@property(nonatomic) NSUInteger perFeedLimit; // @synthesize perFeedLimit=_perFeedLimit;
@property(nonatomic) NSUInteger maxNumberOfFeedsToQuery; // @synthesize maxNumberOfFeedsToQuery=_maxNumberOfFeedsToQuery;
@property(copy, nonatomic) id /* CDUnknownBlockType */ feedItemCompletionBlock; // @synthesize feedItemCompletionBlock=_feedItemCompletionBlock;
@property(nonatomic) long long binOverride; // @synthesize binOverride=_binOverride;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSDictionary *feedContextByFeedID; // @synthesize feedContextByFeedID=_feedContextByFeedID;
@property(retain) NSMapTable *nonEditorialScoreProfiles; // @synthesize nonEditorialScoreProfiles=_nonEditorialScoreProfiles;
@property(copy) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(copy, nonatomic) id /* CDUnknownBlockType */ feedItemsChangedHandler; // @synthesize feedItemsChangedHandler=_feedItemsChangedHandler;
@property(nonatomic) BOOL streamFeedItems; // @synthesize streamFeedItems=_streamFeedItems;
@property(copy, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)_appendFeedItems:(id)arg1;
- (void)_fetchTagsForQueryingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
@property(readonly, copy) NSArray *nonEditorialFeedItems;
- (id)init;

@end

