//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAWeatherUnits : AceObject <SAAceSerializable>
{
}

+ (id)unitsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)units;
@property(copy, nonatomic) NSString *temperatureUnits;
@property(copy, nonatomic) NSString *speedUnits;
@property(copy, nonatomic) NSString *pressureUnits;
@property(copy, nonatomic) NSString *precipitationUnits;
@property(copy, nonatomic) NSString *distanceUnits;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

