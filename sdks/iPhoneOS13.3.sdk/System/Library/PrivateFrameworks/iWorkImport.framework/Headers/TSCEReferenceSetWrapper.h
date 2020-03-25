//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSCEReferenceSetWrapper : NSObject <NSCopying>
{
    struct TSCEReferenceSet _referenceSet;
}

- (void)foreachSpanningRangeRef:(id /* CDUnknownBlockType */)arg1;
- (void)foreachRangeRef:(id /* CDUnknownBlockType */)arg1;
- (void)foreachCellRef:(id /* CDUnknownBlockType */)arg1;
- (void)forallRefs:(id /* CDUnknownBlockType */)arg1;
- (void)removeCellRef:(const struct TSCECellRef )arg1;
- (void)insertRefs:(id)arg1;
- (void)insertSpanningRangeRef:(const struct TSCESpanningRangeRef )arg1;
- (void)insertRangeRef:(const struct TSCERangeRef )arg1;
- (void)insertCellRef:(const struct TSCECellRef )arg1;
- (void)insertAnyRef:(const struct TSCEAnyRef )arg1;
@property(readonly, nonatomic) struct TSCEReferenceSet referenceSet;
@property(readonly, nonatomic) BOOL isEmpty;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithReferenceSet:(const struct TSCEReferenceSet )arg1;
- (id)initWithDependencyTracker:(struct TSCEDependencyTracker )arg1;
- (id)init;

@end
