//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString, SAPerson, SAVoice;

@interface SAHomeMemberSettings : AceObject <SAAceSerializable>
{
}

+ (id)homeMemberSettingsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)homeMemberSettings;
@property(copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property(retain, nonatomic) SAVoice *ttsVoice;
@property(copy, nonatomic) NSString *temperatureUnit;
@property(copy, nonatomic) NSString *region;
@property(copy, nonatomic) NSString *preferredLanguage;
@property(copy, nonatomic) NSArray *parentalRestrictions;
@property(retain, nonatomic) SAPerson *meCard;
@property(copy, nonatomic) NSString *countryCode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

