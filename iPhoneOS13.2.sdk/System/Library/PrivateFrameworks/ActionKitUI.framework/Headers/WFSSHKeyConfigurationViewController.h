//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ActionKitUI/WFSSHKeyGenerationViewControllerDelegate-Protocol.h>

@class NSString, WFBasicTableItem, WFSSHKeyPair, WFTableDataSource, WFTableSection;
@protocol WFSSHKeyConfigurationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFSSHKeyConfigurationViewController : UITableViewController <WFSSHKeyGenerationViewControllerDelegate>
{
    id <WFSSHKeyConfigurationViewControllerDelegate> _delegate;
    WFTableDataSource *_dataSource;
    WFTableSection *_keyInfoSection;
    WFTableSection *_actionsSection;
    WFBasicTableItem *_typeItem;
    WFBasicTableItem *_md5HashItem;
    WFBasicTableItem *_sha256HashItem;
    WFBasicTableItem *_bitsItem;
    WFBasicTableItem *_commentItem;
    WFBasicTableItem *_exportItem;
    WFBasicTableItem *_generateItem;
    WFSSHKeyPair *_keyPair;
}

@property(retain, nonatomic) WFSSHKeyPair *keyPair; // @synthesize keyPair=_keyPair;
@property(readonly, nonatomic) WFBasicTableItem *generateItem; // @synthesize generateItem=_generateItem;
@property(readonly, nonatomic) WFBasicTableItem *exportItem; // @synthesize exportItem=_exportItem;
@property(readonly, nonatomic) WFBasicTableItem *commentItem; // @synthesize commentItem=_commentItem;
@property(readonly, nonatomic) WFBasicTableItem *bitsItem; // @synthesize bitsItem=_bitsItem;
@property(readonly, nonatomic) WFBasicTableItem *sha256HashItem; // @synthesize sha256HashItem=_sha256HashItem;
@property(readonly, nonatomic) WFBasicTableItem *md5HashItem; // @synthesize md5HashItem=_md5HashItem;
@property(readonly, nonatomic) WFBasicTableItem *typeItem; // @synthesize typeItem=_typeItem;
@property(readonly, nonatomic) WFTableSection *actionsSection; // @synthesize actionsSection=_actionsSection;
@property(readonly, nonatomic) WFTableSection *keyInfoSection; // @synthesize keyInfoSection=_keyInfoSection;
@property(readonly, nonatomic) WFTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WFSSHKeyConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyGenerationViewController:(id)arg1 didFinishWithKeyPair:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showHashWithType:(unsigned long long)arg1;
- (id)localizedDisplayNameForType:(unsigned long long)arg1;
- (id)truncatedHash:(id)arg1;
- (void)updateVisibleItems;
- (id)publicKey;
- (void)donePressed:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
