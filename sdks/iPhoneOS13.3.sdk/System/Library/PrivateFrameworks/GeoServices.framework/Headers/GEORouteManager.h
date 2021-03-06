//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken;
@protocol GEORouteManagerDelegate;

@interface GEORouteManager : NSObject
{
    id <GEORouteManagerDelegate> _delegate;
    GEOApplicationAuditToken *_auditToken;
}

+ (void)setShouldRequestServerLatencyInfo:(BOOL)arg1;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <GEORouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)fetchDirectionsForTicket:(id)arg1 networkActivity:(id /* CDUnknownBlockType */)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)didReceiveRoutes:(id)arg1 traffic:(id)arg2;
- (id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2;
- (void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3;
- (void)handleResponse:(id)arg1 forTicket:(id)arg2;

@end

