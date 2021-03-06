//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFSettings-Protocol.h>

@class NSSet, NSString;

@interface WFInternalAppSettings : NSObject <WFSettings>
{
}

// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSUInteger locationNumDecimalsOfPrecision;
@property(readonly, nonatomic) NSUInteger networkSwitchExpirationTimeInSeconds;
@property(readonly, nonatomic) NSUInteger networkFailedAttemptsLimit;
@property(readonly, nonatomic) NSString *apiVersionFallback;
@property(readonly, nonatomic) NSSet *aqiEnabledCountryCodes;
@property(readonly, nonatomic) NSString *apiVersion;
@property(readonly, copy) NSString *description;

@end

