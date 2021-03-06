//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PGMoodVector : NSObject <NSCopying>
{
    double _vector[10];
}

- (id)description;
- (id)moodArray;
- (double)sum;
- (NSUInteger)weightedRandomMoodWithSeed:(NSUInteger)arg1;
- (void)enumerateWithBlock:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)moodsWithThreshold:(double)arg1;
- (void)normalize;
- (void)filterWithMoods:(NSUInteger)arg1;
- (void)multiplyByWeight:(double)arg1;
- (void)multiplyMoodVector:(id)arg1;
- (void)substractMoodVector:(id)arg1;
- (void)addMoodVector:(id)arg1;
- (void)multiplyByWeight:(double)arg1 forMood:(NSUInteger)arg2;
- (void)addValue:(double)arg1 forMoods:(NSUInteger)arg2;
- (void)addValue:(double)arg1 forMood:(NSUInteger)arg2;
- (void)setValue:(double)arg1 forMood:(NSUInteger)arg2;
- (double)valueForMood:(NSUInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(NSUInteger)arg2;
- (id)objectAtIndexedSubscript:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

