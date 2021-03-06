//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface QLThumbnailUTICache : NSObject
{
    NSMutableDictionary *_itemTypeCache;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

+ (id)_iWorkUTIs;
+ (id)sharedCache;
@property(retain) NSMutableDictionary *itemTypeCache; // @synthesize itemTypeCache=_itemTypeCache;
// - (void).cxx_destruct;
- (BOOL)requestedBadgeType:(NSUInteger)arg1 isValidForContentType:(id)arg2;
- (BOOL)_contentType:(id)arg1 isEqualToContentTypeInArray:(id)arg2;
- (BOOL)_contentTypeIsIWorkType:(id)arg1;
- (NSUInteger)itemTypeForContentType:(id)arg1;
- (NSUInteger)itemTypeForItem:(id)arg1;
- (NSUInteger)_itemTypeByUTIResolutionForContentType:(id)arg1;
- (id)init;

@end

