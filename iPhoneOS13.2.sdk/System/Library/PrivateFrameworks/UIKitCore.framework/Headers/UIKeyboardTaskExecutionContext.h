//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIKeyboardTaskQueue;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskExecutionContext : NSObject
{
    UIKeyboardTaskExecutionContext *_parentExecutionContext;
    id /* block */ _continuation;
    id _info;
    id /* block */ _pendingCompletionBlock;
    UIKeyboardTaskQueue *_executionQueue;
}

@property(readonly, nonatomic) UIKeyboardTaskQueue *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(copy, nonatomic) id /* block */ pendingCompletionBlock; // @synthesize pendingCompletionBlock=_pendingCompletionBlock;
@property(retain, nonatomic) id info; // @synthesize info=_info;
- (void)transferExecutionToMainThreadWithTask:(id /* block */)arg1;
- (void)returnExecutionToParentWithInfo:(id)arg1;
- (void)returnExecutionToParent;
- (id)childWithContinuation:(id /* block */)arg1;
- (id)initWithParentContext:(id)arg1 continuation:(id /* block */)arg2;
- (id)initWithExecutionQueue:(id)arg1;
- (id)init;
- (void)dealloc;

@end
