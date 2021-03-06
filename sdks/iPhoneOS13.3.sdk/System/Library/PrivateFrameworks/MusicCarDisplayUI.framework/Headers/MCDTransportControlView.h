//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UIImage;

@interface MCDTransportControlView : UIView
{
    BOOL _progressActive;
    UIButton *_leftButton;
    UIButton *_playPauseButton;
    UIButton *_fastForwardButton;
    NSString *_playButtonImageName;
    NSString *_pauseButtonImageName;
    UIImage *_defaultLeftButtonImage;
    UIImage *_defaultFastForwardButtonImage;
    UIImage *_playImage;
    UIImage *_pauseImage;
    NSLayoutConstraint *_containerHeightConstraint;
    CGSize _buttonSize;
}

@property(retain, nonatomic) NSLayoutConstraint *containerHeightConstraint; // @synthesize containerHeightConstraint=_containerHeightConstraint;
@property(retain, nonatomic) UIImage *pauseImage; // @synthesize pauseImage=_pauseImage;
@property(retain, nonatomic) UIImage *playImage; // @synthesize playImage=_playImage;
@property(retain, nonatomic) UIImage *defaultFastForwardButtonImage; // @synthesize defaultFastForwardButtonImage=_defaultFastForwardButtonImage;
@property(retain, nonatomic) UIImage *defaultLeftButtonImage; // @synthesize defaultLeftButtonImage=_defaultLeftButtonImage;
@property(retain, nonatomic) NSString *pauseButtonImageName; // @synthesize pauseButtonImageName=_pauseButtonImageName;
@property(retain, nonatomic) NSString *playButtonImageName; // @synthesize playButtonImageName=_playButtonImageName;
@property(nonatomic) BOOL progressActive; // @synthesize progressActive=_progressActive;
@property(readonly, nonatomic) UIButton *fastForwardButton; // @synthesize fastForwardButton=_fastForwardButton;
@property(readonly, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
// - (void).cxx_destruct;
- (id)_defaultImageForIdentifier:(id)arg1;
- (void)_updateProgressActive;
- (void)updateConstraints;
- (void)setupConstraints;
- (id)initWithFrame:(CGRect)arg1;

@end

