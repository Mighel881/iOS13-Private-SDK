//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDataSectionManager.h>

#import <PhotosUICore/PXImportSourcesManagerChangeObserver-Protocol.h>

@class NSArray, PHPhotoLibrary, PXImportSourcesManager;

@interface PXImportSourceDataSectionManager : PXDataSectionManager <PXImportSourcesManagerChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;
    PXImportSourcesManager *_importSourcesManager;
    NSArray *_importSources;
}

@property(retain, nonatomic) NSArray *importSources; // @synthesize importSources=_importSources;
@property(readonly, nonatomic) PXImportSourcesManager *importSourcesManager; // @synthesize importSourcesManager=_importSourcesManager;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
// - (void).cxx_destruct;
- (void)importSourcesManager:(id)arg1 didUpdateImportSource:(id)arg2;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (id)createDataSection;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end

