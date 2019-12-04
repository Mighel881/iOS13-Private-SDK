//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKServiceViewController.h>

#import <GameCenterUI/MFMessageComposeViewControllerInternalDelegate-Protocol.h>

@class MFMessageComposeViewController, NSString;

@interface GKServiceFriendRequestViewController : GKServiceViewController <MFMessageComposeViewControllerInternalDelegate>
{
    _Bool _messageComposeSent;
    MFMessageComposeViewController *_composeController;
    NSString *_friendCode;
    NSString *_friendSupportPageURL;
}

@property(nonatomic) _Bool messageComposeSent; // @synthesize messageComposeSent=_messageComposeSent;
@property(retain, nonatomic) NSString *friendSupportPageURL; // @synthesize friendSupportPageURL=_friendSupportPageURL;
@property(retain, nonatomic) NSString *friendCode; // @synthesize friendCode=_friendCode;
@property(retain, nonatomic) MFMessageComposeViewController *composeController; // @synthesize composeController=_composeController;
- (void)displayAlertWithTitle:(id)arg1 andMessage:(id)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(id /* block */)arg4;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)constructPrivateViewController;
- (void)setInitialState:(id)arg1 withReply:(id /* block */)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_useBackdropViewForWindowBackground;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
