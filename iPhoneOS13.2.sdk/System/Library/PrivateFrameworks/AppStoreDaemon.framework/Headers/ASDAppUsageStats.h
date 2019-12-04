//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSNumber, NSString;

@interface ASDAppUsageStats : NSObject <NSCopying>
{
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSDate *_endDate;
    long long _eventTime;
    NSNumber *_evid;
    NSNumber *_itemID;
    NSString *_itemName;
    NSDate *_lastEventEndDate;
    NSString *_launchReason;
    NSDate *_startDate;
    long long _usageTime;
    long long _usageCount;
}

@property(nonatomic) long long usageCount; // @synthesize usageCount=_usageCount;
@property(nonatomic) long long usageTime; // @synthesize usageTime=_usageTime;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *launchReason; // @synthesize launchReason=_launchReason;
@property(copy, nonatomic) NSDate *lastEventEndDate; // @synthesize lastEventEndDate=_lastEventEndDate;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(nonatomic) long long eventTime; // @synthesize eventTime=_eventTime;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)_formatTimeInternal:(long long)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
