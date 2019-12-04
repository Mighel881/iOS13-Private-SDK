//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFProximityEstimator : NSObject
{
    int _rssiEnter;
    int _rssiExit;
    int _rssiImmediate;
    int _rssiNear;
    int _rssiFar;
    int _estimatedRSSI;
}

+ (id)proximityEstimatorWithProximityInfo:(id)arg1;
@property(readonly, nonatomic) int estimatedRSSI; // @synthesize estimatedRSSI=_estimatedRSSI;
- (int)_estimateRSSIForSFBLEDevice:(id)arg1;
- (unsigned int)updateWithSFBLEDevice:(id)arg1;
- (id)descriptionParams;
- (id)description;
- (id)initWithProximityInfo:(id)arg1;

@end
