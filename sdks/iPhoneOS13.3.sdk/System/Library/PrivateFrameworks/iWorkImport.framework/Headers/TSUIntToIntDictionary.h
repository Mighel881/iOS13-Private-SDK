//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary mDictionary;
}

+ (id)dictionary;
- (struct __CFDictionary )p_cfDictionary;
- (void)enumerateKeysAndValuesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (id)allValues;
- (id)allKeys;
- (id)arrayOfBoxedKeys;
- (void)addIntToIntDictionary:(id)arg1;
- (void)applyFromIntToIntDictionary:(id)arg1;
- (BOOL)containsKey:(long long)arg1;
- (id)keyEnumerator;
- (void)removeAllInts;
- (void)incrementValueForKey:(long long)arg1;
- (void)incrementValueBy:(long long)arg1 forKey:(long long)arg2;
- (void)setInt:(long long)arg1 forKey:(long long)arg2;
- (void)removeIntForKey:(long long)arg1;
- (long long)intForKey:(long long)arg1;
- (BOOL)intIsPresentForKey:(long long)arg1 outValue:(long long )arg2;
- (NSUInteger)count;
- (void)dealloc;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;

@end

