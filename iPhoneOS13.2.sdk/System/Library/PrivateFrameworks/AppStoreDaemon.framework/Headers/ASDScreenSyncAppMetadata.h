//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDAppMetadata-Protocol.h>



@class NSNumber, NSString;

@interface ASDScreenSyncAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>
{
    NSString *_accountName;
    NSString *_bundleID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_itemID;
    NSString *_itemName;
    NSNumber *_purchaserDSID;
    NSNumber *_storeFront;
    NSString *_vendorName;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy) NSNumber *storeFront; // @synthesize storeFront=_storeFront;
@property(copy) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(copy) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) NSString *accountName; // @synthesize accountName=_accountName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) long long metadataType;
- (id)initWithBundleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
