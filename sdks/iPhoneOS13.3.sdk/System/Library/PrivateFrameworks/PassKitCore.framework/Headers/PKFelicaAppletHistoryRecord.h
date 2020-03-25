//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKTransitAppletHistoryRecord.h>


@class NSNumber, NSString;

@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord <NSCopying>
{
    NSNumber *_transactionType;
    NSNumber *_sectorCombination;
    NSNumber *_amountType;
    NSString *_transactionID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(copy, nonatomic) NSNumber *amountType; // @synthesize amountType=_amountType;
@property(copy, nonatomic) NSNumber *sectorCombination; // @synthesize sectorCombination=_sectorCombination;
@property(copy, nonatomic) NSNumber *transactionType; // @synthesize transactionType=_transactionType;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
