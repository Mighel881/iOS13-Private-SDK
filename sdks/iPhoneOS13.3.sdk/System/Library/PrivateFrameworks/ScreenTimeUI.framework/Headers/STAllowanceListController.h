//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STPINListViewController.h>

#import <ScreenTimeUI/STAllowanceDetailListControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSObject, PSSpecifier;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STAllowanceListController : STPINListViewController <STAllowanceDetailListControllerDelegate>
{
    BOOL _shouldShowConfirmDeletionAlert;
    NSObject<STRootViewModelCoordinator> *_coordinator;
    NSArray *_allowanceSpecifiers;
    PSSpecifier *_enableAllAllowancesSpecifier;
    NSDictionary *_allowanceSpecifiersByBundleIdentifier;
}

@property(copy) NSDictionary *allowanceSpecifiersByBundleIdentifier; // @synthesize allowanceSpecifiersByBundleIdentifier=_allowanceSpecifiersByBundleIdentifier;
@property BOOL shouldShowConfirmDeletionAlert; // @synthesize shouldShowConfirmDeletionAlert=_shouldShowConfirmDeletionAlert;
@property(retain) PSSpecifier *enableAllAllowancesSpecifier; // @synthesize enableAllAllowancesSpecifier=_enableAllAllowancesSpecifier;
@property(copy) NSArray *allowanceSpecifiers; // @synthesize allowanceSpecifiers=_allowanceSpecifiers;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
// - (void).cxx_destruct;
- (void)showStoreDemoAlert;
- (void)_didFetchAppInfo:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)deleteAllowance:(id)arg1;
- (void)_showConfirmDeletionView:(id)arg1;
- (void)confirmDeletion:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)addAllowance:(id)arg1;
- (void)_showAllowanceDetailController:(id)arg1;
- (id)_subtitleTextForAllowance:(id)arg1;
- (id)_specifierForAllowance:(id)arg1;
- (id)_allAllowancesEnabled:(id)arg1;
- (void)_setAllAllowancesEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
@property(readonly) BOOL shouldShowCompatibilityAlert;
- (void)_adjustCellHeightForAllowanceSpecifier:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_allowancesDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)init;

@end

