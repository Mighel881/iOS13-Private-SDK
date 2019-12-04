//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXBrowserVisibleContentSnapshot.h>

@class NSArray;
@protocol PXDisplayAssetDataSource;

@interface _PXBrowserDataSourceVisibleContentSnapshot : PXBrowserVisibleContentSnapshot
{
    NSArray *_indexPaths;
    id <PXDisplayAssetDataSource> _dataSource;
    unsigned long long _dateType;
}

@property(readonly, nonatomic) unsigned long long dateType; // @synthesize dateType=_dateType;
@property(readonly, nonatomic) id <PXDisplayAssetDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
- (id)dateInterval;
- (id)initWithDateIntervalGranularity:(unsigned long long)arg1;
- (id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 dateType:(unsigned long long)arg4;

@end
