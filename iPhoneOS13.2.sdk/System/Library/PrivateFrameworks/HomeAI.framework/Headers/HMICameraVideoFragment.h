//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSData, NSMutableData, NSURL;

@interface HMICameraVideoFragment : NSObject <NSSecureCoding>
{
    unsigned long long _sequenceNumber;
    NSData *_data;
    NSData *_moovFragment;
    long long _eventTypes;
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly) long long eventTypes; // @synthesize eventTypes=_eventTypes;
@property(readonly, nonatomic) NSData *moovFragment; // @synthesize moovFragment=_moovFragment;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (id)description;
@property(readonly) NSMutableData *fragmentData;
- (id)initWithSequenceNumber:(unsigned long long)arg1 fragmentData:(id)arg2 eventTypes:(long long)arg3 url:(id)arg4;
- (id)initWithSequenceNumber:(unsigned long long)arg1 fragmentData:(id)arg2 eventTypes:(long long)arg3;
- (id)initWithSequenceNumber:(unsigned long long)arg1 data:(id)arg2 moovFragment:(id)arg3 eventTypes:(long long)arg4;
- (id)initWithSequenceNumber:(unsigned long long)arg1 data:(id)arg2 moovFragment:(id)arg3;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
