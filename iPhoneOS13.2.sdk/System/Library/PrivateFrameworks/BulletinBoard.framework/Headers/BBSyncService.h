//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableArray, NSString;
@protocol BBSyncServiceDelegate, OS_dispatch_queue;

@interface BBSyncService : NSObject <IDSServiceDelegate>
{
    IDSService *_service;
    NSMutableArray *_pendingDismissalDictionaries;
    NSMutableArray *_pendingDismissalIDs;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _queuedFeed;
    NSString *_queuedSectionID;
    NSString *_queuedUniversalSectionID;
    id <BBSyncServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <BBSyncServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_dismissalDictionaryForBulletin:(id)arg1;
- (void)_sendSyncMessage:(id)arg1;
- (id)_syncLocalDevices;
- (_Bool)_syncHasDefaultPairedDevice;
- (void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (_Bool)_hasDestination;
- (id)_syncAccount;
- (void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)sendPendingSyncedRemovals;
- (id)dismissalSectionIdentifierForIncomingMessage:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
@property(readonly, nonatomic) unsigned long long pairedDeviceCount; // @dynamic pairedDeviceCount;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
