//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@interface TVContainerCollectionViewCell : UICollectionViewCell
{
    BOOL _pressIsAnimating;
    BOOL _unpressOnEndAnimating;
    BOOL _allowsFocus;
    BOOL _selectSubviews;
}

@property(nonatomic) BOOL selectSubviews; // @synthesize selectSubviews=_selectSubviews;
@property(nonatomic) BOOL allowsFocus; // @synthesize allowsFocus=_allowsFocus;
- (void)_showPressState;
- (void)_clearPressState;
- (void)prepareForReuse;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFocused:(BOOL)arg1 animated:(BOOL)arg2 context:(id)arg3 coordinator:(id)arg4;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(CGRect)arg1;

@end

