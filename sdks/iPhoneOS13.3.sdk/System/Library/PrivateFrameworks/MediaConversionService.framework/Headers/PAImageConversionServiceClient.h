//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface PAImageConversionServiceClient : NSObject
{
    NSXPCConnection *_serviceConnection;
}

@property(retain) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
// - (void).cxx_destruct;
- (void)convertImageAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)convertImageAtSourceURL:(id)arg1 options:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setupServiceConnection;
- (void)dealloc;
- (id)init;

@end
