//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesAxisAnnotation-Protocol.h>

@class NSMapTable;

@interface _HKGraphViewAxisAnnotationHandler : NSObject <HKGraphSeriesAxisAnnotation>
{
    BOOL _disableDuringTiling;
    BOOL _clearedPreviousAnnotations;
    NSMapTable *_seriesToAnnotations;
}

@property(nonatomic) BOOL clearedPreviousAnnotations; // @synthesize clearedPreviousAnnotations=_clearedPreviousAnnotations;
@property(retain, nonatomic) NSMapTable *seriesToAnnotations; // @synthesize seriesToAnnotations=_seriesToAnnotations;
@property(nonatomic) BOOL disableDuringTiling; // @synthesize disableDuringTiling=_disableDuringTiling;
// - (void).cxx_destruct;
- (void)clearAxisAnnotations;
- (long long)applyAnnotationForSeries:(id)arg1 commonAxes:(id)arg2;
- (void)addAxisAnnotation:(id)arg1 forSeries:(id)arg2 textColor:(id)arg3 modelCoordinate:(id)arg4;
- (void)startAnnotationSequence;
- (id)init;

@end
