//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudRecord.h>

@interface HMDCloudLegacyHomeDataVersion3Record : HMDCloudRecord
{
}

+ (id)legacyModelWithHomeDataV3:(id)arg1;
- (NSUInteger)objectEncoding;
- (void)clearData;
- (void)setData:(id)arg1;
- (id)data;
- (id)recordType;
- (BOOL)encodeObjectChange:(id)arg1;
- (id)extractObjectChange;

@end

