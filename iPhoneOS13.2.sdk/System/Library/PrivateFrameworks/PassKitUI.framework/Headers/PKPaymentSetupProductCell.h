//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentSetupProduct;

@interface PKPaymentSetupProductCell : PKTableViewCell
{
    _Bool _drawsTopSeperator;
    PKPaymentSetupProduct *_product;
    double _textLabelOffset;
}

+ (id)reuseIdentifier;
@property(nonatomic) _Bool drawsTopSeperator; // @synthesize drawsTopSeperator=_drawsTopSeperator;
@property(nonatomic) double textLabelOffset; // @synthesize textLabelOffset=_textLabelOffset;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateDisplay;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
