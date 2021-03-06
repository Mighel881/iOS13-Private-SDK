//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/SBFActionHandling-Protocol.h>

@class NSMutableDictionary, NSMutableSet;
@protocol CSAdjunctListModelDelegate, SBFActionProviding;

@interface CSAdjunctListModel : NSObject <SBFActionHandling>
{
    NSMutableDictionary *_identifiersToItems;
    NSMutableSet *_pendingActions;
    BOOL _suspended;
    id <SBFActionProviding> _contentActionProvider;
    id <CSAdjunctListModelDelegate> _delegate;
}

@property(nonatomic) __weak id <CSAdjunctListModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SBFActionProviding> contentActionProvider; // @synthesize contentActionProvider=_contentActionProvider;
// - (void).cxx_destruct;
- (void)_replayPendingChanges;
- (void)_removeItemForAction:(id)arg1;
- (id)_createItemForAction:(id)arg1;
- (id)_itemForAction:(id)arg1;
- (BOOL)_actionIsInRelevantSlot:(id)arg1;
- (void)_handleLockScreenContentActionInvalidation:(id)arg1;
- (void)_handleLockScreenContentActionAddition:(id)arg1;
- (BOOL)_handleLockScreenContentAction:(id)arg1;
- (BOOL)handleAction:(id)arg1 forProvider:(id)arg2;
- (BOOL)handlesActionWithClass:(Class)arg1;
- (void)resumeItemHandling;
- (void)suspendItemHandling;
- (void)dealloc;
- (id)init;

@end

