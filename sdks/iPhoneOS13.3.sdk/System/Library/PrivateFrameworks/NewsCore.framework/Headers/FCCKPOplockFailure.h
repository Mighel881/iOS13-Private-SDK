//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class FCCKPRecord;

@interface FCCKPOplockFailure : PBCodable <NSCopying>
{
    FCCKPRecord *_recordForOplockFailure;
}

@property(retain, nonatomic) FCCKPRecord *recordForOplockFailure; // @synthesize recordForOplockFailure=_recordForOplockFailure;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRecordForOplockFailure;
- (void)dealloc;

@end

