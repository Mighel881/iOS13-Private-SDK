//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/JXHTTPRequestBody-Protocol.h>

@class NSData, NSString;

@interface JXHTTPDataBody : NSObject <JXHTTPRequestBody>
{
    NSData *_data;
    NSString *_httpContentType;
}

+ (id)withData:(id)arg1;
+ (id)withData:(id)arg1 contentType:(id)arg2;
@property(copy, nonatomic) NSString *httpContentType; // @synthesize httpContentType=_httpContentType;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (long long)httpContentLength;
- (id)httpInputStream;
- (id)initWithData:(id)arg1 contentType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
