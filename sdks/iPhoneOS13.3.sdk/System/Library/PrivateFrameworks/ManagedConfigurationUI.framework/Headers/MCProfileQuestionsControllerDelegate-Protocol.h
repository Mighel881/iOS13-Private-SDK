//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MCInstallProfileQuestionViewController, NSArray;

@protocol MCProfileQuestionsControllerDelegate
- (BOOL)questionsControllerIsDisplayedInSheet:(MCInstallProfileQuestionViewController *)arg1;
- (void)questionsController:(MCInstallProfileQuestionViewController *)arg1 didFinishWithResponses:(NSArray *)arg2;
- (void)setCurrentQuestionsController:(MCInstallProfileQuestionViewController *)arg1;
@end
