//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class UINavigationController;

@interface _UIViewServiceViewController : UIViewController <UINavigationControllerDelegate>
{
    id _hostingViewController;
    UINavigationController *_containedNavController;
}

@property(readonly, nonatomic) UINavigationController *containedNavController; // @synthesize containedNavController=_containedNavController;
@property(readonly, nonatomic) id hostingViewController; // @synthesize hostingViewController=_hostingViewController;
// - (void).cxx_destruct;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (CGSize)_updatedContentSizeForPreferredContentSize:(CGSize)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

