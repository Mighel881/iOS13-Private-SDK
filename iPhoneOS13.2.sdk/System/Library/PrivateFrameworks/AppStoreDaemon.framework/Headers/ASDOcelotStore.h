//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;

@interface ASDOcelotStore : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)sharedInstance;
- (void)topAppsForAccount:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)subscriptionStateWithCompletionBlock:(id /* block */)arg1;
- (void)sendPayoutWithCompletionBlock:(id /* block */)arg1;
- (void)sendSummaryWithCompletionBlock:(id /* block */)arg1;
- (void)sbsyncWithDuration:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sbsyncWithCompletionBlock:(id /* block */)arg1;
- (void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resetPayoutWithCompletionBlock:(id /* block */)arg1;
- (void)resetSummaryWithCompletionBlock:(id /* block */)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)recordMetricsWithCompletionBlock:(id /* block */)arg1;
- (void)recordLaunchesWithCompletionBlock:(id /* block */)arg1;
- (void)getAppSummaryEventsWithCompletionBlock:(id /* block */)arg1;
- (void)getAppPayoutEventsWithCompletionBlock:(id /* block */)arg1;
- (void)flushMetricsWithCompletionBlock:(id /* block */)arg1;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
