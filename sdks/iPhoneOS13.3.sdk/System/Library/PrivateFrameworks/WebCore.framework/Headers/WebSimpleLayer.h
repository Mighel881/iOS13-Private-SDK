//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebSimpleLayer : CALayer
{
    BOOL _isRenderingInContext;
}

@property(readonly, nonatomic) BOOL isRenderingInContext; // @synthesize isRenderingInContext=_isRenderingInContext;
- (void)drawInContext:(CGContext )arg1;
- (void)display;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setNeedsDisplay;
- (id)actionForKey:(id)arg1;
- (void)renderInContext:(CGContext )arg1;

@end

