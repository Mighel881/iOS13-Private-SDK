//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKSyncedFeatures : NSObject
{
    _Bool _isDigitalHealthDisabledInitialized;
    _Bool _isDigitalHealthDisabledPreviousResult;
    _Bool _isSingleDevice;
}

+ (id)sharedInstance;
- (id)description;
- (_Bool)isSupergreenDisabledForTransports:(long long)arg1;
- (_Bool)isSiriPortraitDisabled;
- (_Bool)isIDSMessageGatingDisabled;
- (_Bool)isDigitalHealthDisabledWithIsSingleDevice:(_Bool)arg1 forTransports:(long long)arg2;
- (id)init;

@end
