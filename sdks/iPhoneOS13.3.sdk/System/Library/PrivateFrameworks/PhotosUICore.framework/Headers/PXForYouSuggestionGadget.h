//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXForYouSuggestionGadgetContentView, PXGadgetSpec, PXRegionOfInterest, PXUIMediaProvider, UIImage;
@protocol PXDisplayAsset, PXDisplaySuggestion, PXForYouSuggestionGadgetDelegate;

@interface PXForYouSuggestionGadget : NSObject <PXDiagnosticsEnvironment, PXGadget>
{
    BOOL _contentHidden;
    BOOL _blursDegradedContent;
    BOOL _contentViewVisible;
    unsigned short _suggestionType;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXForYouSuggestionGadgetDelegate> _delegate;
    id <PXDisplaySuggestion> _suggestion;
    PXUIMediaProvider *_mediaProvider;
    id <PXDisplayAsset> _keyAsset;
    PXForYouSuggestionGadgetContentView *_contentView;
    NSString *_title;
    NSString *_subtitle;
    CGSize _cachedHeightForWidth;
    CGRect _visibleContentRect;
}

+ (id)fetchQueue;
+ (void)preloadResources;
@property(nonatomic) unsigned short suggestionType; // @synthesize suggestionType=_suggestionType;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL contentViewVisible; // @synthesize contentViewVisible=_contentViewVisible;
@property(retain, nonatomic) PXForYouSuggestionGadgetContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) CGSize cachedHeightForWidth; // @synthesize cachedHeightForWidth=_cachedHeightForWidth;
@property(retain, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(retain, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(nonatomic) BOOL blursDegradedContent; // @synthesize blursDegradedContent=_blursDegradedContent;
@property(nonatomic, getter=isContentHidden) BOOL contentHidden; // @synthesize contentHidden=_contentHidden;
@property(retain, nonatomic) id <PXDisplaySuggestion> suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property(nonatomic) __weak id <PXForYouSuggestionGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
// - (void).cxx_destruct;
- (id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)_updateKeyAsset;
- (void)_markSuggestionAsDeclined;
- (void)_markSuggestionAsActive;
- (void)_handleDismiss;
- (void)_handleContentViewTap:(id)arg1;
- (id)_contentViewIfLoaded;
- (void)_updateTitleAndSubtitle;
- (void)_updateContentViewMode;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (NSObject )targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (NSObject )previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(NSObject )arg2;
- (id)debugDictionary;
- (id)debugURLsForDiagnostics;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)gadgetControllerHasAppeared;
- (void)contentHasBeenSeen;
- (id)uniqueGadgetIdentifier;
@property(readonly, nonatomic) BOOL hasContentToDisplay;
@property(readonly, nonatomic) NSUInteger gadgetType;
@property(readonly, nonatomic) UIImage *currentImage;
@property(readonly, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithSuggestion:(id)arg1;
- (id)init;

@end

