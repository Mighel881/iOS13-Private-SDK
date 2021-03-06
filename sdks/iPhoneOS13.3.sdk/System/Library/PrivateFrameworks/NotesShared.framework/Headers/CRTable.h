//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/CRObject.h>

#import <NotesShared/CRUndoDelegate-Protocol.h>

@class CRDictionary, CRDocument, CRTombstoneOrderedSet, NSObject, NSString;
@protocol CRUndoDelegate;

@interface CRTable : CRObject <CRUndoDelegate>
{
    CRDocument *_document;
    NSObject<CRUndoDelegate> *_delegate;
}

+ (id)CRProperties;
+ (void)registerWithCRCoder;
@property(nonatomic) __weak NSObject<CRUndoDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak CRDocument *document; // @synthesize document=_document;
// - (void).cxx_destruct;
- (BOOL)wantsUndoCommands;
- (void)addUndoCommandsForObject:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (NSUInteger)countOfPopulatedCells;
- (id)subtableWithDocument:(id)arg1 forSelectionContainingColumnIndices:(id)arg2 rowIndices:(id)arg3;
- (void)enumerateCellObjectsInCellSelectionContainingColumnIndices:(id)arg1 rowIndices:(id)arg2 copyItems:(BOOL)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (void)enumerateRowsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateColumnsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)setObject:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;
- (void)setObject:(id)arg1 columnIndex:(NSUInteger)arg2 rowIndex:(NSUInteger)arg3;
- (id)objectForColumnID:(id)arg1 rowID:(id)arg2;
- (id)objectForColumnIndex:(NSUInteger)arg1 rowIndex:(NSUInteger)arg2;
- (void)reverseColumnDirection;
@property(readonly, nonatomic) BOOL isLeftToRight;
@property(readonly, nonatomic) BOOL isRightToLeft;
- (void)undoablyInsertContents:(id)arg1 atColumn:(id)arg2;
- (void)undoablyRemoveContentsOfColumn:(id)arg1;
- (void)moveColumnAtIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (void)moveRowAtIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (void)removeColumnAtIndex:(NSUInteger)arg1;
- (void)undoablyInsertContents:(id)arg1 atRow:(id)arg2;
- (void)undoablyRemoveContentsOfRow:(id)arg1;
- (void)removeRowAtIndex:(NSUInteger)arg1;
- (id)insertColumns:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (id)insertRows:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (id)insertColumnAtIndex:(NSUInteger)arg1;
- (id)insertRowAtIndex:(NSUInteger)arg1;
- (BOOL)containsColumn:(id)arg1;
- (BOOL)containsRow:(id)arg1;
- (id)columnIndexesForIdentifiers:(id)arg1;
- (id)rowIndexesForIdentifiers:(id)arg1;
- (NSUInteger)columnIndexForIdentifier:(id)arg1;
- (NSUInteger)rowIndexForIdentifier:(id)arg1;
- (id)identifiersForColumnIndexes:(id)arg1;
- (id)identifiersForRowIndexes:(id)arg1;
- (id)identifierForColumnAtIndex:(NSUInteger)arg1;
- (id)identifierForRowAtIndex:(NSUInteger)arg1;
- (id)rowsIntersectingWithRows:(id)arg1;
- (id)columnsIntersectingWithColumns:(id)arg1;
@property(readonly, nonatomic) NSUInteger rowCount;
@property(readonly, nonatomic) NSUInteger columnCount;
@property(readonly, nonatomic) CRDictionary *cellColumns;
@property(readonly, nonatomic) CRTombstoneOrderedSet *crRows;
@property(readonly, nonatomic) CRTombstoneOrderedSet *crColumns;
- (id)crTableColumnDirection;
@property(retain, nonatomic) NSString *columnDirection;
- (id)identity;
- (id)initWithIdentity:(id)arg1 fields:(id)arg2;
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2 crColumns:(id)arg3 crRows:(id)arg4 cellColumns:(id)arg5;
- (id)initWithDocument:(id)arg1 columnDirection:(id)arg2;
- (id)initWithDocument:(id)arg1 isRightToLeft:(BOOL)arg2;
- (id)initWithDocument:(id)arg1;

@end

