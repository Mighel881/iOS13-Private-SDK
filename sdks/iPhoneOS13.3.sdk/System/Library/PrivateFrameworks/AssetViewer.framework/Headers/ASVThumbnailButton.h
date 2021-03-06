//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class ASVBadgeView, ASVLoadingView, NSError, NSLayoutConstraint, UIImage, UIImageView;

@interface ASVThumbnailButton : UIButton
{
    ASVLoadingView *_loadingView;
    ASVBadgeView *_badgeView;
    UIImageView *_imageView;
    NSLayoutConstraint *_badgeTopConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
}

+ (id)thumbnailButton;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateSubviewVisibility;
- (void)setHighlighted:(BOOL)arg1;
@property(retain, nonatomic) NSError *error;
@property(retain, nonatomic) UIImage *thumbnail;
- (void)_setupButton;

@end

