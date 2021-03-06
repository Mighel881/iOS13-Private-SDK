//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PSUICellularPlanUniversalReference : NSObject <NSCopying, NSCoding>
{
    NSString *_iccid;
}

+ (id)referenceFromCellularPlanPendingTransfer:(id)arg1;
+ (id)referenceFromDanglingPlanItem:(id)arg1;
+ (id)referenceFromPlanItem:(id)arg1;
@property(retain, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithIccid:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

