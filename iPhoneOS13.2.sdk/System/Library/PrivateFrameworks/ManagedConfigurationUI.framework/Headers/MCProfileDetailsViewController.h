//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class MCUIProfile, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCProfileDetailsViewController : UITableViewController <PSStateRestoration>
{
    _Bool _showTitleIfOnlyOneSection;
    _Bool _viewControllerCanPop;
    int _mode;
    double _tableViewBottomInset;
    MCUIProfile *_UIProfile;
    NSArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool viewControllerCanPop; // @synthesize viewControllerCanPop=_viewControllerCanPop;
@property(nonatomic) _Bool showTitleIfOnlyOneSection; // @synthesize showTitleIfOnlyOneSection=_showTitleIfOnlyOneSection;
@property(retain, nonatomic) MCUIProfile *UIProfile; // @synthesize UIProfile=_UIProfile;
@property(nonatomic) double tableViewBottomInset; // @synthesize tableViewBottomInset=_tableViewBottomInset;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_profileChanged:(id)arg1;
- (void)reloadSectionArray;
- (void)setUIProfile:(id)arg1 mode:(int)arg2;
- (void)setProfileDetailsMode:(int)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
