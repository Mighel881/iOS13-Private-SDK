//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKPaletteAdditionalOptionsViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteColorPickerViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteHostViewDelegate-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPalettePopoverPresenting-Protocol.h>
#import <PencilKit/PKPaletteToolPickerViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteToolPreviewDelegate-Protocol.h>
#import <PencilKit/PKPaletteUndoRedoViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>
#import <PencilKit/PKPaletteViewStateObservable-Protocol.h>

@class MTMaterialView, NSLayoutConstraint, NSUndoManager, PKInk, PKPaletteContainerView, PKPaletteContentView, PKPaletteToolPreview, PKPaletteUndoRedoView, UIPencilInteraction, UIViewController;
@protocol PKPaletteViewAnnotationDelegate, PKPaletteViewDelegate, PKPaletteViewInternalDelegate;

@interface PKPaletteView : UIView <PKPaletteUndoRedoViewDelegate, PKPaletteToolPickerViewDelegate, PKPaletteColorPickerViewDelegate, PKPaletteAdditionalOptionsViewDelegate, PKPaletteToolPreviewDelegate, PKPalettePopoverPresenting, PKPaletteViewStateObservable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteHostViewDelegate, UIPencilInteractionDelegate>
{
    NSUndoManager *_undoManager;
    BOOL _autoHideEnabled;
    BOOL _paletteIsCompactSize;
    BOOL _paletteHasLayoutSubviews;
    BOOL _wantsUndoRedoButtonsInCompactSize;
    BOOL _isEditingOpacity;
    BOOL _supportsOpacityEditing;
    BOOL _wantsClearBackgroundColorInCompactSize;
    BOOL _toolPreviewMinimized;
    BOOL _settingSelectedColor;
    NSUInteger _autoHideCorner;
    double _scalingFactor;
    UIViewController *_presentationController;
    id <PKPaletteViewDelegate> _delegate;
    long long _palettePosition;
    long long _colorUserInterfaceStyle;
    id <PKPaletteViewInternalDelegate> _internalDelegate;
    PKPaletteUndoRedoView *_undoRedoCompactView;
    UIView *_clippingView;
    MTMaterialView *_backgroundView;
    PKPaletteContainerView *_containerView;
    PKPaletteContentView *_contentView;
    PKPaletteToolPreview *_toolPreview;
    UIView *_bottomThinSeparator;
    NSUInteger _lastEdgeLocation;
    NSLayoutConstraint *_toolPreviewCenterXConstraint;
    NSLayoutConstraint *_toolPreviewCenterYConstraint;
    NSLayoutConstraint *_toolPreviewWidthConstraint;
    NSLayoutConstraint *_toolPreviewHeightConstraint;
    NSLayoutConstraint *_paletteContainerWidthConstraint;
    NSLayoutConstraint *_paletteContainerHeightConstraint;
    NSLayoutConstraint *_paletteContainerCenterXConstraint;
    NSLayoutConstraint *_paletteContainerCenterYConstraint;
    NSLayoutConstraint *_paletteContainerCompactTopConstraint;
    NSLayoutConstraint *_paletteContainerCompactBottomConstraint;
    NSLayoutConstraint *_paletteContainerCompactLeftConstraint;
    NSLayoutConstraint *_paletteContainerCompactRightConstraint;
    NSUInteger _lastPaletteEdgePositionWhileDragging;
    MTMaterialView *_backgroundMaterialView;
    id <PKPaletteViewAnnotationDelegate> _annotationDelegate;
    UIView *_opacityEditingView;
    UIPencilInteraction *_pencilInteraction;
    UIViewController *_popoverPresentingController;
    UIEdgeInsets _palettePopoverLayoutSceneMargins;
}

