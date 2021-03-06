//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>

@class HDCodableFHIRResourceForAPI, HDCodableSample, NSString;

@interface HDCodableClinicalRecord : PBCodable <HDDecoding, NSCopying>
{
    NSString *_displayName;
    HDCodableFHIRResourceForAPI *_fHIRResource;
    HDCodableSample *_sample;
}

@property(retain, nonatomic) HDCodableFHIRResourceForAPI *fHIRResource; // @synthesize fHIRResource=_fHIRResource;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasFHIRResource;
@property(readonly, nonatomic) BOOL hasDisplayName;
@property(readonly, nonatomic) BOOL hasSample;
- (BOOL)applyToObject:(id)arg1 error:(out id )arg2;
- (BOOL)applyToObject:(id)arg1;

@end

