//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsContext.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSObject, PHFetchResult;
@protocol OS_dispatch_queue;

@interface PXPeopleDetailsContext : PXPhotosDetailsContext <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchingQueue;
    PHFetchResult *_keyFaceAssetFetchResult;
}

+ (id)photosDetailsContextForAsset:(id)arg1 parentContext:(id)arg2;
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 keyAssets:(id)arg3 enableCuration:(BOOL)arg4 enableKeyAssets:(BOOL)arg5 viewSourceOrigin:(NSUInteger)arg6;
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 viewSourceOrigin:(NSUInteger)arg3;
+ (id)assetCollectionListFetchResultForPeople:(id)arg1 assetCount:(NSUInteger )arg2;
@property(readonly, nonatomic) PHFetchResult *keyFaceAssetFetchResult; // @synthesize keyFaceAssetFetchResult=_keyFaceAssetFetchResult;
// - (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)_displayTitleForPeople:(id)arg1;
- (id)_fetchKeyFaceAssetFetchResultFromPerson:(id)arg1;
- (void)_updateKeyFaceAssetFetchResult;
- (BOOL)shouldUseKeyFace;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (void)didPerformChanges;
- (id)initWithPeople:(id)arg1 parentContext:(id)arg2 assetCollectionsFetch:(id)arg3;
- (id)initWithPeople:(id)arg1 parentContext:(id)arg2;
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;

@end
