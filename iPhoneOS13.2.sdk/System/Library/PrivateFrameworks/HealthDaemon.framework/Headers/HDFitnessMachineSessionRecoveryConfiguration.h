//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSString, NSUUID;

@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <NSSecureCoding>
{
    NSUUID *_sessionUUID;
    NSUUID *_machineUUID;
    unsigned long long _machineType;
    NSString *_machineName;
    NSString *_machineBrand;
    unsigned long long _activityType;
    NSDate *_machineStartDate;
    NSDate *_machinePreferredUntilDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *machinePreferredUntilDate; // @synthesize machinePreferredUntilDate=_machinePreferredUntilDate;
@property(readonly, nonatomic) NSDate *machineStartDate; // @synthesize machineStartDate=_machineStartDate;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *machineBrand; // @synthesize machineBrand=_machineBrand;
@property(readonly, copy, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(readonly, nonatomic) unsigned long long machineType; // @synthesize machineType=_machineType;
@property(readonly, nonatomic) NSUUID *machineUUID; // @synthesize machineUUID=_machineUUID;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 machineUUID:(id)arg2 machineType:(unsigned long long)arg3 machineName:(id)arg4 machineBrand:(id)arg5 activityType:(unsigned long long)arg6 machineStartDate:(id)arg7 machinePreferredUntilDate:(id)arg8;

@end
