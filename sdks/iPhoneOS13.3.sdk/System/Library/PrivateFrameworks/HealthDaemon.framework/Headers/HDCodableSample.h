//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>

@class HDCodableHealthObject, NSString;

@interface HDCodableSample : PBCodable <HDDecoding, NSCopying>
{
    long long _dataType;
    double _endDate;
    double _startDate;
    HDCodableHealthObject *_object;
    struct {
        unsigned int dataType:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) HDCodableHealthObject *object; // @synthesize object=_object;
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
@property(nonatomic) BOOL hasEndDate;
@property(nonatomic) BOOL hasStartDate;
@property(nonatomic) BOOL hasDataType;
@property(readonly, nonatomic) BOOL hasObject;
- (BOOL)applyToObject:(id)arg1;

@end
