//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, NSTimer, UIPageControl, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIKBTutorialMultipageView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_pageScrollView;
    NSArray *_pageViews;
    UIPageControl *_pageControl;
    NSTimer *_nextPageScrollTimer;
    double _pagingInterval;
}

@property(nonatomic) double pagingInterval; // @synthesize pagingInterval=_pagingInterval;
@property(retain, nonatomic) NSTimer *nextPageScrollTimer; // @synthesize nextPageScrollTimer=_nextPageScrollTimer;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSArray *pageViews; // @synthesize pageViews=_pageViews;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
- (void)resetPageScrolling;
- (void)scrollToNextPage;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configMediaView;
- (void)layoutSubviews;
- (id)initWithPageViews:(id)arg1 pagingInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
