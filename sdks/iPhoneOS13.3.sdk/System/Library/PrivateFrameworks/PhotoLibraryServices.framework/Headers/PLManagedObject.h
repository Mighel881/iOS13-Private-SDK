//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <PhotoLibraryServices/PLJournalEntryPayloadManagedObjectUpdate-Protocol.h>
#import <PhotoLibraryServices/PLValidatedManagedObject-Protocol.h>

@class NSString, PLPhotoLibrary, PLPhotoLibraryPathManager;

@interface PLManagedObject : NSManagedObject <PLJournalEntryPayloadManagedObjectUpdate, PLValidatedManagedObject>
{
}

+ (id)objectIDDescription;
+ (id)attributeValidationRules;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)entityName;
- (void)willSave;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;
@property(readonly, copy, nonatomic) NSString *shortObjectIDURI;
@property(readonly, nonatomic) BOOL isRegisteredWithUserInterfaceContext;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)arg1;
- (id)payloadsForChangedKeys:(id)arg1;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

@end

