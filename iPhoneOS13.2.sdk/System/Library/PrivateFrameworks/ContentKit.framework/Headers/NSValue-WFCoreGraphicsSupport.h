//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSValue (WFCoreGraphicsSupport)
+ (id)wf_valueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)wf_valueWithCGSize:(struct CGSize)arg1;
+ (id)wf_valueWithCGPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGAffineTransform wf_CGAffineTransformValue;
@property(readonly, nonatomic) struct CGSize wf_CGSizeValue;
@property(readonly, nonatomic) struct CGPoint wf_CGPointValue;
@end
