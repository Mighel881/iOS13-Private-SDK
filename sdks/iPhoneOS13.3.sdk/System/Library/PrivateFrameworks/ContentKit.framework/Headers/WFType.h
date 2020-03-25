//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface WFType : NSObject <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
@property(readonly, nonatomic) NSString *typeDescription;
@property(readonly, copy, nonatomic) NSString *string;
- (BOOL)isEqualToClass:(Class)arg1;
- (BOOL)isEqualToUTType:(const struct __CFString )arg1;
- (BOOL)isEqualToType:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)conformsToClass:(Class)arg1;
- (BOOL)conformsToUTType:(const struct __CFString )arg1;
- (BOOL)conformsToTypes:(id)arg1;
- (BOOL)conformsToType:(id)arg1;

@end
