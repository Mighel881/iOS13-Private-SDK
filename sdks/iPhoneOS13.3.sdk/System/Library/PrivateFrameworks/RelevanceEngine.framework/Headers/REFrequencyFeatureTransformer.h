//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@interface REFrequencyFeatureTransformer : REFeatureTransformer
{
}

+ (id)frequencyTransformWithCount:(NSUInteger)arg1 minimumValidCount:(long long)arg2;
+ (id)frequencyTransformWithCount:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)increaseCountForFeatureValue:(id)arg1;

@end

