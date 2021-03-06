//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLPhotoLibraryPathManager-Protocol.h>

@class NSString, PLPhotoLibraryPathManagerCore;

@interface PLPhotoLibraryPathManager : NSObject <PLPhotoLibraryPathManager>
{
    PLPhotoLibraryPathManagerCore *_internalPathManager;
    NSString *_singletonPhotoLibraryPath;
}

+ (BOOL)isSystemLibraryURLDefined;
+ (BOOL)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id )arg3;
+ (id)systemLibraryBaseDirectory;
+ (id)systemLibraryURL;
+ (BOOL)isSystemPhotoLibraryURL:(id)arg1;
+ (id)systemLibraryPathManager;
+ (void)assertSingleLibraryMode;
+ (void)enableMultiLibraryMode;
+ (BOOL)isMultiLibraryModeEnabled;
+ (void)throwMultiLibraryAPIMisuse;
+ (void)throwMultiLibraryAPIMisuseForLibraryPath:(id)arg1;
// - (void).cxx_destruct;
- (BOOL)createTimeMachineExclusionPathsWithError:(id )arg1;
- (id)timeMachineExclusionPathForPathType:(unsigned char)arg1;
- (void)enumerateBundleScopesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setOrCompareLibraryURL:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned char)arg2;
- (id)initWithLibraryURL:(id)arg1;
- (id)initWithBaseDirectory:(id)arg1;
- (id)init;

@end

