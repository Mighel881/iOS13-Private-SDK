//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>
#import <PassKitCore/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitCore/PKPaymentWebServiceDelegate-Protocol.h>

@class CLLocationManager, NSArray, NSHashTable, NSLock, NSMutableArray, NSMutableSet, NSSet, NSString, NSTimer, PKPaymentCredential, PKPaymentEligibilityResponse, PKPaymentPass, PKPaymentProvisioningControllerCredentialQueue, PKPaymentProvisioningResponse, PKPaymentRequirementsResponse, PKPaymentService, PKPaymentSetupMoreInfoItem, PKPaymentSetupProductModel, PKPaymentWebService;
@protocol OS_dispatch_source;

@interface PKPaymentProvisioningController : NSObject <CLLocationManagerDelegate, PKPaymentServiceDelegate, PKPaymentWebServiceDelegate>
{
    _Bool _preflightCompleted;
    NSMutableSet *_tasks;
    NSTimer *_descriptionTimer;
    NSMutableArray *_associatedCredentials;
    _Bool _provisioningUserInterfaceIsVisible;
    _Bool _proxyTargetDeviceWebServiceInUse;
    NSString *_provisioningNonce;
    PKPaymentCredential *_currentCredential;
    NSHashTable *_delegates;
    NSLock *_delegateLock;
    NSSet *_supportedFeatureIdentifierStrings;
    NSSet *_supportedFeatureIdentifierStringsForAccountProvisioning;
    unsigned long long _targetDeviceSupportsTypeF;
    PKPaymentSetupMoreInfoItem *_marketExpressInfoItem;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_source> *_locationTimer;
    id /* block */ _locationCompletion;
    PKPaymentService *_paymentService;
    NSString *_productIdentifier;
    NSString *_referrerIdentifier;
    PKPaymentWebService *_webService;
    long long _state;
    NSString *_localizedProgressDescription;
    NSArray *_purchaseCredentials;
    PKPaymentProvisioningControllerCredentialQueue *_credentialProvisioningQueue;
    PKPaymentSetupProductModel *_paymentSetupProductModel;
    PKPaymentRequirementsResponse *_requirementsResponse;
    PKPaymentEligibilityResponse *_eligibilityResponse;
    PKPaymentProvisioningResponse *_provisioningResponse;
    PKPaymentPass *_provisionedPass;
    NSArray *_moreInfoItems;
    NSSet *_automaticExpressModes;
    NSArray *_allowedPaymentNetworks;
    NSSet *_requiredTransitNetworkIdentifiers;
    NSSet *_allowedFeatureIdentifiers;
}

