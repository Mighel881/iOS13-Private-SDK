//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WLKContentRating : NSObject
{
    NSString *_displayName;
    NSUInteger _ratingValue;
    NSString *_contentRatingSystem;
    NSString *_name;
}

@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *contentRatingSystem; // @synthesize contentRatingSystem=_contentRatingSystem;
@property(readonly, nonatomic) NSUInteger ratingValue; // @synthesize ratingValue=_ratingValue;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
