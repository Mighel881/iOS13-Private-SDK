//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface HKBloodPressureSeriesPresentationStyle : NSObject
{
    double _width;
    UIColor *_systolicSymbolColor;
    UIColor *_systolicFillColor;
    UIColor *_diastolicSymbolColor;
    UIColor *_diastolicFillColor;
}

@property(retain, nonatomic) UIColor *diastolicFillColor; // @synthesize diastolicFillColor=_diastolicFillColor;
@property(retain, nonatomic) UIColor *diastolicSymbolColor; // @synthesize diastolicSymbolColor=_diastolicSymbolColor;
@property(retain, nonatomic) UIColor *systolicFillColor; // @synthesize systolicFillColor=_systolicFillColor;
@property(retain, nonatomic) UIColor *systolicSymbolColor; // @synthesize systolicSymbolColor=_systolicSymbolColor;
@property(nonatomic) double width; // @synthesize width=_width;
// - (void).cxx_destruct;

@end

