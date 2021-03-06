//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEORPPlaceProblem : PBCodable <NSCopying>
{
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    unsigned int _problematicDepartureSequenceIndex;
    struct {
        unsigned int has_componentIndex:1;
        unsigned int has_componentValueIndex:1;
        unsigned int has_problematicDepartureSequenceIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasProblematicDepartureSequenceIndex;
@property(nonatomic) unsigned int problematicDepartureSequenceIndex;
@property(nonatomic) BOOL hasComponentValueIndex;
@property(nonatomic) unsigned int componentValueIndex;
@property(nonatomic) BOOL hasComponentIndex;
@property(nonatomic) unsigned int componentIndex;

@end

