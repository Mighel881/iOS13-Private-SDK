//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding>
{
    HMFKey *_deviceIRK;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)identityWithRPIdentity:(id)arg1;
@property(readonly, copy) HMFKey *deviceIRK; // @synthesize deviceIRK=_deviceIRK;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)logIdentifier;
- (BOOL)isEqualToRPIndentity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)shortDescription;
- (id)initWithDeviceIRK:(id)arg1;
- (id)init;

@end

