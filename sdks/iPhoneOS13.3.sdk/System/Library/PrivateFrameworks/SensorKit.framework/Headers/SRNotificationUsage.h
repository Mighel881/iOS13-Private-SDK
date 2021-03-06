//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRSampleExporting-Protocol.h>

@class NSString;

@interface SRNotificationUsage : NSObject <SRSampleExporting, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    long long _event;
}

+ (id)notificationUsageWithBundleIdentifier:(id)arg1 eventType:(long long)arg2;
+ (BOOL)supportsSecureCoding;
@property long long event; // @synthesize event=_event;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)sr_dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

