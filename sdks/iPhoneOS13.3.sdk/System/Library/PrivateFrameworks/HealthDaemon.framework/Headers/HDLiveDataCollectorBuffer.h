//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol HDSensorDatum;

@interface HDLiveDataCollectorBuffer : NSObject
{
    NSMutableArray *_buffer;
    id <HDSensorDatum> _lastProcessedDatum;
    id /* CDUnknownBlockType */ _objectCreationBlock;
    id /* CDUnknownBlockType */ _sensorDatumComparisonBlock;
    double _bufferAggregationInterval;
}

@property(nonatomic) double bufferAggregationInterval; // @synthesize bufferAggregationInterval=_bufferAggregationInterval;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sensorDatumComparisonBlock; // @synthesize sensorDatumComparisonBlock=_sensorDatumComparisonBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ objectCreationBlock; // @synthesize objectCreationBlock=_objectCreationBlock;
// - (void).cxx_destruct;
- (id)_processBufferIfSensorDatumInvalid:(id)arg1;
- (void)_resetBuffer;
- (id)_createObjectsFromBuffer:(id)arg1 lastProcessedDatum:(id)arg2;
- (long long)_bufferStateForSensorDatum:(id)arg1;
- (BOOL)_bufferLengthAchieved:(double)arg1 buffer:(id)arg2 lastProcessedDatum:(id)arg3;
- (id)addSensorDatum:(id)arg1;
- (id)init;

@end
