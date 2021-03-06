//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLProtectionSpace;

@interface WBUGeneratedPasswordCredentialUpdateRequest : NSObject
{
    BOOL _shouldSaveNewCredential;
    NSString *_username;
    NSString *_generatedPassword;
    NSString *_lastGeneratedPassword;
    NSURLProtectionSpace *_protectionSpace;
    NSURL *_urlForCredential;
}

+ (id)requestWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(BOOL)arg6;
@property(readonly, nonatomic) BOOL shouldSaveNewCredential; // @synthesize shouldSaveNewCredential=_shouldSaveNewCredential;
@property(readonly, nonatomic) NSURL *urlForCredential; // @synthesize urlForCredential=_urlForCredential;
@property(readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // @synthesize protectionSpace=_protectionSpace;
@property(readonly, copy, nonatomic) NSString *lastGeneratedPassword; // @synthesize lastGeneratedPassword=_lastGeneratedPassword;
@property(readonly, copy, nonatomic) NSString *generatedPassword; // @synthesize generatedPassword=_generatedPassword;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
// - (void).cxx_destruct;
- (id)_initRequestWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(BOOL)arg6;

@end

