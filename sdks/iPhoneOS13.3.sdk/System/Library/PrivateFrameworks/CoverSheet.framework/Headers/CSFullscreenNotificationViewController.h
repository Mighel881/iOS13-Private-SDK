//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSModalViewControllerBase.h>

#import <CoverSheet/CSModalViewDelegate-Protocol.h>
#import <CoverSheet/CSNotificationDestination-Protocol.h>

@class NCNotificationAction, NCNotificationRequest;
@protocol CSNotificationDispatcher;

@interface CSFullscreenNotificationViewController : CSModalViewControllerBase <CSModalViewDelegate, CSNotificationDestination>
{
    NCNotificationRequest *_request;
    NCNotificationAction *_primaryAction;
    NCNotificationAction *_secondaryAction;
    NCNotificationAction *_silenceAction;
    NCNotificationAction *_dismissAction;
    id <CSNotificationDispatcher> _dispatcher;
}

@property(nonatomic) __weak id <CSNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_request;
// - (void).cxx_destruct;
- (void)_dismissFromSignificantUserInteraction;
- (BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1;
- (BOOL)isPresentingNotificationInLongLook;
- (BOOL)isNotificationContentExtensionVisible:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (void)handlePrimaryActionForView:(id)arg1;
- (BOOL)wouldHandleButtonEvent:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)lockButtonPressed:(id)arg1;
- (void)volumeChanged:(id)arg1;
- (void)_handleAction:(id)arg1 withName:(id)arg2;
- (void)_handleSilenceAction;
- (void)_handleDismissAction;
- (void)_handleSecondaryAction;
- (void)_handlePrimaryAction;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNotificationRequest:(id)arg1;

@end

