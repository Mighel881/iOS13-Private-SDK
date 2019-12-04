//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>

@class NSString, PXExploreLayoutMetrics, PXExploreParsingState;

@interface PXExploreLayoutGenerator : PXLayoutGenerator <PXGDiagnosticsProvider>
{
    long long _count;
    long long _capacity;
    struct {
        long long _field1;
        unsigned long long _field2;
        double _field3;
        double _field4;
    } *_inputItemInfos;
    struct _PXLayoutGeometry *_outputGeometries;
    _Bool _isPrepared;
    struct CGPoint _origin;
    long long _row;
    long long _localNumberOfColumns;
    long long _localNumberOfRows;
    struct CGSize _cellSize;
    struct CGSize _intercellSpacing;
    struct CGSize _contentSize;
    struct _PXCornerSpriteIndexes _cornerSpriteIndexes;
    struct CGSize _headerItemSize;
    struct CGSize _minHeroItemsSize;
    PXExploreParsingState *_localState;
    struct CGSize _minimumItemSize;
    struct CGSize _buildingBlockSize;
}

@property(readonly, nonatomic) PXExploreParsingState *localState; // @synthesize localState=_localState;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (struct _PXCornerSpriteIndexes)cornerSpriteIndexes;
- (unsigned long long)attributesForNextItemAtIndex:(long long)arg1;
- (void)getLowestAspectRatio:(double *)arg1 highestAspectRatio:(double *)arg2 forNextItems:(long long)arg3;
- (double)score:(long long)arg1 forNextItemAtIndex:(long long)arg2;
- (_Bool)isAcceptableLargeHeroNextItemAtIndex:(long long)arg1;
- (_Bool)prepareNextItems:(long long)arg1 withLargeHeroIndex:(long long)arg2;
- (long long)indexWithinNextItems:(long long)arg1 having:(long long)arg2 keyIndex:(long long)arg3;
- (void)reorderNextItems:(long long)arg1 usingMapping:(id /* block */)arg2;
- (void)moveNextItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)sortNextItems:(long long)arg1 withItemAtIndex:(long long)arg2 having:(long long)arg3;
- (long long)numberOf:(unsigned long long)arg1 withinNextItems:(long long)arg2;
- (_Bool)nextItems:(long long)arg1 isAny:(unsigned long long)arg2;
- (_Bool)nextItems:(long long)arg1 areAll:(unsigned long long)arg2;
- (_Bool)nextInputItems:(unsigned long long)arg1;
- (void)setBuildingBlockColumnSpan:(long long)arg1 rowSpan:(long long)arg2 withNumberOfColumns:(long long)arg3;
- (long long)preferredRowTypeAfterRowWithType:(long long)arg1;
- (void)endRowWithType:(long long)arg1;
- (void)addLocalItemWithType:(long long)arg1 atColumn:(long long)arg2 row:(long long)arg3 columnSpan:(long long)arg4 rowSpan:(long long)arg5;
- (struct CGSize)_cellSizeForNumberOfColumns:(long long)arg1;
- (void)beginRowWithNumberOfColumns:(long long)arg1;
@property(readonly, nonatomic) long long numberOfRemainingItems;
- (void)_prepareIfNeeded;
- (struct CGRect)presentedRectForItemAtIndex:(long long)arg1;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
@property(readonly, nonatomic) struct CGSize buildingBlockSize; // @synthesize buildingBlockSize=_buildingBlockSize;
@property(readonly, nonatomic) struct CGSize minimumItemSize; // @synthesize minimumItemSize=_minimumItemSize;
@property(readonly, nonatomic) struct CGSize minHeroItemsSize;
@property(readonly, nonatomic) struct CGSize headerItemSize;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (void)invalidate;
- (void)dealloc;
- (id)initWithMetrics:(id)arg1;
- (double)_buildingBlockAspectRatioForNumberOfColumns:(long long)arg1 options:(unsigned long long)arg2;
- (_Bool)_parseSixColumnLayoutWithOptions:(unsigned long long)arg1;
- (_Bool)_parseFourColumnLayoutWithOptions:(unsigned long long)arg1;
- (_Bool)_parseThreeColumnLayoutWithOptions:(unsigned long long)arg1;
- (_Bool)parseMacLayout;
- (_Bool)parsePadLandscapeLayout;
- (_Bool)parsePadPortraitLayout;
- (_Bool)parsePhoneLandscapeLayout;
- (_Bool)parsePhonePortraitLayout;
- (struct CGSize)_estimatedSizeForColumns:(long long)arg1 headerRows:(long long)arg2 averageItemsPerBlock:(double)arg3 averageRowsPerBlock:(double)arg4 withOptions:(unsigned long long)arg5;
- (struct CGSize)_estimatedSizeForSixColumnLayoutWithOptions:(unsigned long long)arg1;
- (struct CGSize)_estimatedSizeForFourColumnLayoutWithOptions:(unsigned long long)arg1;
- (struct CGSize)_estimatedSizeForThreeColumnLayoutWithOptions:(unsigned long long)arg1;
- (struct CGSize)estimatedSizeForPadLandscape;
- (struct CGSize)estimatedSizeForPadPortrait;
- (struct CGSize)estimatedSizeForPhoneLandscape;
- (struct CGSize)estimatedSizeForPhonePortrait;
- (void)_parseSixColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_addThreeItemsToSixColumnRowWithHeroItemType:(long long)arg1 options:(unsigned long long)arg2 rowType:(long long *)arg3;
- (void)_parseSixColumnHeroRowWithNumberOfItems:(long long)arg1 heroItemType:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4;
- (_Bool)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4;
- (_Bool)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 options:(unsigned long long)arg3;
- (long long)numberOfItemsInSixColumnHeroRowForNumberOfRemainingItems:(long long)arg1 rowOptions:(unsigned long long *)arg2;
- (long long)numberOfItemsInSixColumnShortRowForNumberOfRemainingItems:(long long)arg1;
- (_Bool)_isShortRowNextFollowedByLargeHero;
- (_Bool)parseFourColumnGroupWithShortRowFollowedByLargeHero;
- (_Bool)parseThreeColumnGroupWithShortRowFollowedByLargeHero;
- (_Bool)parseThreeColumnGroupWithFiveItems;
- (_Bool)parseThreeColumnGroupWithThreeItemsFollowedByOneItemAllowingLargeHeroAtEnd:(_Bool)arg1;
- (void)_parseFourColumnHeroRowWithType:(long long)arg1 heroItemType:(long long)arg2 numberOfItems:(long long)arg3;
- (long long)numberOfItemsInFourColumnMediumHeroRowForNumberOfRemainingItems:(long long)arg1;
- (void)_parseFourColumnShortRowWithNumberOfItems:(long long)arg1;
- (_Bool)parseFourColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2;
- (_Bool)parseThreeColumnMediumHeroRowWithPano;
- (_Bool)parseThreeColumnShortRowWithPano;
- (void)_addTwoItemsForThreeColumnRowPreferringTallVariant:(_Bool)arg1;
- (void)_parseThreeColumnMediumHeroRowWithNumberOfItems:(long long)arg1;
- (void)_parseThreeColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_parseThreeColumnHeaderRowWithNumberOfItems:(long long)arg1;
- (_Bool)parseThreeColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) PXExploreLayoutMetrics *metrics; // @dynamic metrics;
@property(readonly) Class superclass;

@end
