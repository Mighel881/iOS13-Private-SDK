//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface SKUILoadItemsResponse : NSObject
{
    NSDictionary *_loadedItems;
    NSSet *_invalidItemIdentifiers;
}

@property(copy, nonatomic) NSSet *invalidItemIdentifiers; // @synthesize invalidItemIdentifiers=_invalidItemIdentifiers;
@property(copy, nonatomic) NSDictionary *loadedItems; // @synthesize loadedItems=_loadedItems;
// - (void).cxx_destruct;

@end

