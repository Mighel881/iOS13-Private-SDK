//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UICollectionView, UITableView;

__attribute__((visibility("hidden")))
@interface _UIIndexPathIdentityTracker : NSObject
{
    UITableView *_tableView;
    UICollectionView *_collectionView;
    id _identityBasedDataSource;
    NSMutableDictionary *_mapping;
    _Bool _enforcesManualMapping;
}

- (void)enforceManualMapping;
- (id)init;
- (void)reset;
- (void)updateWithUpdateItems:(id)arg1;
- (id)currentIndexPathForIdentifier:(id)arg1;
- (id)identifierForIndexPath:(id)arg1;
- (id)_mappingIdentifierForSanitizedIndexPath:(id)arg1;
- (id)initWithCollectionView:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end
