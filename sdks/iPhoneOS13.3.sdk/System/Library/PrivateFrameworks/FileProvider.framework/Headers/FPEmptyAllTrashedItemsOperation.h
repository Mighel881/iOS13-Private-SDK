//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

#import <FileProvider/FPItemCollectionDelegate-Protocol.h>

@interface FPEmptyAllTrashedItemsOperation : FPActionOperation <FPItemCollectionDelegate>
{
    BOOL _gatheredItems;
}

- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(id /* CDUnknownBlockType */)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)actionMain;
- (id)init;

@end