@property(retain, nonatomic) NSSet *allowedFeatureIdentifiers; // @synthesize allowedFeatureIdentifiers=_allowedFeatureIdentifiers;
@property(retain, nonatomic) NSSet *requiredTransitNetworkIdentifiers; // @synthesize requiredTransitNetworkIdentifiers=_requiredTransitNetworkIdentifiers;
@property(retain, nonatomic) NSArray *allowedPaymentNetworks; // @synthesize allowedPaymentNetworks=_allowedPaymentNetworks;
@property(readonly, nonatomic) NSSet *automaticExpressModes; // @synthesize automaticExpressModes=_automaticExpressModes;
@property(readonly, nonatomic) NSArray *moreInfoItems; // @synthesize moreInfoItems=_moreInfoItems;
@property(readonly, nonatomic) PKPaymentPass *provisionedPass; // @synthesize provisionedPass=_provisionedPass;
@property(readonly, nonatomic) PKPaymentProvisioningResponse *provisioningResponse; // @synthesize provisioningResponse=_provisioningResponse;
@property(readonly, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property(readonly, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // @synthesize requirementsResponse=_requirementsResponse;
@property(readonly, nonatomic) PKPaymentSetupProductModel *paymentSetupProductModel; // @synthesize paymentSetupProductModel=_paymentSetupProductModel;
@property(readonly, nonatomic) PKPaymentProvisioningControllerCredentialQueue *credentialProvisioningQueue; // @synthesize credentialProvisioningQueue=_credentialProvisioningQueue;
@property(readonly, copy, nonatomic) NSArray *purchaseCredentials; // @synthesize purchaseCredentials=_purchaseCredentials;
@property(readonly, copy, nonatomic) NSArray *associatedCredentials; // @synthesize associatedCredentials=_associatedCredentials;
@property(readonly, copy, nonatomic) NSString *localizedProgressDescription; // @synthesize localizedProgressDescription=_localizedProgressDescription;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
- (void)_addAssociatedCredential:(id)arg1;
- (void)_updateLocalizedProgressAndInvalidateTimer;
- (void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;
- (void)featureApplicationChanged:(id)arg1;
- (void)featureApplicationRemoved:(id)arg1;
- (void)featureApplicationAdded:(id)arg1;
- (id)displayableErrorForProvisioningError:(id)arg1;
- (id)displayableErrorForError:(id)arg1;
- (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
- (id)_paymentPassWithPaymentMethodType:(unsigned long long)arg1;
- (id)passesWithPaymentMethodType:(unsigned long long)arg1;
- (_Bool)hasDebitPaymentPass;
- (_Bool)hasCreditPaymentPass;
- (_Bool)hasPaymentPass;
- (void)makePaymentPassDefault:(id)arg1;
- (_Bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;
- (void)_endRequiringUpgradedPasscodeIfNecessary;
- (void)_startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(_Bool)arg1;
- (void)passcodeUpgradeCompleted:(_Bool)arg1;
- (void)preflightPasscodeUpgradeWithCompletion:(id /* block */)arg1;
@property(readonly, nonatomic, getter=isPasscodeUpgradeRequired) _Bool passcodeUpgradeRequired;
@property(readonly, copy, nonatomic) NSArray *allCredentials;
- (id)associatedCredentialsForDefaultBehaviour;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)_downloadMoreInfoItemURLs:(id)arg1 withMetadata:(id)arg2 completion:(id /* block */)arg3;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (_Bool)provisioningUserInterfaceIsVisible;
- (void)_setLocalizedProgressDescription:(id)arg1;
- (void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2;
- (void)_passAlreadyProvisioned;
- (void)_provisioningNonceWithCompletion:(id /* block */)arg1;
- (void)removeProvisionedPass;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (_Bool)_isValidLocation:(id)arg1;
- (void)_loadMoreInfoItemForMarket:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_startLocationSearchWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (void)_verifyPassIsSupportedForExpressInLocalMarket:(id)arg1 completion:(id /* block */)arg2;
- (void)_ingestPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_requestProvisioning:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)ingestPaymentPassForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_noteProvisioningDidEndWithTaskIdentifier:(unsigned long long)arg1;
- (unsigned long long)_noteProvisioningDidBegin;
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resolveProvisioningForCredential:(id)arg1;
- (void)declineTerms;
- (void)acceptTerms;
- (void)_requestEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resolveRequirementsUsingAlreadyProvisionedRemoteCredential:(id)arg1;
- (void)resolveRequirementsUsingProvisioningMethodMetadata:(id)arg1;
- (void)resolveRequirementsUsingProduct:(id)arg1;
@property(readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1;
- (void)_requestRequirements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestRequirements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_queryEligibilityForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_queryRequirementsForCredential:(id)arg1 completion:(id /* block */)arg2;
- (id)_filterPaymentSetupProducts:(id)arg1;
- (void)_setupAccountCredentialForProvisioning:(id)arg1 completion:(id /* block */)arg2;
- (void)setupAccountCredentialForProvisioning:(id)arg1 completion:(id /* block */)arg2;
- (void)setupProductForProvisioning:(id)arg1 includePurchases:(_Bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)requestPurchasesForProduct:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestProvisioningMethodMetadataForProduct:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_mockBrowseBanksResponse;
- (void)browsableBankAppsWithCompletionHandler:(id /* block */)arg1;
- (void)updatePaymentSetupProductModelWithCompletionHandler:(id /* block */)arg1;
- (void)_informDelegatesOfPaymentPassUpdateOnCredential:(id)arg1;
- (void)_downloadRemoteAssetsForPaymentPass:(id)arg1 paymentCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateCredentialWithPaymentPassAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateCredentialWithPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (void)_associateCredential:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (_Bool)_credentialIsValidForSetupConfiguration:(id)arg1;
- (_Bool)_hasSetupConfiguration;
- (void)_associateCredentials:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)associateCredentials:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updateRemoteCredentials:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)retrieveAllAvailableCredentials:(id /* block */)arg1;
- (_Bool)_featureApplicationInValidStateToPresent:(id)arg1;
- (void)setupFeatures:(id /* block */)arg1;
- (void)_addAccountToProductMatchingFeatureIdentifier:(unsigned long long)arg1;
- (id)_fetchOrCreateProductsForIdentifier:(unsigned long long)arg1;
- (void)retrieveAccountCredentials:(id /* block */)arg1;
- (id)_supportedFeatureIdentifierStringsForAccountProvisioning;
- (id)_supportedFeatureIdentifierStrings;
- (void)retrieveRemoteCredentials:(id /* block */)arg1;
- (void)performDeviceCheckInIfNeeded:(id /* block */)arg1;
- (id)_doesDisplayableErrorConstitutePreflightFailure:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(id /* block */)arg1;
- (void)validatePreconditionsAndRegister:(id /* block */)arg1;
- (void)registerDevice:(id /* block */)arg1;
- (void)validatePreconditions:(id /* block */)arg1;
- (void)_setState:(long long)arg1 notify:(_Bool)arg2;
- (void)resetForNewProvisioning;
- (void)reset;
- (long long)_defaultResetState;
- (void)dealloc;
- (id)initWithWebService:(id)arg1 paymentSetupRequest:(id)arg2;
- (id)initWithWebService:(id)arg1;
@property(readonly, nonatomic) _Bool suppressDefaultCardholderNameField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
