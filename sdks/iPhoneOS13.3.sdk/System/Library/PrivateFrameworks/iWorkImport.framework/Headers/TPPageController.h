//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TPPageLayoutInfoProvider-Protocol.h>
#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>
#import <iWorkImport/TSWPLayoutOwner-Protocol.h>

@class NSArray, NSMutableArray, TPDocumentRoot, TPFootnoteLayoutController, TPPageControllerCanvasDelegate, TPPaginationState, TPTextFlowLayoutController, TPTextWrapController, TSUMutablePointerSet, TSWPLayoutManager, TSWPLayoutMetricsCache;
@protocol TPPageControllerDelegate, TPPageControllerObserver;

__attribute__((visibility("hidden")))
@interface TPPageController : NSObject <TPPageLayoutInfoProvider, TSKChangeSourceObserver, TSWPLayoutOwner>
{
    _Atomic int _isScrolling;
    _Atomic int _isZooming;
    BOOL _isObservingNotifications;
    multimap_41f9c887 _pageLayoutCache;
    TPPaginationState *_paginationState;
    TPPageControllerCanvasDelegate *_offscreenSearchDelegate;
    TPFootnoteLayoutController *_footnoteLayoutController;
    BOOL _checkedForBackUp;
    NSMutableArray *_pageGeneratorStack;
    NSUInteger _lastKnownPageCount;
    NSUInteger _completePageCount;
    BOOL _shouldUpdatePageCount;
    BOOL _bodyLayoutInvalidated;
    NSUInteger _didLayOutPageIndex;
    NSUInteger _currentPageBeingLaidOut;
    TSUMutablePointerSet *_layoutObservers;
    TSWPLayoutMetricsCache *_bodyLayoutMetricsCache;
    TPTextFlowLayoutController *_flowController;
    TPTextWrapController *_wrapController;
    BOOL _textLayoutMustIncludeAdornments;
    double _horizontalGapBetweenPages;
    double _verticalGapBetweenPages;
    NSUInteger _pageHeightCount;
    BOOL _layoutInvalidationPending;
    NSMutableArray *_sectionHints;
    id <TPPageControllerDelegate> _delegate;
    id <TPPageControllerObserver> _observer;
    TSWPLayoutManager *_bodyLayoutManager;
}

