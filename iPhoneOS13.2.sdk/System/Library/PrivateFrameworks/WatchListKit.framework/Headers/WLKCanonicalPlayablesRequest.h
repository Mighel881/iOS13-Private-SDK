//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKCanonicalPlayablesRequest : WLKRequest
{
    NSString *_canonicalID;
    NSString *_statsID;
}

@property(readonly, copy, nonatomic) NSString *statsID; // @synthesize statsID=_statsID;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (id)initWithStatsID:(id)arg1;
- (id)initWithCanonicalID:(id)arg1;

@end
