//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@interface CNComposeRecipient (Additions)
- (id)IDSCanonicalAddressForAddress:(id)arg1;
- (id)IDSCanonicalAddress;
- (id)canonicalAddress;
- (void)setCanonicalAddress:(id)arg1;
- (id)rawAddress;
- (struct __CFPhoneNumber )copyPhoneNumber;
- (BOOL)isUnnamedGroup;
- (BOOL)isNotAChildOfUnifiedRecipient;
- (BOOL)isNamedGroup;
- (BOOL)isPhone;
- (BOOL)isEmail;
@end

