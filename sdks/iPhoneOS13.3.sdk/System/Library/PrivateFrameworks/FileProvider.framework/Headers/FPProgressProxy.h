//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class NSObservation, NSURL;

@interface FPProgressProxy : NSProgress
{
    id _subscriber;
    NSURL *_fileURL;
    BOOL _shouldStopAccessingURL;
    NSObservation *_observation;
    BOOL _didSetupParentProgress;
    BOOL _updateFileCount;
}

+ (void)initialize;
@property(nonatomic) BOOL updateFileCount; // @synthesize updateFileCount=_updateFileCount;
// - (void).cxx_destruct;
- (void)setProgressDidSetupHandler:(id /* CDUnknownBlockType */)arg1;
- (void)stopTrackingIfStarted;
- (void)startTrackingFileURL:(id)arg1 kind:(id)arg2;
- (void)setCancellationHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_updateWithProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;

@end

