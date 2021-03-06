//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClusterGeocodingParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_assetLocations;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)assetLocationType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)assetLocationAtIndex:(NSUInteger)arg1;
- (NSUInteger)assetLocationsCount;
- (void)addAssetLocation:(id)arg1;
- (void)clearAssetLocations;
@property(retain, nonatomic) NSMutableArray *assetLocations;

@end

