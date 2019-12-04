//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class UILabel, UIScrollView, UIView;

@interface HRAtrialFibrillationIntroViewController : HKViewController
{
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIView *_learnMoreContentView;
}

@property(retain, nonatomic) UIView *learnMoreContentView; // @synthesize learnMoreContentView=_learnMoreContentView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (double)_bodyLastBaselineToContentBottom;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (double)_titleTopToFirstBaselineLeading;
- (double)_assetImageBottomToTitleFirstBaseline;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (id)_createHeroView;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidLoad;

@end
