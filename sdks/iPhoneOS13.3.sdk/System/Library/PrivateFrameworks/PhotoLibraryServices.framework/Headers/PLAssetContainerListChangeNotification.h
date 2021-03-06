//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, NSObject;
@protocol PLAlbumContainer, PLAssetContainerList;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification
{
    NSDictionary *_userInfo;
}

+ (id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<PLAlbumContainer> *albumList;
@property(readonly, nonatomic) id <PLAssetContainerList> assetContainerList;
- (id)description;
- (id)userInfo;
- (id)name;
- (id)_contentRelationshipName;

@end

