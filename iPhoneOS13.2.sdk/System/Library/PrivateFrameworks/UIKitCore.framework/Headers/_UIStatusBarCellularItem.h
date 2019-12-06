//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class NSString, _UIStatusBarCellularSignalView, _UIStatusBarImageView, _UIStatusBarStringView;
@protocol _UIStatusBarCellularItemTypeStringProvider;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularItem : _UIStatusBarItem
{
    BOOL _showsDisabledSignalBars;
    BOOL _marqueesServiceName;
    id <_UIStatusBarCellularItemTypeStringProvider> _typeStringProvider;
    _UIStatusBarStringView *_serviceNameView;
    _UIStatusBarCellularSignalView *_signalView;
    _UIStatusBarStringView *_networkTypeView;
    _UIStatusBarImageView *_sosView;
    _UIStatusBarImageView *_warningView;
    _UIStatusBarImageView *_callForwardingView;
    _UIStatusBarStringView *_rawStringView;
}

+ (id)rawDisplayIdentifier;
+ (id)callForwardingDisplayIdentifier;
+ (id)sosDisplayIdentifier;
+ (id)typeDisplayIdentifier;
+ (id)nameDisplayIdentifier;
+ (id)warningDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3;
@property(retain, nonatomic) _UIStatusBarStringView *rawStringView; // @synthesize rawStringView=_rawStringView;
@property(retain, nonatomic) _UIStatusBarImageView *callForwardingView; // @synthesize callForwardingView=_callForwardingView;
@property(retain, nonatomic) _UIStatusBarImageView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) _UIStatusBarImageView *sosView; // @synthesize sosView=_sosView;
@property(retain, nonatomic) _UIStatusBarStringView *networkTypeView; // @synthesize networkTypeView=_networkTypeView;
@property(retain, nonatomic) _UIStatusBarCellularSignalView *signalView; // @synthesize signalView=_signalView;
@property(retain, nonatomic) _UIStatusBarStringView *serviceNameView; // @synthesize serviceNameView=_serviceNameView;
@property(nonatomic) __weak id <_UIStatusBarCellularItemTypeStringProvider> typeStringProvider; // @synthesize typeStringProvider=_typeStringProvider;
@property(nonatomic) BOOL marqueesServiceName; // @synthesize marqueesServiceName=_marqueesServiceName;
@property(nonatomic) BOOL showsDisabledSignalBars; // @synthesize showsDisabledSignalBars=_showsDisabledSignalBars;
// - (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_rawStringView;
- (void)_create_callForwardingView;
- (void)_create_warningView;
- (void)_create_sosView;
- (void)_create_networkTypeView;
- (void)_create_serviceNameView;
- (void)_create_signalView;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)_stringForCellularType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (BOOL)_updateSignalView:(id)arg1 withUpdate:(id)arg2 entry:(id)arg3;
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;
- (id)dependentEntryKeys;
@property(readonly, nonatomic) NSString *cellularDataEntryKey;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;

@end
