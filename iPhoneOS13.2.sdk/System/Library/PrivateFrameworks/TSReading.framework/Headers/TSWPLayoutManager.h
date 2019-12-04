//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPStorageObserver-Protocol.h>

@class TSWPCTTypesetterCache, TSWPStorage;
@protocol TSWPLayoutOwner;

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver>
{
    id <TSWPLayoutOwner> _owner;
    TSWPStorage *_storage;
    _Bool _isObservingStorage;
    _Bool _useLigatures;
    long long _delta;
    struct _NSRange _dirtyRange;
    TSWPCTTypesetterCache *_typesetterCache;
    struct TSWPTopicNumberHints _cachedTopicNumbers;
}

+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(_Bool)arg7 styleProvider:(id)arg8 vertical:(_Bool)arg9;
@property(readonly, nonatomic) struct _NSRange dirtyRange; // @synthesize dirtyRange=_dirtyRange;
@property(readonly, retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) id <TSWPLayoutOwner> owner; // @synthesize owner=_owner;
- (id).cxx_construct;
- (int)p_layoutConfigFlagsForTarget:(id)arg1;
@property(readonly, retain, nonatomic) TSWPCTTypesetterCache *typesetterCache;
- (void)destroyLayoutState:(void *)arg1;
- (void)inflateTarget:(id)arg1 fromHints:(const vector_2f7f6b92 *)arg2 childHint:(id)arg3 anchoredAttachmentPositions:(id)arg4 topicNumbers:(const struct TSWPTopicNumberHints *)arg5;
- (void)deflateTarget:(id)arg1 intoHints:(vector_2f7f6b92 *)arg2 childHints:(id [2])arg3 anchoredAttachmentPositions:(id *)arg4 topicNumbers:(struct TSWPTopicNumberHints *)arg5 layoutState:(void *)arg6;
- (void *)layoutStateForLayoutTarget:(id)arg1 afterHint:(const CDStruct_6026ced1 *)arg2 childHint:(id)arg3 topicNumbers:(const struct TSWPTopicNumberHints *)arg4 textIsVertical:(_Bool)arg5;
- (double)layoutIntoTarget:(id)arg1 withRange:(struct _NSRange)arg2;
- (void *)layoutIntoTarget:(id)arg1 withLayoutState:(void *)arg2 outSync:(_Bool *)arg3;
- (_Bool)needsLayoutInColumn:(id)arg1;
- (void)willRemoveAttachmentLayout:(id)arg1;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)clearTypesetterCache;
- (void)clearOwner;
- (void)resetTopicNumbers;
- (id)styleProvider;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 owner:(id)arg2;

@end
