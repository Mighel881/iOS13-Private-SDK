//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPReceiverETAControllerDelegate-Protocol.h>
#import <MapsSupport/MSPSenderETAControllerDelegate-Protocol.h>
#import <MapsSupport/MSPSharedTripAvailabiltyDelegate-Protocol.h>
#import <MapsSupport/MSPSharedTripXPCServer-Protocol.h>

@class MSPReceiverETAController, MSPSenderETAController, MSPSharedTripRelay, NSMutableSet, NSXPCListener;
@protocol OS_dispatch_queue;

@interface MSPSharedTripServer : NSObject <NSXPCListenerDelegate, MSPReceiverETAControllerDelegate, MSPSenderETAControllerDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripXPCServer>
{
    MSPSenderETAController *_sendingController;
    MSPReceiverETAController *_receivingController;
    MSPSharedTripRelay *_idsRelay;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

// - (void).cxx_destruct;
- (void)relay:(id)arg1 accountStatusChanged:(BOOL)arg2;
- (void)senderController:(id)arg1 sendMessage:(id)arg2 toGroup:(id)arg3;
- (void)senderController:(id)arg1 sendMessage:(id)arg2 toParticipant:(id)arg3;
- (void)invalidateActiveHandlesForSenderController:(id)arg1;
- (void)senderController:(id)arg1 didInvalidateSharedTripWithError:(id)arg2;
- (void)fetchAccountValidWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)blockSharedTrip:(id)arg1;
- (void)fetchSharedTripsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1;
- (void)fetchActiveHandlesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)stopSharingTrip;
- (void)stopSharingTripWithMessagesGroup:(id)arg1;
- (void)startSharingTripWithMessagesGroup:(id)arg1;
- (void)stopSharingTripWithMessagesContacts:(id)arg1;
- (void)startSharingTripWithMessagesContacts:(id)arg1;
- (void)stopSharingTripWithContacts:(id)arg1;
- (void)startSharingTripWithContacts:(id)arg1;
- (void)fetchSendingIdentityWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)checkin;
- (void)etaController:(id)arg1 sharedTripDidClose:(id)arg2;
- (void)etaController:(id)arg1 sharedTripDidBecomeUnavailable:(id)arg2;
- (void)etaController:(id)arg1 sharedTripDidBecomeAvailable:(id)arg2;
- (void)etaController:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;
- (void)etaController:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;
- (void)_setNotificationCenter:(id)arg1;
- (void)createControllers;
- (id)connections;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)createXPCListener;
- (void)cleanConnections;
- (void)dealloc;
- (id)init;

@end

