//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveEventTracker/PETEventProperty.h>

@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty
{
    NSDictionary *_enumMap;
    BOOL _autoSanitizeValues;
}

// - (void).cxx_destruct;
- (id)longestValueString;
- (NSUInteger)cardinality;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (NSRange)validRange;
- (id)description;
- (id)initWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(BOOL)arg3;

@end

