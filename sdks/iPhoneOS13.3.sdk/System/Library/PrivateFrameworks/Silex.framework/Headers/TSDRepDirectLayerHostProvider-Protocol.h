//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, TSDRep;
@protocol TSDRepDirectLayerHosting;

@protocol TSDRepDirectLayerHostProvider <NSObject>
- (void)directLayerHostUpdateRepOverlayLayers:(NSArray *)arg1;
- (void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(NSArray *)arg1;
- (void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(NSArray *)arg1;
- (id <TSDRepDirectLayerHosting>)directLayerHostForRep:(TSDRep *)arg1;
@end

