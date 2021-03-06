//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAppLoadingViewController.h>

@class NSString, SSLookupItemOffer, UIBarButtonItem, UIButton, VUIAppInstallConfirmationView, VUIAppInstallLockup;
@protocol WLKInstallable;

__attribute__((visibility("hidden")))
@interface VUIAppInstallConfirmationViewController : VUIAppLoadingViewController
{
    NSString *_updateTitle;
    NSString *_updateMessage;
    id /* CDUnknownBlockType */ _cancelationHandler;
    id /* CDUnknownBlockType */ _actionHandler;
    id /* CDUnknownBlockType */ _appStoreHandler;
    id /* CDUnknownBlockType */ _secondaryLinkHandler;
    NSUInteger _state;
    UIBarButtonItem *_barButtonItem;
    VUIAppInstallConfirmationView *_confirmationView;
    id <WLKInstallable> _installable;
    SSLookupItemOffer *_itemOffer;
}

@property(retain, nonatomic) SSLookupItemOffer *itemOffer; // @synthesize itemOffer=_itemOffer;
@property(retain, nonatomic) id <WLKInstallable> installable; // @synthesize installable=_installable;
@property(retain, nonatomic) VUIAppInstallConfirmationView *confirmationView; // @synthesize confirmationView=_confirmationView;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
@property(copy, nonatomic) id /* CDUnknownBlockType */ secondaryLinkHandler; // @synthesize secondaryLinkHandler=_secondaryLinkHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ appStoreHandler; // @synthesize appStoreHandler=_appStoreHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
// - (void).cxx_destruct;
- (id)_namedRatingWithRatings:(id)arg1;
- (id)_fileSizeWithDeviceSizes:(id)arg1;
- (void)_fetchStoreInfoForAdamID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_fetchAppInfo;
- (void)_handleSecondaryLink;
- (void)_handleAppStore;
- (void)_handleCancel;
- (void)_handleAction;
- (void)loadView;
- (void)setInstallingState;
- (void)setPreInstallState;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
@property(readonly, nonatomic) UIButton *actionButton;
@property(readonly, nonatomic) VUIAppInstallLockup *lockup;
- (void)setSecondaryLinkTitle:(id)arg1;
- (void)setUpdateTitle:(id)arg1;
- (void)setUpdateMessage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithInstallable:(id)arg1;
- (id)init;

@end

