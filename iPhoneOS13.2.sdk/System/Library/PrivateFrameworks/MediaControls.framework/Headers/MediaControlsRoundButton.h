//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class CCUICAPackageView, MTVisualStylingProvider, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MediaControlsRoundButton : UIControl <MTVisualStylingProviderObservingPrivate>
{
    _Bool _labelHidden;
    NSString *_title;
    NSString *_packageName;
    NSString *_glyphState;
    MTVisualStylingProvider *_visualStylingProvider;
    long long _axis;
    CCUICAPackageView *_packageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CCUICAPackageView *packageView; // @synthesize packageView=_packageView;
@property(nonatomic, getter=isLabelHidden) _Bool labelHidden; // @synthesize labelHidden=_labelHidden;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_contentSizeCategoryDidChange;
- (void)_updatePackageColors;
- (void)_updateLabelVisualStyling;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect imageFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
