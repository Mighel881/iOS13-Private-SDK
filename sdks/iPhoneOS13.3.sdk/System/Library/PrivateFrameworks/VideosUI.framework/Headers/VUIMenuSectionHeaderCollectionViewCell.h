//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIMenuSectionHeaderCollectionViewCell : UICollectionViewCell
{
    NSString *_title;
    VUILabel *_titleLabel;
}

@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;

@end

