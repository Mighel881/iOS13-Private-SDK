//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFLibraryStore.h>

@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore
{
    DAFolder *_DAFolder;
    BOOL _backedByVirtualAllSearchMailbox;
}

@property(nonatomic) BOOL backedByVirtualAllSearchMailbox; // @synthesize backedByVirtualAllSearchMailbox=_backedByVirtualAllSearchMailbox;
// - (void).cxx_destruct;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (BOOL)messageCanBeTriaged:(id)arg1;
- (NSUInteger)growFetchWindow;
- (BOOL)shouldGrowFetchWindow;
- (NSUInteger)fetchWindow;
- (BOOL)hasMoreFetchableMessages;
- (BOOL)canFetchSearchResults;
- (id)bestAlternativeForPart:(id)arg1;
- (id)defaultAlternativeForPart:(id)arg1;
- (BOOL)_fetchDataForMimePart:(id)arg1 range:(_NSRange)arg2 isComplete:(BOOL )arg3 consumer:(id)arg4;
- (id)_downloadHeadersForMessages:(id)arg1;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id )arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL )arg4;
- (id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4;
- (id)_fetchBodyDataForSearchResult:(id)arg1 folderID:(id)arg2 format:(int)arg3 streamConsumer:(id)arg4;
- (id)fetchBodyDataForRemoteID:(id)arg1;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(long long)arg1 limit:(unsigned int)arg2;
- (void)purgeMessagesBeyondLimit:(NSUInteger)arg1 keepingMessage:(id)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;
- (id)messageForRemoteID:(id)arg1;
- (BOOL)allowsAppend;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (BOOL)replayFlagChange:(id)arg1 forRemoteIDs:(id)arg2 error:(id )arg3 completed:(BOOL )arg4;
- (id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 error:(id )arg5;
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (void)_remoteIDsMatchingSearchText:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 filterByDate:(BOOL)arg5 handler:(id /* CDUnknownBlockType */)arg6;
- (long long)fetchNumMessages:(NSUInteger)arg1 preservingUID:(id)arg2 options:(NSUInteger)arg3;
- (id)folderIDForFetching;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;

@end
