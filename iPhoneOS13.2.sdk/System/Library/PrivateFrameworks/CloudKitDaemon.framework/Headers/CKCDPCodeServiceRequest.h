//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, CKCDPCodeServiceRequestProtectedCloudComputeMetadata, CKCDPCodeServiceRequestRequestContext, NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequest : PBRequest <NSCopying>
{
    CKCDPCodeServiceRequestAccountConfig *_accountConfig;
    CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *_assetAuthorizeGetRequestOptions;
    NSMutableArray *_clientConfigs;
    NSString *_functionName;
    CKCDPCodeServiceRequestProtectedCloudComputeMetadata *_protectedCloudComputeMetadata;
    CKCDPCodeServiceRequestRequestContext *_requestContext;
    int _serializationFormat;
    NSData *_serializedParameters;
    NSString *_serviceName;
    struct {
        unsigned int serializationFormat:1;
    } _has;
}

+ (Class)clientConfigType;
@property(retain, nonatomic) CKCDPCodeServiceRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata; // @synthesize protectedCloudComputeMetadata=_protectedCloudComputeMetadata;
@property(retain, nonatomic) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions; // @synthesize assetAuthorizeGetRequestOptions=_assetAuthorizeGetRequestOptions;
@property(retain, nonatomic) CKCDPCodeServiceRequestRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) CKCDPCodeServiceRequestAccountConfig *accountConfig; // @synthesize accountConfig=_accountConfig;
@property(retain, nonatomic) NSMutableArray *clientConfigs; // @synthesize clientConfigs=_clientConfigs;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProtectedCloudComputeMetadata;
@property(readonly, nonatomic) _Bool hasAssetAuthorizeGetRequestOptions;
@property(readonly, nonatomic) _Bool hasRequestContext;
@property(readonly, nonatomic) _Bool hasAccountConfig;
- (id)clientConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientConfigsCount;
- (void)addClientConfig:(id)arg1;
- (void)clearClientConfigs;
- (int)StringAsSerializationFormat:(id)arg1;
- (id)serializationFormatAsString:(int)arg1;
@property(nonatomic) _Bool hasSerializationFormat;
@property(nonatomic) int serializationFormat; // @synthesize serializationFormat=_serializationFormat;
@property(readonly, nonatomic) _Bool hasSerializedParameters;
@property(readonly, nonatomic) _Bool hasFunctionName;
@property(readonly, nonatomic) _Bool hasServiceName;

@end
