//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPUI/CDPUIController.h>

@interface CDPUIAccountRecoveryController : CDPUIController
{
}

- (id)_accountRecoveryDevicePickerEscapeOffer;
- (void)_setupDevicePickerController:(id /* CDUnknownBlockType */)arg1;
- (id)_accountRecoveryEscapeOfferForDevice:(id)arg1;
- (void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1;
- (BOOL)performingAccountRecovery;
- (id)devicePicker:(id)arg1 escapeOffersForDevices:(id)arg2;
- (void)devicePicker:(id)arg1 didSelectDevice:(id)arg2;

@end

