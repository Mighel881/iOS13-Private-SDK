//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/MCProfileConnectionObserver-Protocol.h>

@protocol CRCarPlayPreferencesDelegate;

@interface CRCarPlayPreferences : NSObject <MCProfileConnectionObserver>
{
    BOOL _cachedCarPlayAllowed;
    id <CRCarPlayPreferencesDelegate> _preferencesDelegate;
}

@property(nonatomic) BOOL cachedCarPlayAllowed; // @synthesize cachedCarPlayAllowed=_cachedCarPlayAllowed;
@property(nonatomic) __weak id <CRCarPlayPreferencesDelegate> preferencesDelegate; // @synthesize preferencesDelegate=_preferencesDelegate;
// - (void).cxx_destruct;
- (BOOL)isWirelessCarPlayEnabled;
- (BOOL)isCarPlayAllowed;
- (BOOL)_isCarPlayAllowed;
- (void)handleAssistantPreferencesChanged:(id)arg1;
- (void)handleAssistantLanguageChanged:(id)arg1;
- (BOOL)isCarPlayCapable;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_updateCarPlayAllowed;
- (void)dealloc;
- (id)init;

@end

