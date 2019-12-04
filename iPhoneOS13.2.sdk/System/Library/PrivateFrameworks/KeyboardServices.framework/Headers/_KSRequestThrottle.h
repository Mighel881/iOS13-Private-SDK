//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _KSRequestThrottle : NSObject
{
    id /* block */ _curveFunction;
    double _maximum;
    id /* block */ _request;
    int _retryCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_debugIdentifier;
}

@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_launch;
- (void)postRequest:(id /* block */)arg1;
- (id)initWithCurve:(id /* block */)arg1 maximumDelay:(double)arg2;
- (id)init;

@end
