//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSSocialServiceContactsDelegate-Protocol.h>

@class CLSLRUMemoryCache, CLSPerson, CLSRoutineService, CLSSocialServiceCalendar, CLSSocialServiceContacts, CLSSocialServiceCoreDuet, CLSSocialServiceCoreNameParser, NSDateInterval, NSURL;

@interface CLSServiceManager : NSObject <CLSSocialServiceContactsDelegate>
{
    CLSLRUMemoryCache *_personsCache;
    CLSRoutineService *_routineService;
    CLSSocialServiceContacts *_contactsService;
    CLSSocialServiceCalendar *_calendarService;
    CLSSocialServiceCoreDuet *_coreDuetService;
    CLSSocialServiceCoreNameParser *_coreNameParserService;
    CLSPerson *_mePerson;
    NSObject *_routineServiceLockObject;
    NSDateInterval *_validDateInterval;
    NSURL *_applicationDataURL;
}

+ (id)sharedManagerWithURL:(id)arg1;
+ (id)sharedManager;
@property(readonly, nonatomic) NSURL *applicationDataURL; // @synthesize applicationDataURL=_applicationDataURL;
@property(retain, nonatomic) NSDateInterval *validDateInterval; // @synthesize validDateInterval=_validDateInterval;
@property(readonly, nonatomic) NSObject *routineServiceLockObject; // @synthesize routineServiceLockObject=_routineServiceLockObject;
@property(retain, nonatomic) CLSPerson *mePerson; // @synthesize mePerson=_mePerson;
// - (void).cxx_destruct;
- (void)flushSocialServicesAtURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (NSUInteger)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (NSUInteger)genderHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (id)mePersonAddressesOfType:(NSUInteger)arg1;
- (BOOL)hasAddressesForMePerson;
- (id)personForIdentifier:(id)arg1;
- (void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)personsFromEventParticipants:(id)arg1 excludeCurrentUser:(BOOL)arg2;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)arg1 fromUniversalDate:(id)arg2 toUniversalDate:(id)arg3;
- (id)eventsForClueCollection:(id)arg1;
- (void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (id)lastLocationOfInterestVisit;
- (void)postProcessLocationsOfInterest;
- (id)fetchImportantLocationsOfInterest;
- (id)predominantLocationMobilityForDateInterval:(id)arg1 confidence:(double )arg2;
- (id)fetchLocationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestAtLocation:(id)arg1;
- (BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)contactHistoryCollector;
- (id)matchingDictionaryForContactIdentifier:(id)arg1;
- (id)contactsForIdentifiers:(id)arg1;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumeratePersonsForFullname:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)personForPersonHandle:(id)arg1;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1 usingPersonsModel:(id)arg2;
- (id)cachedPersonLocalIdentifierMatchingContactPictureForContactIdentifier:(id)arg1;
- (void)enumeratePersonsAndRelationshipUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumeratePersonsAndBirthdayDateUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumeratePersonsAndHomeAddressUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateAllPersonsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)coreDuetPersonSuggestionsOnDate:(id)arg1;
- (id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)personResultForName:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)eventsForDates:(id)arg1;
- (void)invalidatePersonsCacheForPersonsWithNames:(id)arg1;
- (void)invalidateMomentaryMemoryCaches;
- (void)invalidatePermanentMemoryCaches;
@property(readonly, nonatomic) CLSSocialServiceCoreNameParser *coreNameParserService; // @synthesize coreNameParserService=_coreNameParserService;
@property(readonly, nonatomic) CLSRoutineService *routineService; // @synthesize routineService=_routineService;
@property(readonly, nonatomic) CLSSocialServiceCalendar *calendarService; // @synthesize calendarService=_calendarService;
@property(readonly, nonatomic) CLSSocialServiceCoreDuet *coreDuetService; // @synthesize coreDuetService=_coreDuetService;
@property(readonly, nonatomic) CLSSocialServiceContacts *contactsService; // @synthesize contactsService=_contactsService;
- (id)init;
- (double)pinningVisitsRatio;
- (NSUInteger)numberOfMatchRequests;
- (NSUInteger)numberOfRemoteLocationMatches;
- (NSUInteger)numberOfCloseByLocationMatches;
- (NSUInteger)numberOfTimeMatches;
- (NSUInteger)numberOfVisits;
- (NSUInteger)numberOfLocationsOfInterest;
- (BOOL)routineIsAvailable;

@end

