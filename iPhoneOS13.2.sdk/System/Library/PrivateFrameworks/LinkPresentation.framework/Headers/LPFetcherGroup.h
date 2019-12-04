//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPFetcherConfiguration, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPFetcherGroup : NSObject
{
    LPFetcherConfiguration *_configuration;
    long long _responsePolicy;
    id /* block */ _completionHandler;
    NSMutableArray *_tasks;
    _Bool _doneAddingFetchers;
    _Bool _done;
    unsigned int _loggingID;
}

- (void)_completed;
- (void)cancel;
- (id)_responsesRespectingPolicy;
- (void)evaluateCompleteness;
- (void)doneAddingFetchers;
- (void)startFetchesIfNeeded;
- (unsigned long long)numberOfActiveFetches;
- (void)prependFetcher:(id)arg1;
- (void)appendFetcher:(id)arg1;
- (void)_addFetcher:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithPolicy:(long long)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;

@end
