//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _PASLRUCache : NSObject
{
    NSMutableDictionary *_items;
    NSMutableArray *_keysMRU;
    NSUInteger _countLimit;
}

// - (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithCountLimit:(NSUInteger)arg1;

@end

