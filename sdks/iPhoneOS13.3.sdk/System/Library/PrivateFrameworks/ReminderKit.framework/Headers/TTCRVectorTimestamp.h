//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/TTVectorTimestamp.h>

@class CRVectorTimestamp;

@interface TTCRVectorTimestamp : TTVectorTimestamp
{
    CRVectorTimestamp *_crTimestamp;
}

@property(retain, nonatomic) CRVectorTimestamp *crTimestamp; // @synthesize crTimestamp=_crTimestamp;
// - (void).cxx_destruct;
- (id)sortedUUIDs;
- (id)allUUIDs;
- (void)setClock:(NSUInteger)arg1 subclock:(NSUInteger)arg2 forUUID:(id)arg3;
- (void)setClock:(NSUInteger)arg1 forUUID:(id)arg2;
- (NSUInteger)subclockForUUID:(id)arg1;
- (NSUInteger)clockForUUID:(id)arg1;
- (id)clockElementForUUID:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

