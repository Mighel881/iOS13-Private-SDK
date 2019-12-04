//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>





@class NSDictionary, NSString;

@interface ICLocalStoreAccountProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_storefrontIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void)_copyLocalStoreAccountPropertiesToOtherInstance:(id)arg1 withZone:(struct _NSZone *)arg2;
@property(readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;

@end
