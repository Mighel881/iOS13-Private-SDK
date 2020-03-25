//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionRemoteViewController.h>

#import <GameCenterUI/GKAuthenticateHostProtocol-Protocol.h>

@class GKHostedAuthenticateViewController;

@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController <GKAuthenticateHostProtocol>
{
    GKHostedAuthenticateViewController *_delegateWeak;
}

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)authenticateExtension;
- (void)applicationWillTerminate:(id)arg1;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (void)messageFromExtension:(id)arg1;
@property(nonatomic) GKHostedAuthenticateViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (void)viewDidLoad;

@end
