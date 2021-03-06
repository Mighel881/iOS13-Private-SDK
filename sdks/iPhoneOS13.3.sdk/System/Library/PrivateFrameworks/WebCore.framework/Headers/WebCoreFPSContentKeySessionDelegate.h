//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVContentKeySessionDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface WebCoreFPSContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate>
{
    struct CDMInstanceSessionFairPlayStreamingAVFObjC _parent;
}

- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;
- (BOOL)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)invalidate;
- (id)initWithParent:(struct CDMInstanceSessionFairPlayStreamingAVFObjC )arg1;

@end

