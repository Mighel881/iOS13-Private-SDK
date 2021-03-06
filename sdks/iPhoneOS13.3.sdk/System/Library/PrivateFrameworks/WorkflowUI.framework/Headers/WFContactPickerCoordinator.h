//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/CNContactPickerDelegate-Protocol.h>
#import <WorkflowUI/CNContactViewControllerDelegate-Protocol.h>

@class NSSet, UIViewController, WFAlertPresentationSource;

@interface WFContactPickerCoordinator : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    NSSet *_supportedPersonProperties;
    WFAlertPresentationSource *_presentationSource;
    UIViewController *_presentingViewController;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) WFAlertPresentationSource *presentationSource; // @synthesize presentationSource=_presentationSource;
@property(copy, nonatomic) NSSet *supportedPersonProperties; // @synthesize supportedPersonProperties=_supportedPersonProperties;
// - (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)supportedContactProperties;
- (id)contactWithMatchingPropertyAndMultivalueIndex:(id)arg1;
- (void)finishWithContact:(id)arg1;
- (void)dismissPersonViewController;
- (void)presentViewController:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)presentHandlePickerForContact:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)presentContactPickerWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;

@end

