//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary;
@protocol MTLCommandBuffer;

@protocol EspressoBrick <NSObject>
- (BOOL)hasGPUSupport;
- (id)initWithParameters:(NSDictionary *)arg1;
- (NSArray *)setupForInputShapes:(NSArray *)arg1 withParameters:(NSDictionary *)arg2;

@optional
- (NSArray *)computeDynamicOutputShape:(NSArray *)arg1;
- (BOOL)hasDynamicOutputShape:(NSUInteger)arg1;
- (void)encodeToMetalCommandBuffer:(id <MTLCommandBuffer>)arg1 inputTensors:(NSArray *)arg2 outputTensors:(NSArray *)arg3;
- (void)computeOnCPUWithInputTensors:(NSArray *)arg1 outputTensors:(NSArray *)arg2;
- (void)setMappedWeights:(void )arg1 sizeInBytes:(NSUInteger)arg2;
@end

