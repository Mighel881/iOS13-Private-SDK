//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFControlItem.h>

#import <Home/HFPrimaryStateWriter-Protocol.h>

@class HFValueTransformer, NSString;

@interface HFPrimaryStateControlItem : HFControlItem <HFPrimaryStateWriter>
{
    NSString *_primaryStateCharacteristicType;
    HFValueTransformer *_valueTransformer;
}

+ (Class)valueClass;
@property(readonly, nonatomic) HFValueTransformer *valueTransformer; // @synthesize valueTransformer=_valueTransformer;
@property(readonly, copy, nonatomic) NSString *primaryStateCharacteristicType; // @synthesize primaryStateCharacteristicType=_primaryStateCharacteristicType;
// - (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)toggleValue;
- (id)togglePrimaryState;
- (id)writePrimaryState:(long long)arg1;
- (id)writeValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (BOOL)canCopyWithCharacteristicOptions:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 valueTransformer:(id)arg3 displayResults:(id)arg4;

@end
