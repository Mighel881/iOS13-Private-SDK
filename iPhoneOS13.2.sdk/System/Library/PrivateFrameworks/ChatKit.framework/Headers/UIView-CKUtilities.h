//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (CKUtilities)
- (struct CGSize)__ck_frameSizeForAlignmentRectSize:(struct CGSize)arg1;
- (struct CGSize)__ck_alignmentRectSizeForFrameSize:(struct CGSize)arg1;
- (_Bool)__ck_containsFirstResponder;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 threshold:(double)arg2 velocity:(struct CGPoint)arg3;
- (void)layoutGradientViewsIfNeeded;
- (void)setGradientViewsNeedLayout;
- (void)messageAcknowledgmentShrinkViewToPoint:(struct CGPoint)arg1 completion:(id /* block */)arg2;
- (void)messageAcknowledgmentBounceView:(id /* block */)arg1;
- (id)__ck_addEqualityConstraintWithItem:(id)arg1 toItem:(id)arg2 usingAttribute:(long long)arg3;
@end
