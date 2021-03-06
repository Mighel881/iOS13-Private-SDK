//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCAccountSession;

__attribute__((visibility("hidden")))
@interface BRCSideCarSyncUpOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCAccountSession *_session;
    BOOL _shouldPerformAnotherBatch;
}

// - (void).cxx_destruct;
- (struct PQLResultSet )_itemsNeedingSyncUpEnumerator;
- (void)main;
- (void)_syncUpRecordBatchWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 recordIDToZoneMap:(id)arg3 requestID:(NSUInteger)arg4;
- (void)_markItemsFailedSync;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)arg1;
- (BOOL)shouldPerformAnotherBatch;
- (id)initWithSession:(id)arg1;

@end

