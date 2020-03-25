//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWScriptsManager-Protocol.h>

@class NSMutableArray, WKWebView;
@protocol SWLogger;

@interface SWScriptsManager : NSObject <SWScriptsManager>
{
    BOOL _readyToExecuteScripts;
    WKWebView *_webView;
    id <SWLogger> _logger;
    NSMutableArray *_queuedExecutableScripts;
}

@property(nonatomic) BOOL readyToExecuteScripts; // @synthesize readyToExecuteScripts=_readyToExecuteScripts;
@property(readonly, nonatomic) NSMutableArray *queuedExecutableScripts; // @synthesize queuedExecutableScripts=_queuedExecutableScripts;
@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
// - (void).cxx_destruct;
- (void)executeQueuedScripts;
- (void)queueExecutableScript:(id)arg1;
- (void)executeScript:(id)arg1;
- (void)removeScript:(id)arg1;
- (void)removeAllScripts;
- (void)addScript:(id)arg1;
- (id)initWithWebView:(id)arg1 documentStateProvider:(id)arg2 logger:(id)arg3;

@end
