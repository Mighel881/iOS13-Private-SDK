//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PRLexicon;

__attribute__((visibility("hidden")))
@interface PRLexiconCursor : NSObject
{
    PRLexicon *_lexicon;
    struct _LXCursor _cursor;
}

- (void)enumerateCompletionEntries:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateCompletions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_enumerateCompletions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateEntriesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (double)terminationProbability;
- (double)prefixProbability;
- (BOOL)hasChildren;
- (BOOL)hasEntries;
- (BOOL)isValid;
- (void)advanceWithString:(id)arg1;
- (void)advanceWithCombinedCharacterSequence:(id)arg1;
- (void)_advance:(id)arg1;
- (void)dealloc;
- (id)initWithLexicon:(id)arg1;

@end

