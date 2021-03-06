//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask
{
    BOOL _forceToServer;
    NSString *_previousETag;
    NSString *_requestDataContentType;
    NSData *_requestDataPayload;
    BOOL _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
@property(retain, nonatomic) NSData *requestDataPayload; // @synthesize requestDataPayload=_requestDataPayload;
@property(retain, nonatomic) NSString *requestDataContentType; // @synthesize requestDataContentType=_requestDataContentType;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
@property(nonatomic) BOOL forceToServer; // @synthesize forceToServer=_forceToServer;
// - (void).cxx_destruct;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)description;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (id)initWithURL:(id)arg1;

@end

