//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class MISSING_TYPE;

@interface _TtC15HealthRecordsUI24MedicalRecordChartSeries : HKGraphSeries
{
    MISSING_TYPE *selectedStrokeStyle;
    MISSING_TYPE *unselectedStrokeStyle;
}

// - (void).cxx_destruct;
- (id)init;
- (double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2;
- (BOOL)supportsMultiTouchSelection;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContext )arg5 secondaryRenderContext:(id)arg6;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_912cb5d2)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
@property(nonatomic, readonly) CDStruct_662257c6 selectedPathRange;

@end

