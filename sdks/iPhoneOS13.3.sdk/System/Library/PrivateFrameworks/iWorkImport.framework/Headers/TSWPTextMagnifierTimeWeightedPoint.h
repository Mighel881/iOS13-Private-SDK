//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPTextMagnifierTimeWeightedPoint : NSObject
{
    long long m_index;
    struct {
        CGPoint point;
        double time;
    } m_points[16];
}

- (double)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;
- (CGSize)displacementInInterval:(double)arg1;
- (double)distanceCoveredInInterval:(double)arg1;
- (BOOL)historyCovers:(double)arg1;
@property(readonly, nonatomic) CGPoint weightedPoint;
- (void)addPoint:(CGPoint)arg1;
- (void)clearHistory;

@end
