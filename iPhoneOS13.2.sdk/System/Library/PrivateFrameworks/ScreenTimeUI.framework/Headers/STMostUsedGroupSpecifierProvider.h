//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STShowMoreUsageGroupSpecifierProvider.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface STMostUsedGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider
{
    NSDictionary *_allowancesByActiveBudgetedIdentifier;
    unsigned long long _selectedItemType;
}

@property(nonatomic) unsigned long long selectedItemType; // @synthesize selectedItemType=_selectedItemType;
@property(copy, nonatomic) NSDictionary *allowancesByActiveBudgetedIdentifier; // @synthesize allowancesByActiveBudgetedIdentifier=_allowancesByActiveBudgetedIdentifier;
- (id)allowanceIconForUsageItem:(id)arg1;
- (void)showMostUsedDetailListController:(id)arg1;
- (void)reloadMostUsedSpecifiers;
- (void)toggleSelectedItemType:(id)arg1;
- (id)getUsageItem:(id)arg1;
- (void)loadActiveBudgetedIdentifiers;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end
