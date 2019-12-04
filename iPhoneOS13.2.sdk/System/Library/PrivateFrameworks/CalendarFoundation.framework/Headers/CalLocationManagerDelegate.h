//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSString;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate>
{
    CLLocation *_currentLocation;
    id /* block */ _completionBlock;
    CLLocationManager *_manager;
    NSString *_currentBundleID;
    _Bool _didFinish;
}

@property _Bool didFinish; // @synthesize didFinish=_didFinish;
@property(copy) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)timeout;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)dealloc;
- (id)initWithCurrentBundleID:(id)arg1 completionBlock:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
