//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WFTemperatureUnitProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_providerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue; // @synthesize providerQueue=_providerQueue;
// - (void).cxx_destruct;
- (void)_postDidChangeUnitDefaultsPreference;
- (int)_providerQueue_changeUnit:(int)arg1;
- (int)_providerQueue_readUnit;
- (void)replaceUnit:(int)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)replaceUnit:(int)arg1;
@property(readonly) int userTemperatureUnit;
- (void)fetchTemperatureUnitWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

