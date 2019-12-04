//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTransportProviding-Protocol.h>

@class NSError, NSString;
@protocol CRKTransportProviding;

@interface CRKFailIfSimulatorTransportProvider : NSObject <CRKTransportProviding>
{
    id <CRKTransportProviding> _baseProvider;
    NSError *_failureError;
}

@property(readonly, nonatomic) NSError *failureError; // @synthesize failureError=_failureError;
@property(readonly, nonatomic) id <CRKTransportProviding> baseProvider; // @synthesize baseProvider=_baseProvider;
- (void)fetchTransportWithCompletion:(id /* block */)arg1;
- (id)initWithTransportProvider:(id)arg1 failureError:(id)arg2;
- (id)initWithTransportProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
