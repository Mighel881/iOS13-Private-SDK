//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOVoltaireSimpleTileRequester.h>

@interface GEOFeatureSpecificSimpleTileRequester : GEOVoltaireSimpleTileRequester
{
}

+ (unsigned char)tileProviderIdentifier;
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)_regularTileKeyForTransitLineSelectionTileKey:(const struct _GEOTileKey *)arg1 muid:(unsigned long long *)arg2;

@end
