//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation
{
    NSArray *_favorites;
}

@property(readonly, nonatomic) NSArray *favorites; // @synthesize favorites=_favorites;
// - (void).cxx_destruct;
- (void)processResponse;
- (void)prepareURLRequest:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCaller:(id)arg1;

@end

