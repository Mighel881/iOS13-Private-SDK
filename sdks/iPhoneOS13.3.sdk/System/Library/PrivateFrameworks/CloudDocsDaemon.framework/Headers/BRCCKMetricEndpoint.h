//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCMetricEndpoint.h>

@class BRCAccountSession;

__attribute__((visibility("hidden")))
@interface BRCCKMetricEndpoint : BRCMetricEndpoint
{
    BRCAccountSession *_session;
}

// - (void).cxx_destruct;
- (void)submitEventMetric:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

