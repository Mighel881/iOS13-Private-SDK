//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

@interface HMDXPCRequest : HMFObject
{
    NSDate *_startTime;
    NSString *_messageName;
    id /* CDUnknownBlockType */ _responseHandler;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
// - (void).cxx_destruct;
- (id)initWithMessageName:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;

@end

