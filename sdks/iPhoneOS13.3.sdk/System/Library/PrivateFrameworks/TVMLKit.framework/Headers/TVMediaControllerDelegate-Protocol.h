//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIViewController;
@protocol TVMediaController;

@protocol TVMediaControllerDelegate <NSObject>

@optional
- (void)mediaController:(UIViewController<TVMediaController> *)arg1 shouldShowStill:(inout BOOL )arg2 afterStoppingForReason:(long long)arg3;
- (void)stateDidChangeForMediaController:(UIViewController<TVMediaController> *)arg1;
- (void)didFinishPlaybackForMediaController:(UIViewController<TVMediaController> *)arg1;
- (void)coverImageDidChangeForMediaController:(UIViewController<TVMediaController> *)arg1;
@end

