//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationExtensionLoader : NSObject
{
    NSMutableDictionary *_loadedHostViewControllerCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *loadedHostViewControllerCache; // @synthesize loadedHostViewControllerCache=_loadedHostViewControllerCache;
// - (void).cxx_destruct;
- (void)_loadViewControllerForExtension:(id)arg1 notificationRequest:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)_loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)clearCacheForNotificationRequest:(id)arg1;
- (void)loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

