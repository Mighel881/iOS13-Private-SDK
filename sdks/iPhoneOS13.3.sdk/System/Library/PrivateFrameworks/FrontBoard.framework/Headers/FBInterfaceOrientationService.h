//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBInterfaceOrientationServiceServer;

@interface FBInterfaceOrientationService : NSObject
{
    long long _interfaceOrientation;
    FBInterfaceOrientationServiceServer *_server;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
// - (void).cxx_destruct;
- (void)setInterfaceOrientation:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;
- (id)init;

@end

