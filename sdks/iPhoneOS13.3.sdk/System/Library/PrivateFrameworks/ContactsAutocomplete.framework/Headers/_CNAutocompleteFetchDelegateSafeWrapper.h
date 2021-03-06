//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteFetchDelegate-Protocol.h>

@protocol CNAutocompleteFetchDelegate;

@interface _CNAutocompleteFetchDelegateSafeWrapper : NSObject <CNAutocompleteFetchDelegate>
{
    id <CNAutocompleteFetchDelegate> _delegate;
}

// - (void).cxx_destruct;
- (id /* CDUnknownBlockType */)resultComparatorForAutocompleteFetch:(id)arg1;
- (void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
- (id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
- (BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

