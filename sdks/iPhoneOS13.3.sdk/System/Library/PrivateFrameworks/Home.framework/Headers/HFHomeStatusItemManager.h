//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFStaticItem, HFStatusItemProvider;

@interface HFHomeStatusItemManager : HFItemManager
{
    HFStaticItem *_showDetailsItem;
    NSUInteger _maxStatusItemCount;
    HFStatusItemProvider *_statusItemProvider;
    long long _latestOverallPriority;
    NSUInteger _latestOverallLoadingState;
}

@property(nonatomic) NSUInteger latestOverallLoadingState; // @synthesize latestOverallLoadingState=_latestOverallLoadingState;
@property(nonatomic) long long latestOverallPriority; // @synthesize latestOverallPriority=_latestOverallPriority;
@property(retain, nonatomic) HFStatusItemProvider *statusItemProvider; // @synthesize statusItemProvider=_statusItemProvider;
@property(nonatomic) NSUInteger maxStatusItemCount; // @synthesize maxStatusItemCount=_maxStatusItemCount;
@property(retain, nonatomic) HFStaticItem *showDetailsItem; // @synthesize showDetailsItem=_showDetailsItem;
// - (void).cxx_destruct;
- (id)_showDetailsItemTitle;
- (NSUInteger)_overflowStatusItemCount;
- (long long)_overallPriority;
- (BOOL)_requiresNotificationsForCharacteristic:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id /* CDUnknownBlockType */)_comparatorForSectionIdentifier:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithMaxStatusItems:(NSUInteger)arg1 delegate:(id)arg2;

@end

