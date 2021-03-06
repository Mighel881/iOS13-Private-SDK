//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PRAngleMeasurement : NSObject <NSCopying, NSSecureCoding>
{
    double _measurement;
    double _uncertainty;
}

+ (BOOL)supportsSecureCoding;
+ (id)measurementWithAngle:(double)arg1 uncertainty:(double)arg2;
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, nonatomic) double measurement; // @synthesize measurement=_measurement;
- (BOOL)isEqual:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAngle:(double)arg1 uncertainty:(double)arg2;

@end

