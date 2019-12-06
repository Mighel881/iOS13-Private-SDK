//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIShadowView.h>

__attribute__((visibility("hidden")))
@interface _UIRoundedRectShadowView : _UIShadowView
{
    UIEdgeInsets _shadowOutsets;
    double _maskCornerRadius;
}

+ (UIEdgeInsets)_expansionInsetForShadowImage;
+ (BOOL)_shouldCutoutShadow;
@property(readonly, nonatomic) double maskCornerRadius; // @synthesize maskCornerRadius=_maskCornerRadius;
- (void)_loadImageIfNecessary;
- (void)_updateShadowOutsetsIfNecessary;
- (void)layoutSubviews;
- (CGRect)frameWithContentWithFrame:(CGRect)arg1;
- (id)initWithCornerRadius:(double)arg1;

@end
