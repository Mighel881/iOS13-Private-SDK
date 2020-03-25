//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <NanoTimeKitCompanion/NTKControl-Protocol.h>
#import <NanoTimeKitCompanion/NTKDateComplicationDisplay-Protocol.h>

@class CLKDevice, CLKFont, NSString, UIColor, UILabel, UIView;
@protocol NTKComplicationDisplayObserver;

@interface NTKDateComplicationLabel : UIControl <NTKDateComplicationDisplay, NTKControl>
{
    BOOL _frozen;
    NSString *_currentDateText;
    UILabel *_internalLabel;
    UIView *_highlightView;
    CGSize _cachedSize;
    _NSRange _dayTextRange;
    BOOL _cachedSizeIsValid;
    UIColor *_textColor;
    UIColor *_computedTextColor;
    BOOL canUseCurvedText;
    BOOL _usesLegibility;
    BOOL _legibilityHidden;
    id <NTKComplicationDisplayObserver> displayObserver;
    long long _sizeStyle;
    long long _accentType;
    CLKDevice *_device;
    CLKFont *_font;
    UIColor *_accentColor;
    NSUInteger _overrideDateStyle;
    UIEdgeInsets _touchEdgeInsets;
}

@property(nonatomic) UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
@property(nonatomic) NSUInteger overrideDateStyle; // @synthesize overrideDateStyle=_overrideDateStyle;
@property(nonatomic) BOOL legibilityHidden; // @synthesize legibilityHidden=_legibilityHidden;
@property(nonatomic) BOOL usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) CLKFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long accentType; // @synthesize accentType=_accentType;
@property(readonly, nonatomic) long long sizeStyle; // @synthesize sizeStyle=_sizeStyle;
@property(nonatomic) BOOL canUseCurvedText; // @synthesize canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
// - (void).cxx_destruct;
- (double)_legibtilityShadowRadius;
- (CGSize)_highlightInset;
- (double)_cornerRadius;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)shouldCancelTouchesInScrollview;
- (void)_invalidateInternalLabelSize;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)_setFont:(id)arg1;
- (void)_applyAccentColorAttributes;
- (void)_setText:(id)arg1;
@property(nonatomic, setter=_setLastLineBaselineFrameOriginY:) double _lastLineBaselineFrameOriginY;
@property(readonly, nonatomic) double _lastLineBaseline;
@property(nonatomic, setter=_setFirstLineBaselineFrameOriginY:) double _firstLineBaselineFrameOriginY;
- (double)_firstLineBaselineOffsetFromBoundsTop;
@property(retain, nonatomic) UIColor *textColor;
- (void)_computeTextColor;
- (void)_updateTextColor;
- (id)_attributedStringAccentingNumbersInString:(id)arg1;
- (void)setDateComplicationText:(id)arg1 withDayRange:(_NSRange)arg2 forDateStyle:(NSUInteger)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSizeStyle:(long long)arg1 accentType:(long long)arg2 forDevice:(id)arg3;

@end
