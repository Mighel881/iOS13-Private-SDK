//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding>
{
    NSString *_assetUUID;
    NSString *_momentUUID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *momentUUID; // @synthesize momentUUID=_momentUUID;
@property(readonly, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2;

@end
