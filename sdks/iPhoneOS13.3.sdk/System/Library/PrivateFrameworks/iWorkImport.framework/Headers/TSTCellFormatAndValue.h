//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSDate, NSString, TSKFormat, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSTCellFormatAndValue : NSObject <NSCopying, TSTCellDiffing, TSSPropertyCommandSerializing>
{
    unsigned int _valueType:8;
    BOOL _useAllSpareFormats;
    BOOL _suppressApplyValue;
    BOOL _applySpareFormatOnly;
    int _spareFormatType;
    BOOL _boolValue;
    struct TSUDecimal _decimalValue;
    NSObject *_objValue;
    NSString *_formattedValue;
    TSWPStorage *_formattedRichTextStorage;
    unsigned short _explicitFlags;
    unsigned int _cellFormatKind;
    TSKFormat *_numberFormat;
    TSKFormat *_currencyFormat;
    TSKFormat *_dateFormat;
    TSKFormat *_durationFormat;
    TSKFormat *_booleanFormat;
    TSKFormat *_textFormat;
}

+ (id)cellDiffProperties;
+ (id)formatAndValueFromCell:(id)arg1 applySpareFormatOnly:(int)arg2;
+ (id)formatAndValueFromRichTextCell:(id)arg1 updatingStorageWithBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2 forceNoContent:(BOOL)arg3;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)p_formatForFormatType:(unsigned int)arg1;
- (void)saveToPropertyCommandMessage:(struct Message )arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message )arg1 unarchiver:(id)arg2;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (void)applyToCell:(id)arg1;
- (id)cellValueWithLocale:(id)arg1;
- (BOOL)hasStringContentMatchingCell:(id)arg1;
- (id)getCurrentFormat;
@property(readonly, nonatomic) BOOL isApplySpareFormatOnly;
@property(readonly, nonatomic) BOOL isFormulaSyntaxError;
@property(readonly, nonatomic) struct TSUDecimal numberOrCurrencyDecimalValue;
@property(readonly, nonatomic) int valueType;
- (id)p_copyStorage:(id)arg1;
- (id)copyForApplyingNoContentWithSuppressApplyValue:(BOOL)arg1;
- (id)copyForNotApplyingValue;
- (id)copyForApplyingNoContent;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2 forceNoContent:(BOOL)arg3 applySpareFormatOnly:(int)arg4;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2;
@property(readonly, nonatomic) TSWPStorage *richTextOrErrorTextStorageValue;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) NSDate *dateValue;

@end
