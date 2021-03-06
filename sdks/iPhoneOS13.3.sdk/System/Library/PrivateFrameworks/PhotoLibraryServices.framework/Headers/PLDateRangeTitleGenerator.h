//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLLazyObject;

@interface PLDateRangeTitleGenerator : NSObject
{
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthDateRangeFormatter;
    PLLazyObject *_lazyShortMonthDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
}

// - (void).cxx_destruct;
- (id)yearDateRangeFormatter;
- (id)shortMonthDateRangeFormatter;
- (id)monthDateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)newYearDateRangeFormatter;
- (id)newShortMonthDateRangeFormatter;
- (id)newMonthDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)_dateRangeFormatterForCategory:(unsigned short)arg1 kind:(unsigned short)arg2 options:(NSUInteger)arg3;
- (id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4 options:(NSUInteger)arg5;
- (id)dateRangeTitleWithStartDate:(id)arg1 endDate:(id)arg2 category:(unsigned short)arg3 kind:(unsigned short)arg4;
- (id)init;

@end

