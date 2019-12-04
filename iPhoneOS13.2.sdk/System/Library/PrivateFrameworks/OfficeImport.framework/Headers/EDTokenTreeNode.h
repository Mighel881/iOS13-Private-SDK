//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTokenTreeNode : NSObject
{
    unsigned int mTokenIndex;
    int mTokenType;
    EDTokenTreeNode *mFirstChild;
    EDTokenTreeNode *mSibling;
}

+ (id)tokenTreeNodeWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (id)description;
- (void)setSibling:(id)arg1;
- (id)sibling;
- (void)setFirstChild:(id)arg1;
- (id)firstChild;
- (unsigned int)tokenIndex;
- (id)initWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (id)init;

@end
