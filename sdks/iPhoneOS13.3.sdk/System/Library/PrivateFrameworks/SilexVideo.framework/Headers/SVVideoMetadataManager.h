//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoMetadataProviding-Protocol.h>
#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class SVWeakObjectCache;
@protocol SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving, SVVideoTimePlayedTrackerFactory, SVVideoTimePlayedTracking, SVVideoVolumeObserverFactory, SVVideoVolumeObserving;

@interface SVVideoMetadataManager : NSObject <SVVideoMetadataProviding, SVVideoTransitionObserver>
{
    id <SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id <SVVideoVolumeObserverFactory> _volumeObserverFactory;
    id <SVVideoTimePlayedTrackerFactory> _timePlayedTrackerFactory;
    SVWeakObjectCache *_metadataCache;
    id <SVVideoPlaybackProgressObserving> _playbackProgressObserver;
    id <SVVideoVolumeObserving> _volumeObserver;
    id <SVVideoTimePlayedTracking> _timePlayedTracker;
}

@property(retain, nonatomic) id <SVVideoTimePlayedTracking> timePlayedTracker; // @synthesize timePlayedTracker=_timePlayedTracker;
@property(retain, nonatomic) id <SVVideoVolumeObserving> volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(retain, nonatomic) id <SVVideoPlaybackProgressObserving> playbackProgressObserver; // @synthesize playbackProgressObserver=_playbackProgressObserver;
@property(readonly, nonatomic) SVWeakObjectCache *metadataCache; // @synthesize metadataCache=_metadataCache;
@property(readonly, nonatomic) id <SVVideoTimePlayedTrackerFactory> timePlayedTrackerFactory; // @synthesize timePlayedTrackerFactory=_timePlayedTrackerFactory;
@property(readonly, nonatomic) id <SVVideoVolumeObserverFactory> volumeObserverFactory; // @synthesize volumeObserverFactory=_volumeObserverFactory;
@property(readonly, nonatomic) id <SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory; // @synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory;
// - (void).cxx_destruct;
- (id)mutableMetadataForVideo:(id)arg1;
- (id)metadataForVideo:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithPlaybackProgressObserverFactory:(id)arg1 volumeObserverFactory:(id)arg2 timePlayedTrackerFactory:(id)arg3;

@end

