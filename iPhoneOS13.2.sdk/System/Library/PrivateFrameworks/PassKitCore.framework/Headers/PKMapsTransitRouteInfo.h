//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSSet, PKCurrencyAmount;

@interface PKMapsTransitRouteInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_transitNetworkIdentifiers;
    PKCurrencyAmount *_cost;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PKCurrencyAmount *cost; // @synthesize cost=_cost;
@property(readonly, nonatomic) NSSet *transitNetworkIdentifiers; // @synthesize transitNetworkIdentifiers=_transitNetworkIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTransitNetworkIdentifiers:(id)arg1 cost:(id)arg2;

@end
