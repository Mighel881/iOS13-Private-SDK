//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICBaseLayoutManager.h>

@interface ICPreviewLayoutManager : ICBaseLayoutManager
{
}

- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(NSUInteger)arg2;
- (void)drawTodoItemForListRange:(NSRange)arg1 paragraphStyle:(id)arg2 atOrigin:(CGPoint)arg3;
- (UIImage )todoImageForParagraphStyle:(id)arg1;
- (void)drawTodosForCharacterRange:(NSRange)arg1 atOrigin:(CGPoint)arg2;
- (void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2;

@end

