//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSScreenshotMetadataHarvester : NSObject
{
}

+ (void)harvestScreenshotMetadataAndRespondToAction:(id)arg1;
+ (void)sendResponseForAction:(id)arg1 withObject:(id)arg2 forKey:(unsigned long long)arg3;
+ (_Bool)canGenerateDocumentForIdentifier:(id)arg1;
+ (void)_grabPDFRepresentationForIdentifier:(id)arg1 withCallback:(id /* block */)arg2;
+ (id)_screenshotServicesDelegateWithIdentifier:(id)arg1;
+ (id)_screenshotServiceForWindowScene:(id)arg1 wantsPrivateDelegate:(_Bool)arg2;
+ (id)_applicationScreenshotServiceWithPrivateDelegate:(_Bool)arg1;
+ (id)screenshotServiceWithIdentifier:(id)arg1;
+ (void)_grabUserActivityTitleWithCallback:(id /* block */)arg1;
+ (id)_contentRectsForMetadata;
+ (void)_crawlView:(id)arg1 executingBlock:(id /* block */)arg2;
+ (void)_crawlViewController:(id)arg1 executingBlock:(id /* block */)arg2;

@end
