//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLDiagnosticsProvider-Protocol.h>
#import <PhotoLibraryServices/PLMomentData-Protocol.h>

@class CLLocation, NSArray, NSDate, NSObject;
@protocol NSCopying;

@interface PLMoment : PLManagedObject <PLMomentData, PLDiagnosticsProvider>
{
    BOOL _loadedNameInfo;
    CLLocation *_cachedApproximateLocation;
    BOOL _didCacheApproximateLocation;
    struct CLLocationCoordinate2D _cachedCoordinate;
    BOOL _didCacheCoordinate;
    BOOL isRegisteredForChanges;
    BOOL didRegisteredWithUserInterfaceContext;
}

+ (id)sortByTimeSortDescriptors;
+ (id)entityName;
+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;
+ (id)baseSearchIndexPredicate;
+ (id)allAssetsInManagedObjectContext:(id)arg1 predicate:(id)arg2 IDsOnly:(BOOL)arg3 error:(id )arg4;
+ (id)allInvalidAssetsInManagedObjectContext:(id)arg1 error:(id )arg2;
+ (id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 inManagedObjectContext:(id)arg2 error:(id )arg3;
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(BOOL)arg2 error:(id )arg3;
+ (void)batchFetchMomentUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg1 library:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (id)predicateForInvalidAssets;
+ (id)predicateForInvalidAssetsIgnoringAssetsWithIdentifiers:(id)arg1;
+ (id)predicateForInvalidMoments;
+ (id)predicateForAssetsIncludedInMoments;
+ (id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedInManagedObjectContext:(id)arg1 error:(id )arg2;
+ (id)momentsWithLocationTypeUnprocessedInManagedObjectContext:(id)arg1 error:(id )arg2;
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id )arg2;
+ (id)allMomentsInManagedObjectContext:(id)arg1 predicate:(id)arg2 idsOnly:(BOOL)arg3 error:(id )arg4;
+ (id)allInvalidMomentIDsInManagedObjectContext:(id)arg1 error:(id )arg2;
+ (id)allInvalidMomentsInManagedObjectContext:(id)arg1 error:(id )arg2;
+ (id)allMomentIDsInManagedObjectContext:(id)arg1 error:(id )arg2;
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id )arg2;
+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id )arg2;
@property(nonatomic) BOOL didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property(nonatomic) BOOL isRegisteredForChanges; // @synthesize isRegisteredForChanges;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger pl_numberOfAssets;
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@property(readonly, nonatomic) CLLocation *pl_location;
@property(readonly, nonatomic) NSDate *pl_endDate;
@property(readonly, nonatomic) NSDate *pl_startDate;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
- (NSUInteger)fetchedAssetsCount;
@property(readonly, retain, nonatomic) NSArray *batchedAssets;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
- (void)removeAssetsObject:(id)arg1;
- (void)replaceObjectInAssets:(id)arg1 withObject:(id)arg2;
- (void)didTurnIntoFault;
- (id)mutableAssets;
- (void)willSave;
- (void)insertAssetData:(id)arg1;
- (void)removeAssetData:(id)arg1;
- (void)delete;
- (id)diagnosticInformation;
- (BOOL)supportsDiagnosticInformation;
- (void)unregisterForChanges;
- (void)registerForChanges;
@property(retain, nonatomic) CLLocation *approximateLocation;
- (void)dealloc;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (NSUInteger)countForAssetsOfKind:(short)arg1;
- (void)_appendLocationsInfo:(id)arg1 toCollection:(id)arg2;
- (void)_appendWorkText:(id)arg1 toCollection:(id)arg2;
- (void)_appendHomeToCollection:(id)arg1;
- (void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendPublicEventStrings:(id)arg1 toCollection:(id)arg2 forSearchIndexCategory:(NSUInteger)arg3;
- (void)_appendBusinessCategories:(id)arg1 toCollection:(id)arg2;
- (void)_appendBusinessNames:(id)arg1 toCollection:(id)arg2;
- (void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendHolidays:(id)arg1 toCollection:(id)arg2;
- (void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendScenesWithIdentifiers:(id)arg1 toCollection:(id)arg2 sceneTaxonomyProxy:(id)arg3;
- (void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toCollection:(id)arg4;
- (void)_appendSocialGroupIdentifiers:(id)arg1 toCollection:(id)arg2;
- (void)_appendPersonsWithUUIDs:(id)arg1 toCollection:(id)arg2;
- (void)getSearchIndexContentsForCollection:(id)arg1 fromDictionary:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomyProxy:(id)arg5;
- (id)assetUUIDsForPreviewWithCount:(NSUInteger)arg1;
- (id)displayTitleWithDateFormatter:(id)arg1;
- (id)bestAsset;
- (CGImage )posterImage;
- (id)groupURL;
- (BOOL)isCloudSharedAlbum;

@end
