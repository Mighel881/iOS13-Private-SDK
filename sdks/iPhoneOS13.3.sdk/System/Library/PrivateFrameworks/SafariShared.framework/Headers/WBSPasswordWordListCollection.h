//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBSPasswordWordListCollection : NSObject
{
    NSMutableDictionary *_wordListsByIdentifiers;
}

+ (id)commonPasscodeWordListCollection;
+ (id)commonPasswordWordListCollection;
// - (void).cxx_destruct;
- (id)entriesForString:(id)arg1;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)addWordList:(id)arg1;
- (id)init;

@end
