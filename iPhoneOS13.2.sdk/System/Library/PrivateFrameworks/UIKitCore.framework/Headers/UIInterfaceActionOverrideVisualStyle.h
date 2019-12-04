//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionVisualStyle.h>

@class UIInterfaceActionHighlightAttributes, UIInterfaceActionSeparatorAttributes;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle
{
    _Bool _alignActionSeparatorLeadingEdgeWithContent;
    double _customSelectionHighlightContinuousCornerRadius;
    UIInterfaceActionSeparatorAttributes *_customSeparatorAttributes;
    UIInterfaceActionHighlightAttributes *_customActionHighlightAttributes;
    id /* block */ _customTitleLabelFontProviderForViewState;
}

+ (id)styleOverride;
@property(copy, nonatomic) id /* block */ customTitleLabelFontProviderForViewState; // @synthesize customTitleLabelFontProviderForViewState=_customTitleLabelFontProviderForViewState;
@property(retain, nonatomic) UIInterfaceActionHighlightAttributes *customActionHighlightAttributes; // @synthesize customActionHighlightAttributes=_customActionHighlightAttributes;
@property(retain, nonatomic) UIInterfaceActionSeparatorAttributes *customSeparatorAttributes; // @synthesize customSeparatorAttributes=_customSeparatorAttributes;
@property(nonatomic) _Bool alignActionSeparatorLeadingEdgeWithContent; // @synthesize alignActionSeparatorLeadingEdgeWithContent=_alignActionSeparatorLeadingEdgeWithContent;
@property double customSelectionHighlightContinuousCornerRadius; // @synthesize customSelectionHighlightContinuousCornerRadius=_customSelectionHighlightContinuousCornerRadius;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
