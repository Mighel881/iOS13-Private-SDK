//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>



@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByParentReminderID : REMStoreInvocation <NSSecureCoding>
{
    REMObjectID *_parentReminderID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) REMObjectID *parentReminderID; // @synthesize parentReminderID=_parentReminderID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentReminderID:(id)arg1;

@end
