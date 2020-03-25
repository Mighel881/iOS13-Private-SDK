//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIAutoPlayConfig, VUINowPlayingConfig, VUIPostPlayConfig;

__attribute__((visibility("hidden")))
@interface VUIFeaturesConfiguration : NSObject
{
    VUIPostPlayConfig *_postPlayConfig;
    VUINowPlayingConfig *_nowPlayingConfig;
    VUIAutoPlayConfig *_autoPlayConfig;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) VUIAutoPlayConfig *autoPlayConfig; // @synthesize autoPlayConfig=_autoPlayConfig;
@property(readonly, nonatomic) VUINowPlayingConfig *nowPlayingConfig; // @synthesize nowPlayingConfig=_nowPlayingConfig;
@property(readonly, nonatomic) VUIPostPlayConfig *postPlayConfig; // @synthesize postPlayConfig=_postPlayConfig;
// - (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;
- (id)init;

@end
