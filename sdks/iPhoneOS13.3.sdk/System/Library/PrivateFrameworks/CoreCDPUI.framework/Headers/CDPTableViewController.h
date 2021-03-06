//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class BFFPaneHeaderView, NSString, UITableView, UIView;

@interface CDPTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_headerTitle;
    NSString *_headerSubTitle;
    id /* CDUnknownBlockType */ _completionHandler;
    UIView *_containerView;
    UITableView *_tableView;
    BFFPaneHeaderView *_headerView;
}

@property(retain, nonatomic) BFFPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *headerSubTitle; // @synthesize headerSubTitle=_headerSubTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) BOOL uiTestMode;
@property(readonly, nonatomic) BOOL isiPhone5OrSmaller;
@property(readonly, nonatomic) BOOL isIPad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
@property(readonly, copy, nonatomic) NSString *deviceClass;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2;

@end

