//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/CHRecognitionSessionObserver-Protocol.h>

@class CHRecognitionSession, CHRecognitionSessionResult, NSString;
@protocol CHQueryDelegate, CHStrokeProviderVersion, OS_dispatch_queue;

@interface CHQuery : NSObject <CHRecognitionSessionObserver>
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    CHRecognitionSessionResult *_currentProcessingSessionResult;
    double _lastProcessedTime;
    BOOL __queryActive;
    id <CHQueryDelegate> _delegate;
    CHRecognitionSession *_recognitionSession;
    id <CHStrokeProviderVersion> _lastProcessedStrokeProviderVersion;
    double _preferredUpdatesInterval;
}

@property(nonatomic) BOOL _queryActive; // @synthesize _queryActive=__queryActive;
@property(nonatomic) double preferredUpdatesInterval; // @synthesize preferredUpdatesInterval=_preferredUpdatesInterval;
@property(copy) id <CHStrokeProviderVersion> lastProcessedStrokeProviderVersion; // @synthesize lastProcessedStrokeProviderVersion=_lastProcessedStrokeProviderVersion;
@property(readonly, retain, nonatomic) CHRecognitionSession *recognitionSession; // @synthesize recognitionSession=_recognitionSession;
@property(nonatomic) id <CHQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateForRecognitionSessionResultChangeIfNeeded;
- (void)waitForPendingUpdates;
- (void)pause;
- (void)start;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;
- (id)init;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;
- (double)preferredRecognitionResultUpdatesInterval;
@property(readonly, retain, nonatomic) NSString *debugName;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
- (id)q_sessionResult;
- (void)q_queryResultDidChange;
- (void)q_setNeedsQueryResultUpdating;
- (void)q_updateQueryResult;

@end
