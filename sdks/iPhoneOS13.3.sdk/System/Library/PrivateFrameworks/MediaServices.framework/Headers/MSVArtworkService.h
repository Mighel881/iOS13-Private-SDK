//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject
{
    NSOperationQueue *_serviceThrottlingOperationQueue;
    NSXPCConnection *_serverConnection;
}

+ (id)sharedService;
@property(retain, nonatomic) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue; // @synthesize serviceThrottlingOperationQueue=_serviceThrottlingOperationQueue;
// - (void).cxx_destruct;
- (void)sendRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)init;

@end

