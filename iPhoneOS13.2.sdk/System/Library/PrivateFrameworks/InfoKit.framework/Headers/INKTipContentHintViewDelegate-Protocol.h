//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class INKContentView, INKTipContentHintView, NSString, TPSURLAction, UIImage;

@protocol INKTipContentHintViewDelegate 
- (UIImage *)_tipContentHintView:(INKContentView *)arg1 iconForCustomizationID:(long long)arg2;
- (void)_tipContentHintViewContentViewNeedsLayout:(INKTipContentHintView *)arg1 reason:(unsigned long long)arg2;
- (void)_tipContentHintView:(INKTipContentHintView *)arg1 viewTappedForIdentifier:(NSString *)arg2;
- (void)_tipContentHintView:(INKTipContentHintView *)arg1 actionTapped:(TPSURLAction *)arg2;
- (void)_tipContentHintViewCloseButtonTapped:(INKTipContentHintView *)arg1;
@end
