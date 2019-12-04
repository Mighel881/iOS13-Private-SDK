//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UILabel, UIStackView, VUIAppInstallView, VUITextBadge;

__attribute__((visibility("hidden")))
@interface VUIAppInstallLockup : UIView
{
    VUIAppInstallView *_iconView;
    UILabel *_nameLabel;
    UILabel *_iAPLabel;
    UILabel *_subtitleLabel;
    UIStackView *_nameAndRatingStack;
    UIStackView *_containerStack;
    _Bool _canFocus;
    UIImage *_icon;
    NSString *_name;
    NSString *_ageRating;
    NSString *_iAP;
    NSString *_subtitle;
    UIStackView *_metadataStackView;
    VUITextBadge *_ageRatingBadge;
    UILabel *_ageRatingLabel;
}

@property(retain, nonatomic) UILabel *ageRatingLabel; // @synthesize ageRatingLabel=_ageRatingLabel;
@property(retain, nonatomic) VUITextBadge *ageRatingBadge; // @synthesize ageRatingBadge=_ageRatingBadge;
@property(nonatomic) _Bool canFocus; // @synthesize canFocus=_canFocus;
@property(retain, nonatomic) UIStackView *metadataStackView; // @synthesize metadataStackView=_metadataStackView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *iAP; // @synthesize iAP=_iAP;
@property(copy, nonatomic) NSString *ageRating; // @synthesize ageRating=_ageRating;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)_textColorForDarkMode;
- (void)_configureLabels;
- (void)_configureAgeRatingBadge;
- (_Bool)canBecomeFocused;
@property(readonly, nonatomic) VUIAppInstallView *installView;
- (void)_layoutForIos;
- (void)_layoutForTvos;
- (id)initWithFrame:(struct CGRect)arg1;

@end
