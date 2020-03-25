//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_bookedTableSessionId;
    NSMutableArray *_bookedTables;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_bookedTableSessionId:1;
        unsigned int read_bookedTables:1;
        unsigned int wrote_bookedTableSessionId:1;
        unsigned int wrote_bookedTables:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)bookedTableType;
// - (void).cxx_destruct;
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
- (id)bookedTableAtIndex:(NSUInteger)arg1;
- (NSUInteger)bookedTablesCount;
- (void)_addNoFlagsBookedTable:(id)arg1;
- (void)addBookedTable:(id)arg1;
- (void)clearBookedTables;
@property(retain, nonatomic) NSMutableArray *bookedTables;
- (void)_readBookedTables;
@property(retain, nonatomic) NSString *bookedTableSessionId;
@property(readonly, nonatomic) BOOL hasBookedTableSessionId;
- (void)_readBookedTableSessionId;
- (id)initWithData:(id)arg1;
- (id)init;

@end
