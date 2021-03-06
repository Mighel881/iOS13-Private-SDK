//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString, SBDeviceApplicationSceneHandle;

@protocol SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride <NSObject>
- (long long)_fallbackInterfaceOrientation;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (BOOL)_suppressInheritedPartStyles;
- (NSString *)statusBarSceneIdentifier;
- (SBDeviceApplicationSceneHandle *)statusBarControllingSceneHandle;
- (CGRect)statusBarAvoidanceFrame;
- (int)statusBarStyleOverridesToSuppress;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (double)_statusBarAlpha;
- (long long)_statusBarStyleForPartWithIdentifier:(NSString *)arg1 suppressingInherited:(BOOL)arg2;
- (NSDictionary *)_statusBarPartStyles;
- (long long)_statusBarStyle;
@end

