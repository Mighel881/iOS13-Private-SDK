//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class HMHome;

@interface HFPresenceEventFormatter : NSFormatter
{
    NSUInteger _nameType;
    NSUInteger _style;
    HMHome *_home;
}

@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(nonatomic) NSUInteger nameType; // @synthesize nameType=_nameType;
// - (void).cxx_destruct;
- (id)_formattedListForSelectedUsers:(id)arg1 inHome:(id)arg2;
- (id)stringForPresenceEventBuilder:(id)arg1;
- (id)stringForPresenceEvent:(id)arg1;
- (id)initWithHome:(id)arg1;

@end

