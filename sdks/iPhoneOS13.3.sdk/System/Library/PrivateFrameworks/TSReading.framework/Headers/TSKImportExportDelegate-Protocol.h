//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, TSDMovieInfo, TSKWarning;

@protocol TSKImportExportDelegate <NSObject>
- (void)removeWarning:(TSKWarning *)arg1;
- (void)addWarning:(TSKWarning *)arg1;
- (NSArray *)warnings;

@optional
@property(readonly, nonatomic) BOOL isBrowsingVersions;
@property(readonly, nonatomic) BOOL importingDesignDemoDoc;
- (void)showDownloadPermissionAlertIfNeededForDownloadingAssetsWithEstimatedDownloadSize:(long long)arg1 isPrecise:(BOOL)arg2 completion:(void (^)(BOOL))arg3;
- (void)addIncompatibleMovieInfo:(TSDMovieInfo *)arg1 withCompatibilityLevel:(long long)arg2;
@end

