//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSCarrierTokenRequestParameters : NSObject
{
    long long _subscriptionSource;
    NSString *_IMEI;
    NSString *_carrierNonce;
}

@property(readonly, nonatomic) NSString *carrierNonce; // @synthesize carrierNonce=_carrierNonce;
@property(readonly, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(readonly, nonatomic) long long subscriptionSource; // @synthesize subscriptionSource=_subscriptionSource;
- (id)initWithSubscriptionSource:(long long)arg1 IMEI:(id)arg2 carrierNonce:(id)arg3;

@end
