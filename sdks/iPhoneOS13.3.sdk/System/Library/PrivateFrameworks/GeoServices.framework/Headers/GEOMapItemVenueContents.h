//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemVenueContents-Protocol.h>

@class NSArray, NSString;

@interface GEOMapItemVenueContents : NSObject <GEOMapItemVenueContents>
{
    NSString *_title;
    NSArray *_items;
}

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)initWithItemList:(id)arg1;
- (id)initWithTitle:(id)arg1 items:(id)arg2;
- (id)init;

@end

