//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSSet (TSUAdditions)
+ (id)tsu_intersectionOfSets:(id)arg1;
+ (_Bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;
+ (id)tsp_consolidateFeatureInfos:(id)arg1 andReturnReadVersion:(out unsigned long long *)arg2 writeVersion:(out unsigned long long *)arg3;
- (id)tsu_setBySubtractingSet:(id)arg1;
- (id)tsu_setByIntersectingSet:(id)arg1;
- (id)tsu_onlyObject;
- (_Bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_setByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_sortedArray;
- (_Bool)tsu_containsKindOfClass:(Class)arg1;
- (_Bool)tsu_containsObjectIdenticalTo:(id)arg1;
- (id)tsp_initWithProtobufStringArray:(const RepeatedPtrField_fe7cf120 *)arg1;
- (void)tsp_saveToProtobufStringArray:(RepeatedPtrField_fe7cf120 *)arg1;
- (id)tsp_sortedArray;
- (_Bool)tss_containsStyleOrVariationOfStyle:(id)arg1;
- (_Bool)tss_hasVariations;
@end
