//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSURL;

@interface MPCAssistantGeniusPlaybackQueue : MPCAssistantPlaybackQueue
{
    NSURL *_seedTrack;
}

+ (id)geniusQueueWithContextID:(id)arg1 seedTrack:(id)arg2;
@property(readonly, nonatomic) NSURL *seedTrack; // @synthesize seedTrack=_seedTrack;
// - (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue )createRemotePlaybackQueue;
- (id)description;
- (id)initWithContextID:(id)arg1 seedTrack:(id)arg2;

@end

