//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AXRTTSettingsListenerHelper : NSObject
{
    void _listenerAddress;
    NSMutableArray *_selectorKeys;
}

// - (void).cxx_destruct;
- (void)dealloc;
- (void)addSelectorKey:(SEL)arg1;
- (id)initWithListenerAddress:(void )arg1;

@end

