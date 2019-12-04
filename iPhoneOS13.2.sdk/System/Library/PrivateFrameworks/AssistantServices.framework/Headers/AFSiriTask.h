//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/BSXPCCoding-Protocol.h>


@class AFSiriRequest, NSString, NSXPCListenerEndpoint;

@interface AFSiriTask : NSObject <NSSecureCoding, BSXPCCoding>
{
    AFSiriRequest *_request;
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
    NSXPCListenerEndpoint *_usageResultListenerEndpoint;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)reportUsageResult:(id)arg1;
- (id)_usageResultHandlerConnection;
- (void)completeWithResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)_invalidateConectionAfterMessageSent:(id)arg1;
- (id)_responseHandlerConnection;
- (id)request;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithRequest:(id)arg1 remoteResponseListenerEndpoint:(id)arg2 usageResultListenerEndpoint:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
