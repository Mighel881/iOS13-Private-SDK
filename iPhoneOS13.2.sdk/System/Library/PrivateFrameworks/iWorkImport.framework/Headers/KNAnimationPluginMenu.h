//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface KNAnimationPluginMenu : NSObject
{
    NSMutableDictionary *_localizedStringToDirectionMap;
    NSMutableDictionary *_directionToLocalizedStringMap;
    NSMutableArray *_localizedDirections;
    NSMutableArray *_directions;
    unsigned long long _defaultDirection;
}

+ (id)localizedStringForDirection:(unsigned long long)arg1 shortVersion:(_Bool)arg2;
+ (id)animationPluginMenu;
@property(nonatomic) unsigned long long defaultDirection; // @synthesize defaultDirection=_defaultDirection;
@property(readonly, nonatomic) unsigned long long count;
- (unsigned long long)directionForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForDirection:(unsigned long long)arg1;
- (_Bool)containsDirection:(unsigned long long)arg1;
- (void)addDirection:(unsigned long long)arg1 useShortString:(_Bool)arg2;
- (void)addDirection:(unsigned long long)arg1 localizedMenuString:(id)arg2;
@property(readonly, nonatomic) NSArray *directions;
@property(readonly, nonatomic) NSArray *localizedDirections;
- (id)localizedStringForDirection:(unsigned long long)arg1;
- (id)init;

@end
