//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, VUILabel, VUIProductMetadataLayout;

__attribute__((visibility("hidden")))
@interface VUIProductSectionView : UIView
{
    VUIProductMetadataLayout *_layout;
    VUILabel *_headerView;
    NSArray *_infoViews;
    UIView *_footerView;
    UIView *_defaultFocusView;
    VUILabel *_prototypeInfoHeaderLabel;
}

+ (id)footerDescriptionWithString:(id)arg1 layout:(id)arg2 maxLine:(NSUInteger)arg3 existingView:(id)arg4;
+ (id)footerLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
@property(retain, nonatomic) VUILabel *prototypeInfoHeaderLabel; // @synthesize prototypeInfoHeaderLabel=_prototypeInfoHeaderLabel;
@property(retain, nonatomic) UIView *defaultFocusView; // @synthesize defaultFocusView=_defaultFocusView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *infoViews; // @synthesize infoViews=_infoViews;
@property(retain, nonatomic) VUILabel *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) VUIProductMetadataLayout *layout; // @synthesize layout=_layout;
// - (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (BOOL)canBecomeFocused;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;

@end
