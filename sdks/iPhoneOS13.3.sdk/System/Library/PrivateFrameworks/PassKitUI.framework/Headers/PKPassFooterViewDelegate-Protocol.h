//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPassFooterView;

@protocol PKPassFooterViewDelegate <NSObject>
- (NSUInteger)suppressedContentForPassFooter:(PKPassFooterView *)arg1;
- (BOOL)isPassFooterViewInGroup:(PKPassFooterView *)arg1;
- (void)passFooterViewDidChangeCoachingState:(PKPassFooterView *)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(PKPassFooterView *)arg1;

@optional
- (void)passFooterViewDidChangePileSuppressionRequirement:(PKPassFooterView *)arg1;
@end

