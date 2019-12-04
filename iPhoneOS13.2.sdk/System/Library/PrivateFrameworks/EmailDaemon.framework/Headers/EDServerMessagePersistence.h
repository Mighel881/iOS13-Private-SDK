//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDGmailLabelPersistence, EDPersistenceDatabase, NSString;

@interface EDServerMessagePersistence : NSObject <EFLoggable>
{
    _Bool _supportsLabels;
    _Bool _useNumericSearch;
    EDPersistenceDatabase *_database;
    EDGmailLabelPersistence *_gmailLabelPersistence;
    long long _mailboxID;
}

+ (id)serverLabelsTableSchema;
+ (id)serverMessagesTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (id)log;
@property(readonly, nonatomic) _Bool useNumericSearch; // @synthesize useNumericSearch=_useNumericSearch;
@property(readonly, nonatomic) long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property(readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence; // @synthesize gmailLabelPersistence=_gmailLabelPersistence;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) _Bool supportsLabels; // @synthesize supportsLabels=_supportsLabels;
- (id)_remoteIDStringForRemoteIDArray:(id)arg1;
- (_Bool)_addLabels:(id)arg1 removeLabels:(id)arg2 forUID:(unsigned int)arg3 connection:(id)arg4;
- (_Bool)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesWithRemoteIDs:(id)arg3;
- (_Bool)applyFlagChange:(id)arg1 toMessagesWithRemoteIDs:(id)arg2;
- (_Bool)deleteAllServerMessagesInMailbox;
- (_Bool)deleteServerMessagesWithRemoteIDs:(id)arg1;
- (_Bool)attachMessage:(long long)arg1 toServerMessageWithRemoteID:(id)arg2;
- (_Bool)addServerMessage:(id)arg1 invalidMessage:(_Bool *)arg2 duplicateRemoteID:(_Bool *)arg3;
- (id)_serverMessageForRow:(id)arg1 connection:(id)arg2;
- (id)_serverMessagesWithWhereClause:(id)arg1 limitClause:(id)arg2 returnLastEntries:(_Bool)arg3;
- (id)serverMessagesInIMAPUIDRange:(struct _NSRange)arg1 limit:(unsigned long long)arg2 returnLastEntries:(_Bool)arg3;
- (id)serverMessagesForRemoteIDs:(id)arg1;
@property(readonly, nonatomic) unsigned int minimumIMAPUID;
@property(readonly, nonatomic) unsigned int maximumIMAPUID;
@property(readonly, nonatomic) unsigned long long undeletedMessageCount;
@property(readonly, nonatomic) unsigned long long unreadMessageCount;
@property(readonly, nonatomic) unsigned long long messageCount;
- (id)init;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 mailboxID:(long long)arg3 useNumericSearch:(_Bool)arg4 supportsLabels:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
