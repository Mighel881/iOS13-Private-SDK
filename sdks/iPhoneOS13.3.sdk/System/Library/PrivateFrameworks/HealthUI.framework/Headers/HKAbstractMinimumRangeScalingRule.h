//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartsAxisScalingRule-Protocol.h>

@class HKValueRange, NSDictionary;

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>
{
    double _defaultYAxisRange;
    NSDictionary *_axisRangeOverrides;
    long long _portraitPrettyNumberRule;
    HKValueRange *_axisBounds;
}

@property(readonly, nonatomic) NSDictionary *axisRangeOverrides; // @synthesize axisRangeOverrides=_axisRangeOverrides;
@property(retain, nonatomic) HKValueRange *axisBounds; // @synthesize axisBounds=_axisBounds;
@property(nonatomic) long long portraitPrettyNumberRule; // @synthesize portraitPrettyNumberRule=_portraitPrettyNumberRule;
@property(readonly, nonatomic) double defaultYAxisRange; // @synthesize defaultYAxisRange=_defaultYAxisRange;
// - (void).cxx_destruct;
- (double)_rangeForZoomLevel:(long long)arg1;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;
- (id)init;

@end

