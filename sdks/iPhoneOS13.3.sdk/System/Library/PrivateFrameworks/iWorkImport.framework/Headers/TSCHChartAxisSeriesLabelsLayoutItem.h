//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartCategoryAxisLabelsLayoutItem.h>

__attribute__((visibility("hidden")))
@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem
{
}

- (id)selectionPathLabelType;
- (NSUInteger)selectionPathLabelIndexForIndex:(NSUInteger)arg1 axis:(id)arg2;
- (NSUInteger)strideInLayoutArea:(CGRect)arg1;
- (id)labelStringForAxis:(id)arg1 index:(NSUInteger)arg2;
- (double)unitSpaceValueForAxis:(id)arg1 index:(NSUInteger)arg2;
- (NSUInteger)numberOfLabelsForAxis:(id)arg1;
- (BOOL)showLabelsForAxis:(id)arg1;
- (CGSize)calcMinSize;
- (id)initWithParent:(id)arg1;

@end

