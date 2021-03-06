//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXUIMediaProvider.h>

@class NSCache, NSOperationQueue;

@interface PXFileBackedUIMediaProvider : PXUIMediaProvider
{
    NSOperationQueue *_queue;
    NSCache *_cache;
}

// - (void).cxx_destruct;
- (void)_handleImageCreated:(id)arg1 imageKey:(id)arg2;
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(CGSize)arg3 bakeInOrientation:(BOOL)arg4 error:(id )arg5;
- (id)_createImageForKey:(id)arg1 error:(id )arg2;
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* CDUnknownBlockType */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* CDUnknownBlockType */)arg3;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec )arg4;
- (id)init;

@end

