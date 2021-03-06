//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUILibraryInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>
{
}

- (id)_storePlatformKindForMediaItem:(id)arg1;
- (void)_restrictQueryToLocalContent:(id)arg1;
- (id)_newDefaultQuery;
- (NSUInteger)_AVTypesForMediaItem:(id)arg1;
- (long long)_availabilityForMediaItem:(id)arg1;
- (void)removeMediaItemsForLibraryItems:(id)arg1;
- (id)stateForLibraryItem:(id)arg1;
- (BOOL)isItemLocalAudiobook:(id)arg1;
- (BOOL)performActionForLibraryItem:(id)arg1;
- (id)exposedPlatformItemKinds;
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;

@end

