//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIDonationResultView : UIView
{
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

// - (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *message;
@property(retain, nonatomic) UIImage *image;

@end

