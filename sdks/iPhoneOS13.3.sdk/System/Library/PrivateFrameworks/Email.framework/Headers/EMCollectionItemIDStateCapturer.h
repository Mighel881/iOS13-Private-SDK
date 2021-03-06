//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol EFCancelable, OS_dispatch_queue;

@interface EMCollectionItemIDStateCapturer : NSObject
{
    NSObject<OS_dispatch_queue> *_stateCaptureQueue;
    id <EFCancelable> _stateCaptureCancelable;
}

@property(readonly, nonatomic) id <EFCancelable> stateCaptureCancelable; // @synthesize stateCaptureCancelable=_stateCaptureCancelable;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateCaptureQueue; // @synthesize stateCaptureQueue=_stateCaptureQueue;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2;

@end

