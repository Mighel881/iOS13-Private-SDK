//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFCoercion : NSObject
{
    id /* CDUnknownBlockType */ _block;
}

+ (id)stringToUUIDCoercion;
+ (id)typeAssertionWithClass:(Class)arg1;
+ (id)identityCoercion;
+ (id)coercionWithBlock:(id /* CDUnknownBlockType */)arg1;
// - (void).cxx_destruct;
- (id)coerceObject:(id)arg1 error:(id )arg2;
- (id)init;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1;

@end

