//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStoreUI/ISURLOperationDelegate-Protocol.h>

@class NSString, SUClientInterface, SUSectionsResponse;

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate>
{
    NSString *_activeSectionVersionString;
    SUClientInterface *_clientInterface;
    SUSectionsResponse *_sectionsResponse;
    BOOL _shouldUseCache;
}

- (void)_writeSectionsResponseToCache:(id)arg1 forVersion:(id)arg2;
- (void)_setSectionsResponse:(id)arg1;
- (BOOL)_loadSectionsFromNetworkWithDictionary:(id)arg1;
- (BOOL)_loadSectionsFromCacheForVersion:(id)arg1;
- (id)_cachePathForVersion:(id)arg1 create:(BOOL)arg2;
- (void)run;
@property BOOL shouldUseCache;
@property(copy) NSString *activeSectionVersionString;
@property(readonly) SUSectionsResponse *sectionsResponse;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;
- (id)init;

@end

