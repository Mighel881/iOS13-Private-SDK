//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthRecordsUI/UITableViewDataSource-Protocol.h>
#import <HealthRecordsUI/UITableViewDelegate-Protocol.h>

@class HRProfile, NSArray, NSString, UIButton, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface WDImprovementDataCollectionOptInViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>
{
    HRProfile *_profile;
    NSArray *_sections;
    UIButton *_allowButton;
    UIButton *_doNotAllowButton;
    UITableView *_tableView;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *doNotAllowButton; // @synthesize doNotAllowButton=_doNotAllowButton;
@property(retain, nonatomic) UIButton *allowButton; // @synthesize allowButton=_allowButton;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
- (void)_setOptInStatus:(long long)arg1;
- (void)aboutPrivacyButtonTapped:(id)arg1;
- (void)doNotAllowButtonTapped:(id)arg1;
- (void)allowButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_computeSections;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
