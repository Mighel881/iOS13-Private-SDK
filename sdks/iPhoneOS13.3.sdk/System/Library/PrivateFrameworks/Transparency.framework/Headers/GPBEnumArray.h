//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBEnumArray : NSObject <NSCopying>
{
    GPBMessage *_autocreator;
    /* void * CDUnknownFunctionPointerType _validationFunc */;
    int _values;
    NSUInteger _count;
    NSUInteger _capacity;
}

+ (id)arrayWithValidationFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 capacity:(NSUInteger)arg2;
+ (id)arrayWithValueArray:(id)arg1;
+ (id)arrayWithValidationFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 rawValue:(int)arg2;
+ (id)arrayWithValidationFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1;
+ (id)array;
@property(readonly, nonatomic) /* void * CDUnknownFunctionPointerType validationFunc */; // @synthesize validationFunc=_validationFunc;
@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
- (void)replaceValueAtIndex:(NSUInteger)arg1 withValue:(int)arg2;
- (void)insertValue:(int)arg1 atIndex:(NSUInteger)arg2;
- (void)addValues:(const int )arg1 count:(NSUInteger)arg2;
- (void)addValue:(int)arg1;
- (void)exchangeValueAtIndex:(NSUInteger)arg1 withValueAtIndex:(NSUInteger)arg2;
- (void)removeAll;
- (void)removeValueAtIndex:(NSUInteger)arg1;
- (void)addRawValuesFromArray:(id)arg1;
- (void)replaceValueAtIndex:(NSUInteger)arg1 withRawValue:(int)arg2;
- (void)insertRawValue:(int)arg1 atIndex:(NSUInteger)arg2;
- (void)addRawValues:(const int )arg1 count:(NSUInteger)arg2;
- (void)addRawValue:(int)arg1;
- (void)internalResizeToCapacity:(NSUInteger)arg1;
- (void)enumerateValuesWithOptions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateValuesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (int)rawValueAtIndex:(NSUInteger)arg1;
- (int)valueAtIndex:(NSUInteger)arg1;
- (void)enumerateRawValuesWithOptions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateRawValuesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithValidationFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 capacity:(NSUInteger)arg2;
- (id)initWithValidationFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1 rawValues:(const int )arg2 count:(NSUInteger)arg3;
- (id)initWithValidationFunction:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg1;
- (id)initWithValueArray:(id)arg1;
- (id)init;

@end

