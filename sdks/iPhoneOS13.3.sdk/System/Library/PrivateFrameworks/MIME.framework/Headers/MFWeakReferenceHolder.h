//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface MFWeakReferenceHolder : NSObject
{
    id <NSObject> _reference;
}

+ (id)weakReferenceWithObject:(id)arg1;
- (id)reference;
- (id)retainedReference;
- (void)dealloc;
- (id)_initWithObject:(id)arg1;

@end

