//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsObserverProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsObserverProtocol-Protocol.h>

@class CSSearchableItem, NSArray;

@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol, _SGSuggestionsServiceContactsConfirmRejectProtocol, _SGSuggestionsServiceContactsObserverProtocol, _SGSuggestionsServiceEventsObserverProtocol>
- (void)resolveFullDownloadRequests:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)fullDownloadRequestBatch:(NSUInteger)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)updateMessages:(NSArray *)arg1 state:(NSUInteger)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)messagesToRefreshWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(NSUInteger)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(NSUInteger)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (BOOL)prepareForRealtimeExtraction:(id )arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(void (^)(NSError *))arg1;
@end

