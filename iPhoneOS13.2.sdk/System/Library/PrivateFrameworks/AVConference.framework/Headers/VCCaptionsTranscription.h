//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCCaptionsTranscription : PBCodable <NSCopying>
{
    NSMutableArray *_segments;
    unsigned int _updateNumber;
    unsigned int _utteranceNumber;
    _Bool _isFinal;
    _Bool _isLocal;
    struct {
        unsigned int isFinal:1;
        unsigned int isLocal:1;
    } _has;
}

+ (Class)segmentsType;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int updateNumber; // @synthesize updateNumber=_updateNumber;
@property(nonatomic) unsigned int utteranceNumber; // @synthesize utteranceNumber=_utteranceNumber;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)segmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentsCount;
- (void)addSegments:(id)arg1;
- (void)clearSegments;
@property(nonatomic) _Bool hasIsFinal;
@property(nonatomic) _Bool hasIsLocal;
- (void)dealloc;

@end
