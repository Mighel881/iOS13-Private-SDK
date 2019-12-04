//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIView;

@interface SBCoverSheetPositionView : SBFTouchPassThroughView
{
    UIView *_contentView;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (struct CGPoint)_simulatedTouchLocationForProgress;
- (double)_progressFromContenViewFrame:(struct CGRect)arg1;
- (struct CGAffineTransform)_transformForLocation:(struct CGPoint)arg1 transformMode:(long long)arg2;
- (double)_progressForTouchLocation:(struct CGPoint)arg1;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1 withTransformMode:(long long)arg2 forPresentationValue:(_Bool)arg3;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_createContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
