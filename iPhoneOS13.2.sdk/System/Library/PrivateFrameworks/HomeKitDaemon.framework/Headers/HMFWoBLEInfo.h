//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>



@class NSData;

@interface HMFWoBLEInfo : HMFObject <NSSecureCoding>
{
    NSData *_bleIdentifier;
}

+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *bleIdentifier; // @synthesize bleIdentifier=_bleIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBLEIdentifier:(id)arg1;

@end
