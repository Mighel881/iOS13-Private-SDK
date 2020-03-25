//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockItem-Protocol.h>

@class NSDate, NSString, NSURL, NSUUID;

@interface AFClockAlarm : NSObject <AFClockItem, NSCopying, NSSecureCoding>
{
    BOOL _isFiring;
    BOOL _isEnabled;
    BOOL _isSnoozed;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    NSString *_title;
    NSUInteger _hour;
    NSUInteger _minute;
    NSUInteger _repeatOptions;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSDate *dismissedDate; // @synthesize dismissedDate=_dismissedDate;
@property(readonly, copy, nonatomic) NSDate *firedDate; // @synthesize firedDate=_firedDate;
@property(readonly, nonatomic) BOOL isSnoozed; // @synthesize isSnoozed=_isSnoozed;
@property(readonly, nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) NSUInteger repeatOptions; // @synthesize repeatOptions=_repeatOptions;
@property(readonly, nonatomic) NSUInteger minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) NSUInteger hour; // @synthesize hour=_hour;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) BOOL isFiring; // @synthesize isFiring=_isFiring;
@property(readonly, copy, nonatomic) NSURL *alarmURL; // @synthesize alarmURL=_alarmURL;
@property(readonly, copy, nonatomic) NSUUID *alarmID; // @synthesize alarmID=_alarmID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)_descriptionWithIndent:(NSUInteger)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAlarmID:(id)arg1 alarmURL:(id)arg2 isFiring:(BOOL)arg3 title:(id)arg4 hour:(NSUInteger)arg5 minute:(NSUInteger)arg6 repeatOptions:(NSUInteger)arg7 isEnabled:(BOOL)arg8 isSnoozed:(BOOL)arg9 firedDate:(id)arg10 dismissedDate:(id)arg11 lastModifiedDate:(id)arg12;
- (id)mutatedCopyWithMutator:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSURL *itemURL;
@property(readonly, nonatomic) NSUUID *itemID;

@end
