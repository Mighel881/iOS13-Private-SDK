//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBrush.h>

@class NSPredicate;

@interface GKConditionBrush : GKBrush
{
    NSPredicate *_predicate;
    GKBrush *_yesBrush;
    GKBrush *_noBrush;
}

@property(retain, nonatomic) GKBrush *noBrush; // @synthesize noBrush=_noBrush;
@property(retain, nonatomic) GKBrush *yesBrush; // @synthesize yesBrush=_yesBrush;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
// - (void).cxx_destruct;
- (CGSize)sizeForInput:(id)arg1;
- (void)drawInRect:(CGRect)arg1 withContext:(CGContext )arg2 input:(id)arg3;
// - (id)copyWithZone:(_NSZone )arg1;

@end

