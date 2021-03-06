//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol PXVideoScrubberControllerTarget;

@interface PXScrubberSeekRequest : NSObject
{
    NSDate *_dateCreated;
    double _seekTime;
    id <PXVideoScrubberControllerTarget> _target;
}

@property(nonatomic) __weak id <PXVideoScrubberControllerTarget> target; // @synthesize target=_target;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
// - (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 seekTime:(double)arg2;
- (id)init;

@end

