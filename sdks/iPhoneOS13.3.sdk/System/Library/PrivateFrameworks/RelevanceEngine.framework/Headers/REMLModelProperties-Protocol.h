//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class NSString;

@protocol REMLModelProperties <REExportedInterface>
@property(readonly, nonatomic) NSUInteger totalPositiveCount;
@property(readonly, nonatomic) NSUInteger totalExampleCount;
@property(readonly, nonatomic) float normalizedEntropy;
@property(readonly, nonatomic) float averagePrediction;
@property(readonly, nonatomic) long long getNumberOfCoordinates;
@property(readonly, nonatomic) NSUInteger maxFeatureCount;
@property(readonly, nonatomic) NSUInteger featureBitWidth;
@property(readonly, nonatomic) float simulationExploreExploitModulator;
@property(readonly, nonatomic) float priorMean;
@property(readonly, nonatomic) float exploreExploitModulator;
@property(readonly, nonatomic) BOOL allowsExploreExploit;
@property(readonly, nonatomic) NSString *name;
@end

