//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NSString;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying>
{
    NSUInteger _protocolVersion;
    NSMutableArray *_airplayReceivers;
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleVersion;
    NSData *_bluetoothAddress;
    int _deviceClass;
    NSString *_deviceUID;
    NSString *_groupName;
    NSString *_groupUID;
    NSMutableArray *_groupedDevices;
    unsigned int _lastSupportedMessageType;
    NSString *_linkAgent;
    NSString *_localizedModelName;
    unsigned int _logicalDeviceCount;
    NSString *_managedConfigDeviceID;
    NSString *_name;
    NSString *_senderDefaultGroupUID;
    unsigned int _sharedQueueVersion;
    NSString *_systemBuildVersion;
    NSString *_systemMediaApplication;
    NSString *_systemPodcastApplication;
    NSString *_tightSyncUID;
    NSString *_uniqueIdentifier;
    BOOL _allowsPairing;
    BOOL _connected;
    BOOL _isAirplayActive;
    BOOL _isGroupLeader;
    BOOL _isProxyGroupPlayer;
    BOOL _supportsACL;
    BOOL _supportsExtendedMotion;
    BOOL _supportsSharedQueue;
    BOOL _supportsSystemPairing;
    BOOL _tightlySyncedGroup;
    struct {
        unsigned int protocolVersion:1;
        unsigned int deviceClass:1;
        unsigned int lastSupportedMessageType:1;
        unsigned int logicalDeviceCount:1;
        unsigned int sharedQueueVersion:1;
        unsigned int allowsPairing:1;
        unsigned int connected:1;
        unsigned int isAirplayActive:1;
        unsigned int isGroupLeader:1;
        unsigned int isProxyGroupPlayer:1;
        unsigned int supportsACL:1;
        unsigned int supportsExtendedMotion:1;
        unsigned int supportsSharedQueue:1;
        unsigned int supportsSystemPairing:1;
        unsigned int tightlySyncedGroup:1;
    } _has;
}

+ (Class)airplayReceiversType;
+ (Class)groupedDevicesType;
@property(retain, nonatomic) NSString *linkAgent; // @synthesize linkAgent=_linkAgent;
@property(retain, nonatomic) NSMutableArray *airplayReceivers; // @synthesize airplayReceivers=_airplayReceivers;
@property(retain, nonatomic) NSString *senderDefaultGroupUID; // @synthesize senderDefaultGroupUID=_senderDefaultGroupUID;
@property(retain, nonatomic) NSString *systemPodcastApplication; // @synthesize systemPodcastApplication=_systemPodcastApplication;
@property(nonatomic) BOOL isAirplayActive; // @synthesize isAirplayActive=_isAirplayActive;
@property(nonatomic) BOOL isGroupLeader; // @synthesize isGroupLeader=_isGroupLeader;
@property(retain, nonatomic) NSMutableArray *groupedDevices; // @synthesize groupedDevices=_groupedDevices;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupUID; // @synthesize groupUID=_groupUID;
@property(retain, nonatomic) NSString *tightSyncUID; // @synthesize tightSyncUID=_tightSyncUID;
@property(nonatomic) BOOL isProxyGroupPlayer; // @synthesize isProxyGroupPlayer=_isProxyGroupPlayer;
@property(nonatomic) BOOL tightlySyncedGroup; // @synthesize tightlySyncedGroup=_tightlySyncedGroup;
@property(nonatomic) unsigned int logicalDeviceCount; // @synthesize logicalDeviceCount=_logicalDeviceCount;
@property(retain, nonatomic) NSString *managedConfigDeviceID; // @synthesize managedConfigDeviceID=_managedConfigDeviceID;
@property(retain, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(nonatomic) unsigned int sharedQueueVersion; // @synthesize sharedQueueVersion=_sharedQueueVersion;
@property(retain, nonatomic) NSData *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(nonatomic) BOOL supportsExtendedMotion; // @synthesize supportsExtendedMotion=_supportsExtendedMotion;
@property(nonatomic) BOOL supportsSharedQueue; // @synthesize supportsSharedQueue=_supportsSharedQueue;
@property(nonatomic) BOOL supportsACL; // @synthesize supportsACL=_supportsACL;
@property(retain, nonatomic) NSString *systemMediaApplication; // @synthesize systemMediaApplication=_systemMediaApplication;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic) BOOL allowsPairing; // @synthesize allowsPairing=_allowsPairing;
@property(nonatomic) BOOL supportsSystemPairing; // @synthesize supportsSystemPairing=_supportsSystemPairing;
@property(nonatomic) unsigned int lastSupportedMessageType; // @synthesize lastSupportedMessageType=_lastSupportedMessageType;
@property(nonatomic) NSUInteger protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *applicationBundleVersion; // @synthesize applicationBundleVersion=_applicationBundleVersion;
@property(retain, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(retain, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property(retain, nonatomic) NSString *localizedModelName; // @synthesize localizedModelName=_localizedModelName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
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
@property(readonly, nonatomic) BOOL hasLinkAgent;
- (id)airplayReceiversAtIndex:(NSUInteger)arg1;
- (NSUInteger)airplayReceiversCount;
- (void)addAirplayReceivers:(id)arg1;
- (void)clearAirplayReceivers;
@property(readonly, nonatomic) BOOL hasSenderDefaultGroupUID;
@property(readonly, nonatomic) BOOL hasSystemPodcastApplication;
@property(nonatomic) BOOL hasIsAirplayActive;
@property(nonatomic) BOOL hasIsGroupLeader;
- (id)groupedDevicesAtIndex:(NSUInteger)arg1;
- (NSUInteger)groupedDevicesCount;
- (void)addGroupedDevices:(id)arg1;
- (void)clearGroupedDevices;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(readonly, nonatomic) BOOL hasGroupUID;
@property(readonly, nonatomic) BOOL hasTightSyncUID;
@property(nonatomic) BOOL hasIsProxyGroupPlayer;
@property(nonatomic) BOOL hasTightlySyncedGroup;
@property(nonatomic) BOOL hasLogicalDeviceCount;
- (int)StringAsDeviceClass:(id)arg1;
- (id)deviceClassAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceClass;
@property(nonatomic) int deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, nonatomic) BOOL hasManagedConfigDeviceID;
@property(readonly, nonatomic) BOOL hasDeviceUID;
@property(nonatomic) BOOL hasSharedQueueVersion;
@property(readonly, nonatomic) BOOL hasBluetoothAddress;
@property(nonatomic) BOOL hasSupportsExtendedMotion;
@property(nonatomic) BOOL hasSupportsSharedQueue;
@property(nonatomic) BOOL hasSupportsACL;
@property(readonly, nonatomic) BOOL hasSystemMediaApplication;
@property(nonatomic) BOOL hasConnected;
@property(nonatomic) BOOL hasAllowsPairing;
@property(nonatomic) BOOL hasSupportsSystemPairing;
@property(nonatomic) BOOL hasLastSupportedMessageType;
@property(nonatomic) BOOL hasProtocolVersion;
@property(readonly, nonatomic) BOOL hasApplicationBundleVersion;
@property(readonly, nonatomic) BOOL hasApplicationBundleIdentifier;
@property(readonly, nonatomic) BOOL hasSystemBuildVersion;
@property(readonly, nonatomic) BOOL hasLocalizedModelName;
@property(readonly, nonatomic) BOOL hasName;
@property(readonly, nonatomic) BOOL hasUniqueIdentifier;

@end