@property(readonly, nonatomic) TSWPLayoutManager *bodyLayoutManager; // @synthesize bodyLayoutManager=_bodyLayoutManager;
@property(nonatomic) __weak id <TPPageControllerObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) __weak id <TPPageControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *sectionHints; // @synthesize sectionHints=_sectionHints;
@property(readonly, nonatomic) NSUInteger pageCount; // @synthesize pageCount=_lastKnownPageCount;
@property(nonatomic, getter=textLayoutMustIncludeAdornments) BOOL textLayoutMustIncludeAdornments; // @synthesize textLayoutMustIncludeAdornments=_textLayoutMustIncludeAdornments;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (BOOL)p_layOutNextPageOnceWithOffscreenLayoutController;
- (void)backgroundPaginationDidEnd;
- (BOOL)performBackgroundPagination;
- (BOOL)backgroundPaginationWillBegin;
- (void)p_notifyObserversDidInvalidate;
- (void)p_notifyObserversDidLayoutWhileSyncing:(BOOL)arg1;
- (void)p_notifyObserversWillLayoutWhileSyncing:(BOOL)arg1;
- (NSUInteger)p_textPageIndexPrecedingPageIndex:(NSUInteger)arg1;
- (NSUInteger)p_lastValidTextPageIndex;
- (id)p_lastValidTextPageHint:(out NSUInteger )arg1;
- (id)p_lastValidPageHint;
- (id)p_textPageHintFollowingPageIndexPath:(id)arg1;
- (id)p_textPageHintPrecedingPageIndexPath:(id)arg1;
- (id)p_pageHintPrecedingPageIndexPath:(id)arg1;
- (id)p_pageHintForPageIndexPath:(id)arg1;
- (id)p_sectionHintForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3;
- (id)p_pageHintForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3;
- (void)p_updatePageCount;
- (BOOL)p_didLayOut;
- (void)p_advanceSectionIndex;
- (void)p_removeFinishedPageGenerators;
- (void)p_syncFromNextPageWithDirtyRanges:(id)arg1 pageTextRange:(const NSRange )arg2;
- (void)p_resetPageGenerators;
- (void)p_preparePageHintForNextPage;
- (void)p_prepareSectionHintForNextPage;
- (void)p_preparePaginationStateForNextPage;
- (void)p_updateNonTextHintAtPageIndexPath:(id)arg1 pageLayout:(id)arg2;
- (void)p_updateTextHintAtPageIndexPath:(id)arg1 withTarget:(id)arg2;
- (void)p_removeDeletedFootnotesOnPageLayout:(id)arg1;
- (void)i_forceRestartPaginationForServer;
- (void)p_forceRestartPaginationAndResetMetricsCache:(BOOL)arg1;
- (void)p_performPaginationResetAndMetricsReset:(BOOL)arg1;
- (void)p_layOutFootnotesIntoPageLayout:(id)arg1;
- (void)p_layOutTextIntoPageLayout:(id)arg1 didSync:(out BOOL )arg2 initialFootnoteIndex:(out NSUInteger )arg3;
- (void)p_layOutIntoPageLayout:(id)arg1 outDidSync:(out BOOL )arg2;
- (void)p_layOutNextPageForLayoutController:(id)arg1 dirtyRange:(id)arg2;
- (void)p_paginateThroughPageIndex:(NSUInteger)arg1 forLayoutController:(id)arg2 clearOffscreenInfos:(BOOL)arg3;
- (void)p_checkForBackUp;
- (id)p_pageInfosForFlow:(id)arg1 withSelection:(id)arg2;
- (id)p_pageIndicesForFlow:(id)arg1 withSelection:(id)arg2 forcePagination:(BOOL)arg3;
- (id)p_pageInfosForBodySelection:(id)arg1;
- (void)p_processWidowsAndInflationForLayoutController:(id)arg1;
- (NSUInteger)p_pageIndexForFootnoteIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2 searchAfterPaginationPoint:(BOOL)arg3;
- (NSUInteger)p_pageHintIndexForAnchoredCharIndex:(NSUInteger)arg1;
- (NSUInteger)p_pageHintIndexForCharIndex:(NSUInteger)arg1;
- (NSUInteger)p_pageIndexForAnchoredCharIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2 searchAfterPaginationPoint:(BOOL)arg3;
- (BOOL)p_couldBeFirstPageIndex:(NSUInteger)arg1 forPartitionedAttachmentCharIndex:(NSUInteger)arg2;
- (NSUInteger)p_pageIndexContainingIndex:(NSUInteger)arg1 ofType:(int)arg2;
- (NSRange)p_footnoteLayoutRangeForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3;
- (NSRange)p_anchoredRangeForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3;
- (NSRange)p_bodyRangeForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3;
- (NSUInteger)p_pageIndexForCharIndex:(NSUInteger)arg1 includeEmptyPages:(BOOL)arg2 caretAffinity:(int)arg3 forcePagination:(BOOL)arg4 searchAfterPaginationPoint:(BOOL)arg5;
- (id)p_pageInfoForPageAtIndex:(NSUInteger)arg1;
- (void)p_withPageLayoutAtIndex:(NSUInteger)arg1 preferredLayoutController:(id)arg2 executeBlock:(id /* CDUnknownBlockType */)arg3;
- (id)p_cachedPageLayoutForPageIndex:(NSUInteger)arg1 preferredLayoutController:(id)arg2;
- (void)p_removePageLayoutFromCache:(id)arg1;
- (void)p_insertPageLayoutIntoCache:(id)arg1;
- (NSUInteger)p_lastValidFootnoteIndex;
- (NSUInteger)p_lastValidCharIndex;
- (BOOL)p_isBodyLayoutComplete;
- (BOOL)p_isPaginationComplete;
- (void)p_destroyBodyLayoutState;
- (void)p_invalidatePageIndex:(NSUInteger)arg1;
- (void)p_interruptBackgroundPagination;
- (void)p_setNeedsLayoutOnPageIndex:(NSUInteger)arg1;
- (void)p_setNeedsLayoutFromSectionIndexToEnd:(NSUInteger)arg1;
- (void)p_hasBodyChanged:(id)arg1;
- (NSUInteger)p_firstPageColumn;
- (NSUInteger)p_backupPageIndexForCharIndex:(NSUInteger)arg1;
- (NSRange)p_pageRangeAffectedByInfo:(id)arg1;
- (void)p_rebuildPageLayoutsContainingDrawableUUIDs:(id)arg1;
- (void)p_performWithCachedPageLayouts:(id /* CDUnknownBlockType */)arg1;
- (id)p_paginationState;
- (void)i_rebuildCachedLayoutChildrenFromStartPage:(NSUInteger)arg1 toEndPage:(NSUInteger)arg2 setNeedsLayout:(BOOL)arg3;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (NSUInteger)adjacentPageIndexForPageIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) double verticalPageSeparation;
@property(readonly, nonatomic) double horizontalPageSeparation;
- (void)invalidateAllPageLayoutsSizeAndPosition;
- (CGSize)canvasSizeToFitAllPagesForPageViewState:(long long)arg1;
- (NSUInteger)pageHeightCountForPageViewState:(long long)arg1;
- (NSUInteger)calculatePageIndexFromCanvasPoint:(CGPoint)arg1;
- (NSUInteger)pageIndexFromCanvasPoint:(CGPoint)arg1;
- (CGRect)pageRectForPageIndex:(NSUInteger)arg1 allowAfterPaginationPoint:(BOOL)arg2;
- (CGPoint)pageOriginForPageIndex:(NSUInteger)arg1 allowAfterPaginationPoint:(BOOL)arg2;
- (id)metricsCacheForStorage:(id)arg1;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(NSUInteger)arg3;
- (id)textWrapper;
- (void)p_processBodyLayoutInvalidation;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (BOOL)caresAboutStorageChanges;
- (void)removeLayoutObserver:(id)arg1;
- (void)addLayoutObserver:(id)arg1;
- (BOOL)okToAnchorDrawables:(id)arg1 toPageIndex:(NSUInteger)arg2;
- (BOOL)okToAnchorDrawable:(id)arg1 toPageIndex:(NSUInteger)arg2;
- (BOOL)p_canAnchorDrawable:(id)arg1 toPageLayout:(id)arg2;
- (id)footnoteLayoutController;
@property(readonly, nonatomic) NSUInteger lastLaidOutDocumentPageIndex;
@property(readonly, nonatomic) NSUInteger firstPageIndexNeedingLayout;
- (BOOL)isPaginationInProgress;
- (BOOL)isPaginationComplete;
- (BOOL)isPaginationCompleteThroughPageIndex:(NSUInteger)arg1;
- (BOOL)isPaginationCompleteForSelection:(id)arg1 inFlow:(id)arg2;
- (double)footerHeight;
- (double)headerHeight;
- (void)withPageLayoutAtIndex:(NSUInteger)arg1 preferredLayoutController:(id)arg2 executeBlock:(id /* CDUnknownBlockType */)arg3;
- (void)withPageLayoutAtIndex:(NSUInteger)arg1 executeBlock:(id /* CDUnknownBlockType */)arg2;
- (id)pageIndicesForPartitionableAttachmentAtBodyCharIndex:(NSUInteger)arg1 selectionPath:(id)arg2 forcePagination:(BOOL)arg3;
@property(readonly, nonatomic) NSArray *numberOfPagesInEachSection;
- (id)pageInfoForPageIndex:(NSUInteger)arg1;
- (BOOL)pageIndexIsFirstPageOfSection:(NSUInteger)arg1;
- (NSRange)sectionPageRangeForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2 outEndIsValid:(BOOL )arg3;
- (NSUInteger)sectionPageIndexForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (NSRange)sectionBodyRangeForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (NSUInteger)sectionIndexForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (NSRange)documentPageRangeOfSectionIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (NSUInteger)pageIndexForFootnoteIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (NSUInteger)pageIndexForAnchoredAttachment:(id)arg1 forcePagination:(BOOL)arg2;
- (NSUInteger)pageIndexForAnchoredCharIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (NSUInteger)pageIndexForCharIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (BOOL)pageAtIndexHasBody:(NSUInteger)arg1;
- (BOOL)pageEndsWithPaginatedAttachment:(NSUInteger)arg1;
- (BOOL)pageBeginsWithPaginatedAttachment:(NSUInteger)arg1;
- (NSRange)footnoteLayoutRangeForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (id)anchoredDrawablesOnPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (NSRange)anchoredRangeForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (NSRange)bodyRangeForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2;
- (NSRange)validPageRangeForSelection:(id)arg1;
- (NSRange)p_pageRangeForSelection:(id)arg1 includingEmptyPages:(BOOL)arg2 outEndIsValid:(BOOL )arg3 forcePagination:(BOOL)arg4;
- (NSRange)pageRangeForSelection:(id)arg1 includingEmptyPages:(BOOL)arg2 outEndIsValid:(BOOL )arg3;
- (void)canvasDidValidateLayouts:(id)arg1;
- (void)paginateThroughPageIndex:(NSUInteger)arg1 forLayoutController:(id)arg2;
- (void)paginateThroughPageIndex:(NSUInteger)arg1;
- (CGSize)pageSize;
- (void)accquireLockAndPerformAction:(id /* CDUnknownBlockType */)arg1;
- (void)saveIntoLayoutState:(id)arg1;
- (void)restoreFromLayoutState:(id)arg1;
- (void)dealloc;
- (void)teardown;
@property(readonly, nonatomic) __weak TPDocumentRoot *documentRoot;
- (id)initWithDelegate:(id)arg1;
- (NSRange)p_rangeOfContinuousSectionsAtPageIndex:(NSUInteger)arg1 startPage:(NSUInteger )arg2;
- (id)p_pageMasterForPageIndex:(NSUInteger)arg1 inSection:(id)arg2 sectionHint:(id)arg3;
- (id)p_sectionAtSectionIndex:(NSUInteger)arg1;
- (BOOL)isSectionInfo:(id)arg1 onPage:(NSUInteger)arg2;
- (NSUInteger)contentFlagsForPageIndex:(NSUInteger)arg1;
- (id)displayPageNumberForPageIndex:(NSUInteger)arg1;
- (id)displayPageNumberForCharIndex:(NSUInteger)arg1;
- (id)pageNumberFormatForSectionOnPageIndex:(NSUInteger)arg1;
- (NSUInteger)pageCountForPageIndex:(NSUInteger)arg1;
- (NSUInteger)pageNumberForPageIndex:(NSUInteger)arg1;
- (id)masterDrawableProviderForPageIndex:(NSUInteger)arg1;
- (BOOL)shouldHeaderFooterBeVisibleForPageIndex:(NSUInteger)arg1;
- (id)headerFooterProviderForPageIndex:(NSUInteger)arg1;
- (id)backgroundFillForPageIndex:(NSUInteger)arg1;
- (BOOL)canProvideNumberingInfoForPageIndex:(NSUInteger)arg1;
- (BOOL)canProvideInfoForPageIndex:(NSUInteger)arg1;
- (id)i_flowLayoutController;
- (multimap_41f9c887 )i_pageCache;
- (void)i_setNeedsDynamicLayoutForLayoutController:(id)arg1 onPageIndex:(NSUInteger)arg2;
- (void)i_unregisterPageLayout:(id)arg1;
- (void)i_registerPageLayout:(id)arg1;
- (void)i_invalidateFlows:(id)arg1 startingPage:(id)arg2;
- (void)i_invalidatePageIndex:(NSUInteger)arg1;
- (id)i_textPageHintPrecedingPageIndex:(inout NSUInteger )arg1;
- (void)i_inflateTextFlowsOnPage:(id)arg1;
- (void)i_inflateFootnotesInFootnoteContainer:(id)arg1;
- (void)i_inflateColumnsInBodyLayout:(id)arg1;
- (id)i_firstChildHintAfterPageIndex:(NSUInteger)arg1;
- (id)i_columnAfterPageIndex:(NSUInteger)arg1;
- (id)i_topicHintsAfterPageIndex:(NSUInteger)arg1;
- (id)i_topicHintsPriorToPageIndex:(NSUInteger)arg1;
- (id)i_columnPriorToPageIndex:(NSUInteger)arg1;
- (void)i_trimPageAtIndex:(NSUInteger)arg1 toCharIndex:(NSUInteger)arg2 removeFootnoteReferenceCount:(NSUInteger)arg3 removeAutoNumberFootnoteCount:(NSUInteger)arg4;
- (id)i_pageIndexPathForPageIndex:(NSUInteger)arg1 forcePagination:(BOOL)arg2 allowAfterPaginationPoint:(BOOL)arg3;
- (id)i_pageHintForPageIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) TPTextWrapController *d_wrapController;
- (void)d_timePaginationResettingMetrics:(BOOL)arg1;

@end

