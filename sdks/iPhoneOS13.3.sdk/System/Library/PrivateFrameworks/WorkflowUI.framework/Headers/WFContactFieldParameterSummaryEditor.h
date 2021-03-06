//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/WFRecipientFieldViewControllerDelegate-Protocol.h>

@class UIViewController;

@interface WFContactFieldParameterSummaryEditor : WFModuleSummaryEditor <WFRecipientFieldViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
}

+ (NSUInteger)variableResultTypeForParameter:(id)arg1;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
// - (void).cxx_destruct;
- (id)variableMenuInitialStateForSlotWithIdentifier:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)recipientViewControllerDidFinish:(id)arg1 cancelled:(BOOL)arg2;
- (void)cancelEditingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)presentSinglePickerFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3;
- (void)beginEditingNewArrayElementFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4;

@end

