//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSMutableDictionary;

@interface AMSBuyParams : NSObject <NSCopying>
{
    NSMutableDictionary *_backingDictionary;
}

+ (id)buyParamsWithString:(id)arg1;
// - (void).cxx_destruct;
- (void)_parseBuyParams:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)stringValue;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)importURLEncodedBuyParams:(id)arg1;
@property(readonly) NSDictionary *dictionary;
- (void)clear;
- (id)initWithString:(id)arg1;
- (id)init;

@end

