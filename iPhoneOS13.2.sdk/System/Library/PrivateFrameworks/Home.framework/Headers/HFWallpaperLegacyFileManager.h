//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject
{
    NSURL *_wallpaperFolderURL;
}

@property(retain, nonatomic) NSURL *wallpaperFolderURL; // @synthesize wallpaperFolderURL=_wallpaperFolderURL;
- (id)filenameForType:(long long)arg1 variant:(long long)arg2;
- (id)clearAllWallpapers;
- (void)migrateCache:(id /* block */)arg1;
- (id)init;

@end
