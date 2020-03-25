//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class NSTimer, UIImage, UIImageView, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol CAMTransientImageWellDelegate;

@interface CAMTransientImageWell : UIView <UIGestureRecognizerDelegate>
{
    BOOL _autoStashesImages;
    BOOL __stashed;
    id <CAMTransientImageWellDelegate> _delegate;
    long long _orientation;
    UIImageView *__imageView;
    NSTimer *__autoStashTimer;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UISwipeGestureRecognizer *__unstashGestureRecognizer;
    UISwipeGestureRecognizer *__stashGestureRecognizer;
}

@property(readonly, nonatomic) UISwipeGestureRecognizer *_stashGestureRecognizer; // @synthesize _stashGestureRecognizer=__stashGestureRecognizer;
@property(readonly, nonatomic) UISwipeGestureRecognizer *_unstashGestureRecognizer; // @synthesize _unstashGestureRecognizer=__unstashGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(nonatomic, getter=_isStashed, setter=_setStashed:) BOOL _stashed; // @synthesize _stashed=__stashed;
@property(retain, nonatomic) NSTimer *_autoStashTimer; // @synthesize _autoStashTimer=__autoStashTimer;
@property(retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic) BOOL autoStashesImages; // @synthesize autoStashesImages=_autoStashesImages;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <CAMTransientImageWellDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(nonatomic) BOOL currentImageHidden;
- (void)clearImageAnimated:(BOOL)arg1;
@property(readonly, nonatomic) CGRect imageFrame;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImage *image;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_dismissImageView:(id)arg1 animated:(BOOL)arg2;
- (void)_dismissImageAnimated:(BOOL)arg1;
- (void)_cancelAutoStashTimer;
- (void)_handleAutoStashTimerFired:(id)arg1;
- (void)_restartAutoStashTimerWithDuration:(double)arg1;
- (void)_restartAutoStashTimer;
- (CGPoint)_imageViewStashPoint;
- (CGPoint)_imageViewSpawnPoint;
- (CGSize)_imageViewSizeForContentSize:(CGSize)arg1;
- (CGSize)_imageViewMaxSize;
- (void)_handleStashSwipe:(id)arg1;
- (void)_handleUnstashSwipe:(id)arg1;
- (void)_handleTap:(id)arg1;
- (CGRect)_unorientedFrameForImageView:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_setStashed:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end
