//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PKCurrencyAmount;

@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding>
{
    NSUInteger _reason;
    PKCurrencyAmount *_amount;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property(nonatomic) NSUInteger reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

