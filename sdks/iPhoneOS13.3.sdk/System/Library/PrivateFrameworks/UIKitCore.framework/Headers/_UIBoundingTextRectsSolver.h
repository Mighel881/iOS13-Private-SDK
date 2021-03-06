//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutManager, NSTextContainer;

@interface _UIBoundingTextRectsSolver : NSObject
{
    NSRange _range;
    CGRect _firstRect;
    CGRect _lastRect;
    CGRect _middleRect;
    CGRect _totalRect;
    NSRange _firstGlyphRange;
    NSRange _lastGlyphRange;
    NSRange _middleGlyphRange;
    NSRange _totalGlyphRange;
    BOOL _calculated;
    BOOL _unifyRects;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSArray *rects;
- (void)_calculateTotalRect;
- (void)_calculateRectsUsingLayoutManager:(id)arg1;
- (void)_calculate;
@property(readonly, nonatomic) CGRect boundingRect;
@property(readonly, nonatomic) CGRect lastLineRect;
@property(readonly, nonatomic) CGRect bodyRect;
@property(readonly, nonatomic) CGRect firstLineRect;
- (id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 unifyRects:(BOOL)arg3;

@end

