//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAsset, PHAssetCollection, PXDiagnosticsItemProvider, UIViewController;
@protocol PXMovieProviderDelegate;

@interface PXMovieProvider : NSObject
{
    id <PXMovieProviderDelegate> _delegate;
    PHAssetCollection *_assetCollection;
    PHAsset *_keyAsset;
}

@property(readonly, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(nonatomic) __weak id <PXMovieProviderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)ppt_runTest:(id)arg1 options:(id)arg2;
@property(readonly, nonatomic) PXDiagnosticsItemProvider *diagnosticsItemProvider;
@property(readonly, nonatomic) BOOL canPlayMovie;
@property(readonly, nonatomic) UIViewController *movieViewController;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (id)initWithAssetCollection:(id)arg1;
- (id)init;

@end

