//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CLPBundleId, CLPIndoorCMAttitude, CLPIndoorCMPedometer, CLPIndoorMotionActivity, CLPIndoorPressure, CLPIndoorWifiScan, CLPLocation;

@interface CLPIndoorEvent : PBCodable <NSCopying>
{
    CLPBundleId *_bundleId;
    CLPIndoorCMAttitude *_cmAttitude;
    CLPIndoorCMPedometer *_cmPedometer;
    CLPLocation *_location;
    CLPIndoorMotionActivity *_motionActivity;
    CLPIndoorPressure *_pressure;
    int _type;
    CLPIndoorWifiScan *_wifiScan;
    struct {
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) CLPBundleId *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) CLPIndoorWifiScan *wifiScan; // @synthesize wifiScan=_wifiScan;
@property(retain, nonatomic) CLPIndoorPressure *pressure; // @synthesize pressure=_pressure;
@property(retain, nonatomic) CLPIndoorMotionActivity *motionActivity; // @synthesize motionActivity=_motionActivity;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLPIndoorCMPedometer *cmPedometer; // @synthesize cmPedometer=_cmPedometer;
@property(retain, nonatomic) CLPIndoorCMAttitude *cmAttitude; // @synthesize cmAttitude=_cmAttitude;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasBundleId;
@property(readonly, nonatomic) BOOL hasWifiScan;
@property(readonly, nonatomic) BOOL hasPressure;
@property(readonly, nonatomic) BOOL hasMotionActivity;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasCmPedometer;
@property(readonly, nonatomic) BOOL hasCmAttitude;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

