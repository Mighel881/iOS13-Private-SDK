//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WFListEditorDeletionConfirmation, WFListEditorUpdateItem, WFListEditorView;

@protocol WFListEditorViewDelegate <NSObject>
- (void)listEditorView:(WFListEditorView *)arg1 didUpdateWithItem:(WFListEditorUpdateItem *)arg2;

@optional
- (void)listEditorView:(WFListEditorView *)arg1 needsConfirmationForDeletion:(WFListEditorDeletionConfirmation *)arg2;
@end

