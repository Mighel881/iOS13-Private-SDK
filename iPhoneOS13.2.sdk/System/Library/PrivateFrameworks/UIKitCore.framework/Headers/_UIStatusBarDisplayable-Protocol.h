//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIAccessibilityHUDItem, _UIStatusBarStyleAttributes;

@protocol _UIStatusBarDisplayable <NSObject>

@optional
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly, nonatomic) BOOL prefersBaselineAlignment;
@property(readonly, nonatomic) BOOL wantsCrossfade;
- (void)applyStyleAttributes:(_UIStatusBarStyleAttributes *)arg1;
@end
