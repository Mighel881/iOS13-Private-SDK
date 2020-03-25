//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EFQueue, WKProcessPool;

@interface MFWKWebViewFactory : NSObject
{
    EFQueue *_preallocatedWebViews;
    WKProcessPool *_processPool;
}

+ (id)sharedWebViewFactory;
@property(retain, nonatomic) WKProcessPool *processPool; // @synthesize processPool=_processPool;
@property(retain, nonatomic) EFQueue *preallocatedWebViews; // @synthesize preallocatedWebViews=_preallocatedWebViews;
// - (void).cxx_destruct;
- (id)webView;
- (void)preallocateWebViews;
- (id)_instantiateWebView;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)init;

@end
