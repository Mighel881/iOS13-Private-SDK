//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface ISIconCacheIOS : NSObject
{
    BOOL _initialized;
    NSString *_cacheKeySalt;
    NSURL *_cacheURL;
}

+ (long long)currentDisplayGamut;
+ (id)iconCacheSystemVersionFileURL;
+ (id)cacheFolderURL;
+ (id)cacheContainerURL;
+ (id)UUIDStringForString:(id)arg1;
+ (id)xpcInterface;
@property(retain) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(copy) NSString *cacheKeySalt; // @synthesize cacheKeySalt=_cacheKeySalt;
@property(readonly) BOOL initialized; // @synthesize initialized=_initialized;
// - (void).cxx_destruct;
- (id)iconDataForKey:(id)arg1 ignoreCache:(BOOL)arg2 generatorBlock:(id /* CDUnknownBlockType */)arg3;
- (id)cacheKeyFromBundleIdentifier:(id)arg1 iconDictionary:(id)arg2 preferedIconName:(id)arg3;
- (id)bundleCacheKeyForBundleIdentifier:(id)arg1 cacheKey:(id)arg2 variant:(int)arg3 options:(int)arg4;
- (id)bundleCacheKeyPrefixForBundleIdentifier:(id)arg1;
- (id)initWithCacheURL:(id)arg1 salt:(id)arg2;
- (id)init;

@end