+ (id)makeBackgroundView;
@property(nonatomic, getter=isSettingSelectedColor) BOOL settingSelectedColor; // @synthesize settingSelectedColor=_settingSelectedColor;
@property(retain, nonatomic) UIViewController *popoverPresentingController; // @synthesize popoverPresentingController=_popoverPresentingController;
@property(nonatomic, getter=isToolPreviewMinimized) BOOL toolPreviewMinimized; // @synthesize toolPreviewMinimized=_toolPreviewMinimized;
@property(readonly, nonatomic) UIPencilInteraction *pencilInteraction; // @synthesize pencilInteraction=_pencilInteraction;
@property(nonatomic) UIEdgeInsets palettePopoverLayoutSceneMargins; // @synthesize palettePopoverLayoutSceneMargins=_palettePopoverLayoutSceneMargins;
@property(nonatomic) BOOL wantsClearBackgroundColorInCompactSize; // @synthesize wantsClearBackgroundColorInCompactSize=_wantsClearBackgroundColorInCompactSize;
@property(readonly, nonatomic) UIView *opacityEditingView; // @synthesize opacityEditingView=_opacityEditingView;
@property(nonatomic) BOOL supportsOpacityEditing; // @synthesize supportsOpacityEditing=_supportsOpacityEditing;
@property(nonatomic) __weak id <PKPaletteViewAnnotationDelegate> annotationDelegate; // @synthesize annotationDelegate=_annotationDelegate;
@property(retain, nonatomic) MTMaterialView *backgroundMaterialView; // @synthesize backgroundMaterialView=_backgroundMaterialView;
@property(nonatomic) NSUInteger lastPaletteEdgePositionWhileDragging; // @synthesize lastPaletteEdgePositionWhileDragging=_lastPaletteEdgePositionWhileDragging;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCompactRightConstraint; // @synthesize paletteContainerCompactRightConstraint=_paletteContainerCompactRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCompactLeftConstraint; // @synthesize paletteContainerCompactLeftConstraint=_paletteContainerCompactLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCompactBottomConstraint; // @synthesize paletteContainerCompactBottomConstraint=_paletteContainerCompactBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCompactTopConstraint; // @synthesize paletteContainerCompactTopConstraint=_paletteContainerCompactTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCenterYConstraint; // @synthesize paletteContainerCenterYConstraint=_paletteContainerCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerCenterXConstraint; // @synthesize paletteContainerCenterXConstraint=_paletteContainerCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerHeightConstraint; // @synthesize paletteContainerHeightConstraint=_paletteContainerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteContainerWidthConstraint; // @synthesize paletteContainerWidthConstraint=_paletteContainerWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPreviewHeightConstraint; // @synthesize toolPreviewHeightConstraint=_toolPreviewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPreviewWidthConstraint; // @synthesize toolPreviewWidthConstraint=_toolPreviewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPreviewCenterYConstraint; // @synthesize toolPreviewCenterYConstraint=_toolPreviewCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPreviewCenterXConstraint; // @synthesize toolPreviewCenterXConstraint=_toolPreviewCenterXConstraint;
@property(nonatomic) NSUInteger lastEdgeLocation; // @synthesize lastEdgeLocation=_lastEdgeLocation;
@property(nonatomic) BOOL isEditingOpacity; // @synthesize isEditingOpacity=_isEditingOpacity;
@property(nonatomic) BOOL wantsUndoRedoButtonsInCompactSize; // @synthesize wantsUndoRedoButtonsInCompactSize=_wantsUndoRedoButtonsInCompactSize;
@property(nonatomic) BOOL paletteHasLayoutSubviews; // @synthesize paletteHasLayoutSubviews=_paletteHasLayoutSubviews;
@property(nonatomic) BOOL paletteIsCompactSize; // @synthesize paletteIsCompactSize=_paletteIsCompactSize;
@property(retain, nonatomic) UIView *bottomThinSeparator; // @synthesize bottomThinSeparator=_bottomThinSeparator;
@property(retain, nonatomic) PKPaletteToolPreview *toolPreview; // @synthesize toolPreview=_toolPreview;
@property(retain, nonatomic) PKPaletteContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) PKPaletteContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(retain, nonatomic) PKPaletteUndoRedoView *undoRedoCompactView; // @synthesize undoRedoCompactView=_undoRedoCompactView;
@property(nonatomic) __weak id <PKPaletteViewInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) long long colorUserInterfaceStyle; // @synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle;
@property(nonatomic) long long palettePosition; // @synthesize palettePosition=_palettePosition;
@property(nonatomic) __weak id <PKPaletteViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentationController; // @synthesize presentationController=_presentationController;
@property(readonly, nonatomic) NSUInteger autoHideCorner; // @synthesize autoHideCorner=_autoHideCorner;
// - (void).cxx_destruct;
@property(nonatomic, getter=isBackgroundMaterialUpdatingPaused) BOOL backgroundMaterialUpdatingPaused;
- (void)setToolPreviewMinimized:(BOOL)arg1 animated:(BOOL)arg2;
- (id)toolPreviewView;
- (id)palettePopoverPresentingController;
@property(readonly, nonatomic) UIView *contextualEditingView;
@property(nonatomic) long long contextEditingMode;
- (CGRect)plusButtonFrame;
- (NSUInteger)edgeLocationToDockFromCorner:(NSUInteger)arg1;
- (void)dismissPalettePopoverWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)endOpacityEditing;
- (void)startOpacityEditing;
- (NSUInteger)_nextAutoHideCorner;
- (void)_notifyPaletteDidChangePosition;
- (void)didEndAppearanceAnimation;
- (void)willStartAppearanceAnimation;
- (void)configureForDockedAtEdge:(NSUInteger)arg1;
- (void)configureForDockedAtCorner;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)pencilInteractionDidTap:(id)arg1;
- (void)textOptionsViewController:(id)arg1 didSelectTextWithType:(long long)arg2;
- (void)shapesViewController:(id)arg1 didSelectShapeWithType:(long long)arg2;
- (id)toolsArray;
- (id)stateDictionary;
- (void)saveOptionsIfNecessary;
- (void)_saveOptions;
- (BOOL)_loadOptions;
- (BOOL)isToolDictionary:(id)arg1 ofTypeIdentifier:(id)arg2;
- (void)additionalOptionsView:(id)arg1 didToggleAutoHideOption:(BOOL)arg2;
- (void)additionalOptionsViewDidSelectPlusButton:(id)arg1;
- (void)toolPreviewDidChangeToolColor:(id)arg1;
- (void)hostView:(id)arg1 didDockPaletteToPosition:(long long)arg2;
- (void)hostView:(id)arg1 willDockPaletteToPosition:(long long)arg2 prepareForExpansion:(BOOL)arg3;
- (void)_centerPaletteContainerSubviewToCurrentlySelectedToolForEdge:(NSUInteger)arg1;
- (void)_willDockPaletteToCorner:(NSUInteger)arg1;
- (void)_willDockPaletteToEdge:(NSUInteger)arg1 prepareForExpansion:(BOOL)arg2;
- (BOOL)colorPickerShouldDisplayColorSelection:(id)arg1;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (void)toolPickerDidToggleRulerTool:(id)arg1;
- (void)toolPickerDidChangeSelectedToolInk:(id)arg1;
- (void)undoRedoViewDidTapRedo:(id)arg1;
- (void)undoRedoViewDidTapUndo:(id)arg1;
- (void)_updateContainerSizeConstraintsForEdge:(NSUInteger)arg1;
- (void)_updateToolPreviewScalingAnimated:(BOOL)arg1;
- (void)_updateToolPreviewForEdge:(NSUInteger)arg1;
- (void)_updateToolPreviewVisibility;
- (void)_updateToolPreview;
- (void)_updateColorPickerSelectedColor;
- (void)setSelectedAnnotationType:(long long)arg1;
- (void)_setSelectedColor:(id)arg1;
@property(nonatomic) BOOL isRulerActive;
@property(retain, nonatomic) PKInk *selectedToolInk;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_releaseUndoManager;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;
- (void)_updateUIForAnnotationSupportIfNeeded;
- (void)updateUndoRedo;
@property(readonly, nonatomic, getter=isAnnotationSupportEnabled) BOOL annotationSupportEnabled;
- (id)_clippingViewBackgroundColor;
- (void)layoutSubviews;
@property(readonly, nonatomic) BOOL useCompactSize;
- (id)palettePopoverSourceView;
- (CGRect)palettePopoverSourceRect;
- (BOOL)wantsCustomPalettePopoverPresentationSource;
- (UIEdgeInsets)palettePopoverLayoutMargins;
- (NSUInteger)palettePopoverPermittedArrowDirections;
- (id)palettePopoverPassthroughViews;
- (BOOL)shouldPalettePresentPopover;
- (BOOL)isPalettePresentingPopover;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) double paletteContentAlpha;
- (void)_setCornerRadius:(double)arg1;
- (CGSize)_paletteSizeForEdge:(NSUInteger)arg1;
- (void)_installUndoRedoButtonsViewAtTop;
- (void)_installToolPreview;
- (void)_installBackgroundView;
- (void)_installContentView;
- (void)_installClippingView;
- (void)dealloc;
- (void)safeAreaInsetsDidChange;
@property(readonly, nonatomic, getter=isAutoHideEnabled) BOOL autoHideEnabled;
- (id)initWithInternalDelegate:(id)arg1;

@end
