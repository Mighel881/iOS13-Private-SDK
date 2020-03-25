//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, CNDowntimeWhitelist, DMFCommunicationPolicyMonitor, DMFEmergencyModeMonitor, NSMapTable, NSString, STManagementState;
@protocol OS_dispatch_queue;

@interface STConversation : NSObject
{
    NSMapTable *_contextByHandles;
    NSObject<OS_dispatch_queue> *_stateChangeQueue;
    NSObject *_didFetchInitialStateLock;
    BOOL _emergencyModeEnabled;
    BOOL _didFetchInitialScreenTimePolicyState;
    BOOL _didFetchInitialApplicationState;
    BOOL _didFetchInitialEmergencyModeState;
    int _policyNotifyToken;
    int _emergencyModeNotifyToken;
    CNContactStore *_contactsStore;
    CNDowntimeWhitelist *_whitelist;
    STManagementState *_managementState;
    DMFCommunicationPolicyMonitor *_policyMonitor;
    NSString *_bundleIdentifier;
    long long _generalScreenTimePolicy;
    long long _whileLimitedPolicy;
    NSUInteger _currentApplicationState;
    DMFEmergencyModeMonitor *_emergencyModeMonitor;
    STConversation *_me;
    id /* CDUnknownBlockType */ _conversationCompletionHandler;
}

+ (void)requestConversationWithBundleIdentifier:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(copy) id /* CDUnknownBlockType */ conversationCompletionHandler; // @synthesize conversationCompletionHandler=_conversationCompletionHandler;
@property(retain) STConversation *me; // @synthesize me=_me;
@property(readonly) int emergencyModeNotifyToken; // @synthesize emergencyModeNotifyToken=_emergencyModeNotifyToken;
@property(readonly) int policyNotifyToken; // @synthesize policyNotifyToken=_policyNotifyToken;
@property BOOL didFetchInitialEmergencyModeState; // @synthesize didFetchInitialEmergencyModeState=_didFetchInitialEmergencyModeState;
@property BOOL didFetchInitialApplicationState; // @synthesize didFetchInitialApplicationState=_didFetchInitialApplicationState;
@property BOOL didFetchInitialScreenTimePolicyState; // @synthesize didFetchInitialScreenTimePolicyState=_didFetchInitialScreenTimePolicyState;
@property BOOL emergencyModeEnabled; // @synthesize emergencyModeEnabled=_emergencyModeEnabled;
@property(retain) DMFEmergencyModeMonitor *emergencyModeMonitor; // @synthesize emergencyModeMonitor=_emergencyModeMonitor;
@property NSUInteger currentApplicationState; // @synthesize currentApplicationState=_currentApplicationState;
@property long long whileLimitedPolicy; // @synthesize whileLimitedPolicy=_whileLimitedPolicy;
@property long long generalScreenTimePolicy; // @synthesize generalScreenTimePolicy=_generalScreenTimePolicy;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) DMFCommunicationPolicyMonitor *policyMonitor; // @synthesize policyMonitor=_policyMonitor;
@property(retain) STManagementState *managementState; // @synthesize managementState=_managementState;
@property(readonly) CNDowntimeWhitelist *whitelist; // @synthesize whitelist=_whitelist;
@property(readonly) CNContactStore *contactsStore; // @synthesize contactsStore=_contactsStore;
// - (void).cxx_destruct;
- (id)_filteredArrayForKnownHandlesInArray:(id)arg1;
- (id)_contactsByHandle:(id)arg1 error:(id )arg2;
- (void)_populateAllowedContactsByHandlesForContactHandles:(id)arg1 context:(id)arg2;
- (BOOL)_doesContainAtLeastOneContactInHandles:(id)arg1 contactsByHandle:(id)arg2;
- (BOOL)_shouldWhileLimitedAllowHandles:(id)arg1 context:(id)arg2;
- (BOOL)_shouldGeneralScreenTimeAllowHandles:(id)arg1 context:(id)arg2;
- (void)_emergencyModeDidChange;
- (void)_currentApplicationStateDidChange;
- (void)_contactsStoreDidChange;
- (void)_updateAllContextsForNewWhileLimitedPolicyOrWhitelist;
- (void)_screenTimePolicyDidChange;
- (void)_updateAllContextsUpdateGeneral:(BOOL)arg1 updateLimited:(BOOL)arg2 updateCurrentApplicationState:(BOOL)arg3 updateAllowedByContactsHandle:(BOOL)arg4 refreshContacts:(BOOL)arg5 updateEmergencyMode:(BOOL)arg6;
- (void)_updateContext:(id)arg1 forHandles:(id)arg2 updateGeneral:(BOOL)arg3 updateLimited:(BOOL)arg4 updateCurrentApplicationState:(BOOL)arg5 updateAllowedByContactsHandle:(BOOL)arg6 refreshContacts:(BOOL)arg7 updateEmergencyMode:(BOOL)arg8;
- (id)allowableByContactsHandles:(id)arg1;
- (void)dealloc;
- (void)callCompletionHandlerIfNeededWithConversation:(id)arg1 error:(id)arg2;
- (void)_stConversationCommonInitSetupObservationOfStateChanges;
- (void)_stConversationCommonInitWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initSynchronouslyWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 contactStore:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;

@end
