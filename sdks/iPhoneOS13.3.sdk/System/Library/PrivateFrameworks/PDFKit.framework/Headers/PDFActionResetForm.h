//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAction.h>


@class NSArray, PDFActionResetFormPrivateVars;

@interface PDFActionResetForm : PDFAction <NSCopying>
{
    PDFActionResetFormPrivateVars *_private2;
}

// - (void).cxx_destruct;
- (id)toolTip;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary )arg1;
- (void)addFieldsToDictionaryRef:(struct __CFDictionary )arg1;
- (const struct __CFDictionary )createDictionaryRef;
- (void)commonInit;
- (id)initWithActionDictionary:(CGPDFDictionary )arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)description;
@property(nonatomic) BOOL fieldsIncludedAreCleared;
@property(copy, nonatomic) NSArray *fields;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

