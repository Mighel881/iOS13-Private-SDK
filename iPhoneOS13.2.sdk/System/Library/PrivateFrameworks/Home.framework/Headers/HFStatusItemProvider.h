//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFStaticItemProvider.h>

@class HMHome, HMRoom;

@interface HFStatusItemProvider : HFStaticItemProvider
{
    HMHome *_home;
    HMRoom *_room;
}

+ (id)_statusItemClasses;
+ (_Bool)hasStatusItemForServiceType:(id)arg1;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)initWithItems:(id)arg1;

@end
