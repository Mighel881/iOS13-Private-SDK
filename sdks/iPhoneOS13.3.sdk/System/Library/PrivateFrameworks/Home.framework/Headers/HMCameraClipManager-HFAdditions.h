//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraClipManager.h>

@class NSArray;

@interface HMCameraClipManager (HFAdditions)
+ (NSUInteger)hf_indexOfClipForDate:(id)arg1 inClips:(id)arg2 enumerationOptions:(NSUInteger)arg3 searchOptions:(NSUInteger)arg4;
+ (id)hf_findClipPositionForDate:(id)arg1 inClips:(id)arg2 options:(NSUInteger)arg3;
- (BOOL)hf_isFirstClipOfTheDay:(id)arg1;
- (id)hf_findClipPositionForDate:(id)arg1 options:(NSUInteger)arg2;
- (id)hf_findClipPositionForDate:(id)arg1;
- (id)hf_findClipForDate:(id)arg1;
- (void)_prepareDatesContainingClips;
- (id)hf_datesContainingClips;
- (void)hf_deleteAllClipsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_playableClipsFromArray:(id)arg1;
- (BOOL)_isClipDisplayable:(id)arg1;
- (void)hf_reloadForRemovedClips:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)hf_reloadForUpdatedClips:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)hf_prepareForDismissal;
- (id)_firstOfTheDayClips;
- (id)_internalClips;
- (void)updateFirstOfTheDayClips:(id)arg1 withClip:(id)arg2 previousClip:(id)arg3;
- (void)_prepareInternalClipCache:(id)arg1;
- (void)hf_setDemoClipsForCameraProfile:(id)arg1;
- (void)hmf_setClips:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *hf_clips;
- (BOOL)hf_shouldBypassResourceLoading;
- (void)hf_shouldBypassResourceLoading:(BOOL)arg1;
@end

