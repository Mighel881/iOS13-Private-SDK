//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSSet, NSString, PRSRankingConfiguration;

@interface SSRankingManager : NSObject
{
    BOOL _isInternalDevice;
    BOOL _isCancelled;
    PRSRankingConfiguration *_rankingConfiguration;
    NSMutableString *_logValues;
    double _blendingTime;
    NSString *_query;
    NSSet *_allowedTopHitSections;
}

+ (void)initialize;
+ (void)fetchDuetValues;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property BOOL isInternalDevice; // @synthesize isInternalDevice=_isInternalDevice;
@property(retain) NSSet *allowedTopHitSections; // @synthesize allowedTopHitSections=_allowedTopHitSections;
@property(retain) NSString *query; // @synthesize query=_query;
@property(nonatomic) double blendingTime; // @synthesize blendingTime=_blendingTime;
@property(retain) NSMutableString *logValues; // @synthesize logValues=_logValues;
@property(retain, nonatomic) PRSRankingConfiguration *rankingConfiguration; // @synthesize rankingConfiguration=_rankingConfiguration;
// - (void).cxx_destruct;
- (void)updateWithNewRankingInfo:(id)arg1;
- (id)keyForSection:(id)arg1;
- (void)finalizeLog;
- (void)addCEPValuesForTTR;
- (id)rankAppsAtTopForScopedSearchWithSections:(id)arg1;
- (id)groupSectionsByCategory:(id)arg1 genreMap:(id)arg2 topSections:(id)arg3;
- (void)updateServerScoresUsingBlockOrder:(id)arg1 bundleFeatures:(id)arg2;
- (id)applyTopSectionPolicy:(id)arg1 withTopHitSection:(id)arg2 isPeopleSearch:(BOOL)arg3 triggerEvent:(NSUInteger)arg4 correction:(id)arg5;
- (void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)arg1;
- (id)rankSectionsUsingBundleIDToSectionMapping:(id)arg1 withRanker:(id)arg2 isPeopleSearch:(BOOL)arg3 isScopedAppSearch:(BOOL)arg4 queryId:(NSUInteger)arg5 isCJK:(BOOL)arg6;
- (long long)compareDate:(id)arg1 withDate:(id)arg2;
- (id)initWithQuery:(id)arg1;
- (id)removeBlackListedSectionsForMapping:(id)arg1;
- (id)makeTopHitSectionUsingSections:(id)arg1 withItemRanker:(id)arg2 sectionHeader:(id)arg3 shortcutResult:(id)arg4;
- (void)applyTopHitRankingPolicyToSection:(id)arg1 topResultSection:(id)arg2 maxTopHitCount:(long long)arg3 isShortcut:(BOOL)arg4;
- (id)relativeRankWithAbsRank:(id)arg1 numberValues:(NSUInteger)arg2;
- (id)removeBlackListedSectionsForMapping:(id)arg1 withRankingConfiguration:(id)arg2;
- (double)roundedValueForScore:(double)arg1;
- (void)cancel;

@end

