//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPlaybackUtilities : NSObject
{
}

+ (BOOL)playerIsLive:(id)arg1;
+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(NSUInteger)arg4 respectPlayCount:(BOOL)arg5;
+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(NSUInteger)arg4;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2;
+ (double)playedThresholdTimeForDuration:(double)arg1;

@end
