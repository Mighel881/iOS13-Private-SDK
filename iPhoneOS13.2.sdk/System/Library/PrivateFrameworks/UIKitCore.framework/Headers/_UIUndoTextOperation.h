//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UIUndoTextOperation : NSObject
{
    UITextInputController *_inputController;
    struct _NSRange _affectedRange;
}

@property(nonatomic) __weak UITextInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) struct _NSRange affectedRange; // @synthesize affectedRange=_affectedRange;
- (_Bool)supportsCoalescing;
- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2;

@end
