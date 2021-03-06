//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SiriUICore/SUICProgressIndicatorViewControllerDataSource-Protocol.h>

@class NSProgress, SUICProgressIndicatorViewController, SUICProgressStateMachine, UIButton;

@interface SUICProgressDebugViewController : UIViewController <SUICProgressIndicatorViewControllerDataSource>
{
    SUICProgressIndicatorViewController *_indicatorViewController;
    UIButton *_eventGeneratorButton;
    SUICProgressStateMachine *_stateMachine;
    NSUInteger _testEventLoopCounter;
}

// - (void).cxx_destruct;
- (void)_eventGeneratorButtonTouchedUpInside:(id)arg1;
@property(readonly) NSProgress *progress;
- (id)stateMachineForProgressIndicatorViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

