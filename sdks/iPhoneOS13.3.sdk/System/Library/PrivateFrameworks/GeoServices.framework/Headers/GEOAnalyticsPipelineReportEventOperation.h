//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineReportEventOperation : GEOAnalyticsPipelineReportOperation
{
    int _logMsgType;
    int _logMsgEventType;
    NSData *_logMsg;
}

// - (void).cxx_destruct;
- (void)main;
- (id)initWithType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 remoteProxy:(id)arg4 runQueue:(id)arg5 completionQueue:(id)arg6 completionBlock:(id /* CDUnknownBlockType */)arg7;

@end
