//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowUI/WFDynamicResolveViewControllerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface WFDynamicResolveParameterSummaryEditor : WFModuleSummaryEditor <WFDynamicResolveViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
}

@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)dynamicResolverViewController:(id)arg1 didFailToResolveWithError:(id)arg2;
- (void)dynamicResolverViewController:(id)arg1 didFinishResolvingWithObject:(id)arg2;
- (void)finishAndDismiss:(_Bool)arg1;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
