//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class REMListChangeItem;

@interface REMListSublistContextChangeItem : NSObject
{
    REMListChangeItem *_listChangeItem;
}

@property(retain, nonatomic) REMListChangeItem *listChangeItem; // @synthesize listChangeItem=_listChangeItem;
- (void)_insertListChangeItem:(id)arg1 adjacentToListChangeItem:(id)arg2 isAfter:(_Bool)arg3;
- (void)insertListChangeItem:(id)arg1 afterListChangeItem:(id)arg2;
- (void)insertListChangeItem:(id)arg1 beforeListChangeItem:(id)arg2;
- (void)addListChangeItem:(id)arg1;
- (id)initWithListChangeItem:(id)arg1;

@end
