//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface _ICValueHistoryItem : NSObject <NSSecureCoding>
{
    unsigned long long _timestamp;
    id _value;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 timestamp:(unsigned long long)arg2;

@end
