//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol UIInteractiveUndoHUDActionDelegate 
- (void)pasteOperation;
- (void)copyOperation;
- (void)cutOperation;
- (_Bool)canPaste;
- (_Bool)canCopy;
- (_Bool)canCut;
- (void)redo:(_Bool)arg1;
- (void)undo:(_Bool)arg1;
- (_Bool)canRedo;
- (_Bool)canUndo;
@end
