//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMSettings.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class NATreeNode, NSString;

@interface HMSettings (HFDebugging) <HFStateDumpBuildable>
+ (id)hf_LoadSettingsWhitelist:(unsigned long long)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_accessorySettingItemAtKeyPath:(id)arg1;
- (id)hf_accessorySettingAtKeyPath:(id)arg1;
- (id)hf_accessorySettingGroupAtKeyPath:(id)arg1;
@property(readonly, nonatomic) NATreeNode *hf_codex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
