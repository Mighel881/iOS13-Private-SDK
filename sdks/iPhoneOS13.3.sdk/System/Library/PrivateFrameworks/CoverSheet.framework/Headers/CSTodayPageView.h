//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSPageViewBase.h>

@class UIScrollView, UIView;

@interface CSTodayPageView : CSPageViewBase
{
    UIView *_todayView;
    UIScrollView *_widgetMajorScrollView;
    double _navigationBarTopInset;
}

@property(nonatomic) double navigationBarTopInset; // @synthesize navigationBarTopInset=_navigationBarTopInset;
@property(retain, nonatomic) UIScrollView *widgetMajorScrollView; // @synthesize widgetMajorScrollView=_widgetMajorScrollView;
@property(retain, nonatomic) UIView *todayView; // @synthesize todayView=_todayView;
// - (void).cxx_destruct;
- (void)_layoutTodayView;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

