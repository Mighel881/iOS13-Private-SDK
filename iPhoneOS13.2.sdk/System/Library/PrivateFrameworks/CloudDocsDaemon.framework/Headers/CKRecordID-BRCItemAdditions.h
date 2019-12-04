//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKRecordID.h>

#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSString;

@interface CKRecordID (BRCItemAdditions) <PQLValuable>
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;
- (BOOL)brc_itemType;
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;
- (id)brc_itemIDWithSession:(id)arg1 error:(id *)arg2;
- (id)brc_itemIDWithSession:(id)arg1;
- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;
- (_Bool)brc_isZoneRootRecordID;
- (id)brc_appLibraryDocumentsZoneName;
- (_Bool)brc_isAppLibraryDocumentsRecordID;
- (id)brc_appLibraryRootZoneName;
- (_Bool)brc_isAppLibraryRootRecordID;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)brc_shareItemID;
- (id)brc_shareZoneName;
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;
- (id)initShareIDWithShareableItem:(id)arg1;
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
