//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotPageField : NSObject
{
    unsigned long long mFieldId;
    NSString *mCap;
    NSString *mName;
}

+ (id)pivotPageField;
- (id)description;
- (void)setCap:(id)arg1;
- (id)cap;
- (void)setName:(id)arg1;
- (id)name;
- (void)setFieldId:(unsigned long long)arg1;
- (unsigned long long)fieldId;
- (id)init;

@end
