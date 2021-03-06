//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSURL;

@interface ADMRAIDAction : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    NSURL *_url;
    double _maximumExpandWidth;
    double _maximumExpandHeight;
    NSDictionary *_calendarEventInfo;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)doesURLOpenNews:(id)arg1;
+ (id)errorDescriptionForActionType:(long long)arg1 errorType:(long long)arg2;
+ (id)descriptionForActionType:(long long)arg1;
@property(retain, nonatomic) NSDictionary *calendarEventInfo; // @synthesize calendarEventInfo=_calendarEventInfo;
@property(nonatomic) double maximumExpandHeight; // @synthesize maximumExpandHeight=_maximumExpandHeight;
@property(nonatomic) double maximumExpandWidth; // @synthesize maximumExpandWidth=_maximumExpandWidth;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL opensNewsLink;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

