//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface GEOActionComponentMapEntry : PBCodable <NSCopying>
{
    CDStruct_95bda58d _placeDataComponents;
    int _actionComponent;
    struct {
        unsigned int has_actionComponent:1;
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
- (void)setPlaceDataComponents:(int )arg1 count:(NSUInteger)arg2;
- (int)placeDataComponentsAtIndex:(NSUInteger)arg1;
- (void)addPlaceDataComponents:(int)arg1;
- (void)clearPlaceDataComponents;
@property(readonly, nonatomic) int placeDataComponents;
@property(readonly, nonatomic) NSUInteger placeDataComponentsCount;
- (int)StringAsActionComponent:(id)arg1;
- (id)actionComponentAsString:(int)arg1;
@property(nonatomic) BOOL hasActionComponent;
@property(nonatomic) int actionComponent;
- (void)dealloc;

@end

