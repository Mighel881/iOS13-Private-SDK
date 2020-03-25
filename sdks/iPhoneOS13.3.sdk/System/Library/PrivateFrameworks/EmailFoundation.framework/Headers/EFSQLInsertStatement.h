//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLInsertStatementValue-Protocol.h>

@class NSMutableArray, NSMutableOrderedSet, NSString;

@interface EFSQLInsertStatement : NSObject <EFSQLInsertStatementValue>
{
    NSString *_table;
    NSUInteger _conflictResolution;
    NSMutableArray *_values;
    NSMutableOrderedSet *_requiredColumns;
}

@property(retain, nonatomic) NSMutableOrderedSet *requiredColumns; // @synthesize requiredColumns=_requiredColumns;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSUInteger conflictResolution; // @synthesize conflictResolution=_conflictResolution;
@property(retain, nonatomic) NSString *table; // @synthesize table=_table;
// - (void).cxx_destruct;
- (id)addValue;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateBindingIndicesAndValuesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_valuesForNamedBindings:(BOOL)arg1;
- (id)_queryStringForNamedBindings:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSString *queryStringForNamedBindings;
@property(readonly, copy, nonatomic) NSString *queryString;
@property(readonly, nonatomic) BOOL isEmpty;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithTable:(id)arg1 conflictResolution:(NSUInteger)arg2;
- (id)initWithTable:(id)arg1;

@end
