//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceComparable-Protocol.h>
#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber;

@interface SAEntryPoint : AceObject <SAAceSerializable, SAAceComparable>
{
}

+ (id)entryPointWithDictionary:(id)arg1 context:(id)arg2;
+ (id)entryPoint;
@property(copy, nonatomic) NSNumber *longitude;
@property(copy, nonatomic) NSNumber *latitude;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

