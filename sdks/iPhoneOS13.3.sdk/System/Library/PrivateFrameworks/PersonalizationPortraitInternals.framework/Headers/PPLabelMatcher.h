//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPLabelMatcher : NSObject
{
    NSDictionary _map;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (NSDictionary )_generateMap;
- (NSUInteger)matchFromLabel:(id)arg1 toLabel:(id)arg2;
- (id)init;

@end

