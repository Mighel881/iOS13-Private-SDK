//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSDate, NSDateComponents;

@interface PHAssetCollection (Clouseau)
- (id)_fetchFirstAssetSortedByCreationDateAscending:(_Bool)arg1;
- (id)_legacyLocalEndDate;
- (id)_legacyLocalStartDate;
- (id)_legacyUniversalEndDate;
- (id)_legacyUniversalStartDate;
- (id)_legacyLocalEndDateComponents;
- (id)_legacyLocalStartDateComponents;
@property(readonly, nonatomic) NSDate *cls_localEndDate;
@property(readonly, nonatomic) NSDate *cls_localStartDate;
@property(readonly, nonatomic) NSDate *cls_universalEndDate;
@property(readonly, nonatomic) NSDate *cls_universalStartDate;
@property(readonly, nonatomic) NSDateComponents *cls_localEndDateComponents;
@property(readonly, nonatomic) NSDateComponents *cls_localStartDateComponents;
@end
