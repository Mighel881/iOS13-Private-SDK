//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/TTMergeableStringUndoCommand-Protocol.h>

@class NSString;

@interface TTMergeableStringUndoEditCommand : NSObject <TTMergeableStringUndoCommand>
{
    vector_4b213608 _deleteRanges;
    vector_252d7b3a _insertStrings;
}

@property(readonly, nonatomic) vector_252d7b3a insertStrings; // @synthesize insertStrings=_insertStrings;
@property(readonly, nonatomic) vector_4b213608 deleteRanges; // @synthesize deleteRanges=_deleteRanges;
@property(readonly, copy) NSString *description;
- (BOOL)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (void)updateInsertTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (BOOL)hasTopoIDsThatCanChange;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (void)dealloc;
- (id)init;

@end

