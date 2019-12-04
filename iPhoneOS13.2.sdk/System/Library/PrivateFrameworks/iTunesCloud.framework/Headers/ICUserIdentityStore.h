//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICUserIdentityStoreBackendDelegate-Protocol.h>


@class ACAccountStore, ICDelegateAccountStore, ICDelegateAccountStoreOptions, ICLocalStoreAccountProperties, ICUserIdentityStoreCoding, ICValueHistory, NSOperationQueue, NSString;
@protocol ICUserIdentityStoreBackend, OS_dispatch_queue;

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding>
{
    ACAccountStore *_accountStore;
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id <ICUserIdentityStoreBackend> _backend;
    ICUserIdentityStoreCoding *_codingHelper;
    ICDelegateAccountStore *_delegateAccountStore;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)testingIdentityStoreWithSingleWriterService:(id)arg1;
+ (id)testingIdentityStoreWithDatabasePath:(id)arg1;
+ (void)_claimSingleWriterStatus;
+ (id)defaultIdentityStore;
@property(readonly, nonatomic) id <ICUserIdentityStoreBackend> _unsafeBackend; // @synthesize _unsafeBackend=_backend;
- (id)_icValidStoreAccountsFromACAccounts:(id)arg1;
- (void)_unregisterForDelegateAccountStoreNotifications:(id)arg1;
- (void)_saveIdentityProperties:(id)arg1 andPostAccountChangeNotification:(_Bool)arg2 forUserIdentity:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_registerForDelegateAccountStoreNotifications:(id)arg1;
- (void)_openDelegateAccountStoreForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_openDelegateAccountStoreWithCompletionHandler:(id /* block */)arg1;
- (void)_initializeLocalStoreAccountProperties;
- (void)_importValuesFromCodingHelper:(id)arg1;
- (void)_existingIdentityPropertiesForUserIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)_dsidForUserIdentity:(id)arg1 completion:(id /* block */)arg2;
- (id)_dsidForTimestamp:(unsigned long long)arg1 history:(id)arg2;
- (void)_dispatchDidChangeNotification:(_Bool)arg1 didDelegateAccountStoreChange:(_Bool)arg2;
- (_Bool)_allowsDelegationForUserIdentity:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_delegateAccountStoreDidChangeNotification:(id)arg1;
- (void)_updateDelegateAccountStoreUsingBlock:(id /* block */)arg1;
- (void)_unsafe_deleteDelegateAccountStore;
- (void)_resetDelegateAccountStoreWithCompletionHandler:(id /* block */)arg1;
- (void)_reloadForExternalChange;
- (void)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)_prepareDelegateAccountStoreWithCompletionHandler:(id /* block */)arg1;
- (void)userIdentityStoreBackendDidChange:(id)arg1;
- (void)getuserIdentitiesForAllStoreAccountsWithCompletionHandler:(id /* block */)arg1;
- (id)userIdentitiesForAllStoreAccountsWithError:(id *)arg1;
- (void)updatePropertiesForLocalStoreAccountUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
@property(readonly, nonatomic) ICLocalStoreAccountProperties *localStoreAccountProperties;
- (void)getUserIdentitiesForManageableAccountsWithCompletionHandler:(id /* block */)arg1;
- (id)userIdentitiesForManageableAccountsWithError:(id *)arg1;
- (id)DSIDForUserIdentity:(id)arg1 outError:(id *)arg2;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;
- (void)synchronize;
- (void)setActiveLockerAccountWithDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActiveAccountWithDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removePropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeDelegateTokensExpiringBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDelegateTokenForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllDelegateTokensWithCompletionHandler:(id /* block */)arg1;
- (void)insertPropertiesForUserIdentity:(id)arg1 andPostAccountChangeNotification:(_Bool)arg2 usingBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)getVerificationContextForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPropertiesForActiveICloudAccountWithCompletionHandler:(id /* block */)arg1;
- (void)getDelegationUUIDsForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)enumerateDelegateTokensWithType:(long long)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)enumerateDelegateTokensUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)_initWithStyle:(long long)arg1 delegateAccountStoreOptions:(id)arg2;
- (id)_initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
