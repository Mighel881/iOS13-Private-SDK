//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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
    NSUInteger _defaultDirection;
}

+ (id)localizedStringForDirection:(NSUInteger)arg1 shortVersion:(BOOL)arg2;
+ (id)animationPluginMenu;
@property(nonatomic) NSUInteger defaultDirection; // @synthesize defaultDirection=_defaultDirection;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger count;
- (NSUInteger)directionForIndex:(NSUInteger)arg1;
- (NSUInteger)indexForDirection:(NSUInteger)arg1;
- (BOOL)containsDirection:(NSUInteger)arg1;
- (void)addDirection:(NSUInteger)arg1 useShortString:(BOOL)arg2;
- (void)addDirection:(NSUInteger)arg1 localizedMenuString:(id)arg2;
@property(readonly, nonatomic) NSArray *directions;
@property(readonly, nonatomic) NSArray *localizedDirections;
- (id)localizedStringForDirection:(NSUInteger)arg1;
- (id)init;

@end
