//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXActionMenuController.h>

#import <PhotosUICore/PXAssetCollectionActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PHFetchResult, PXCMMSendBackSuggestionSource, PXPhotoKitAssetCollectionActionManager;

@interface PXPhotoDetailsActionMenuController : PXActionMenuController <PXChangeObserver, PXAssetCollectionActionPerformerDelegate>
{
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PHFetchResult *_people;
    PXPhotoKitAssetCollectionActionManager *_assetActionManager;
}

@property(readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetActionManager; // @synthesize assetActionManager=_assetActionManager;
@property(retain, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property(retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource; // @synthesize sendBackSuggestionSource=_sendBackSuggestionSource;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (_Bool)shouldAllowPerformanceOfActionType:(id)arg1;
- (id)availableActionTypes;
- (id)assetCollectionActionManager;
- (id)initWithSelectionManager:(id)arg1 displayTitleInfo:(id)arg2;
- (id)initWithActionManagers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
