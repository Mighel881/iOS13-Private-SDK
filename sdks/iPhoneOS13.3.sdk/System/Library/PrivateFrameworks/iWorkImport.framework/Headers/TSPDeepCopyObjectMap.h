//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface TSPDeepCopyObjectMap : NSObject
{
    NSMapTable *_archivedObjects;
    NSMapTable *_originalIdentifierToDeepCopyObject;
    NSMapTable *_deepCopyIdentifierToOriginalObject;
}

// - (void).cxx_destruct;
- (id)objectForDeepCopy:(id)arg1;
- (id)deepCopyForObject:(id)arg1;
- (void)didReadObjects:(id)arg1;
- (void)didWriteObjects:(id)arg1;

@end

