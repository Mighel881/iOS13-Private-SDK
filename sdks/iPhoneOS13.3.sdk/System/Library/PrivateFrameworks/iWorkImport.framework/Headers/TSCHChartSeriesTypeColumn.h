//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartSeriesTypeBar.h>

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesTypeColumn : TSCHChartSeriesTypeBar
{
}

- (id)userInterfaceName;
- (id)supportedValueLabelsAxisCombinations;
- (id)axisTypesForValueLabels;
- (BOOL)supportsRoundedCorners;
- (BOOL)supportsBarGap;
- (BOOL)supportsSetGap;
- (id)elementBuilder;
- (BOOL)isVertical;
- (BOOL)chunkedBuildsIncludeInterceptValues;
- (id)genericToSpecificPropertyMap;
- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (id)legalChartLabelPositions;
- (BOOL)useInBarGapCalculations;
- (NSUInteger)valueDimensions;
- (id)init;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (id)g_genericToSpecificPropertyMapColumn;

@end

