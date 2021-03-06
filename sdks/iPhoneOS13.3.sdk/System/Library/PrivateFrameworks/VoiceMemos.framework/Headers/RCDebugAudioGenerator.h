//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface RCDebugAudioGenerator : NSObject
{
    NSURL *_outputURL;
    double _duration;
    double _intervalBetweenPeaks;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id /* CDUnknownBlockType */ _generateCompletionHandler;
    NSDictionary *_outputSettings;
    id /* CDUnknownBlockType */ _curveFunction;
}

+ (id /* CDUnknownBlockType */)_defaultCurveFunction;
+ (id)_defaultOutputSettings;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ curveFunction; // @synthesize curveFunction=_curveFunction;
@property(readonly, nonatomic) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ generateCompletionHandler; // @synthesize generateCompletionHandler=_generateCompletionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(readonly, nonatomic) double intervalBetweenPeaks; // @synthesize intervalBetweenPeaks=_intervalBetweenPeaks;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
// - (void).cxx_destruct;
- (id)_generateLPCMAudioSamplesWithDuration:(double)arg1 curveFunction:(id /* CDUnknownBlockType */)arg2 samplesPerSecond:(double)arg3 intervalBetweenPeaks:(double)arg4;
- (void)_onBackgroundQueueGenerateAudio;
- (void)_onQueueGenerateFinished;
- (void)_onQueueGenerateFailedWithError:(id)arg1;
- (BOOL)startWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithOutputURL:(id)arg1 duration:(double)arg2 intervalBetweenPeaks:(double)arg3;

@end

