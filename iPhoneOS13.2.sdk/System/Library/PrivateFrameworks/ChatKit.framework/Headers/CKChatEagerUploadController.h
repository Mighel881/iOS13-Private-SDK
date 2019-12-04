//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKChatEagerUploadController : NSObject
{
    NSMutableDictionary *_identifierMap;
    NSMutableArray *_uploadUrls;
    NSMutableDictionary *_temporaryURLS;
}

@property(retain, nonatomic) NSMutableDictionary *temporaryURLS; // @synthesize temporaryURLS=_temporaryURLS;
@property(retain, nonatomic) NSMutableArray *uploadUrls; // @synthesize uploadUrls=_uploadUrls;
@property(retain, nonatomic) NSMutableDictionary *identifierMap; // @synthesize identifierMap=_identifierMap;
- (void)asyncCopyFileAtURL:(id)arg1 toDestinationURL:(id)arg2 completion:(id /* block */)arg3;
- (void)addURLToIdentifierMap:(id)arg1 forIdentifier:(id)arg2;
- (void)_uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6;
- (void)uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6;
- (void)uploadPayload:(id)arg1 identifier:(id)arg2 replace:(_Bool)arg3;
- (id)_newTransferForURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3;
- (void)cancelURL:(id)arg1;
- (void)cancelIdentifier:(id)arg1;
- (void)cancelAll;
- (void)didSendComposition;
- (void)removeTemporaryURLForURL:(id)arg1;
- (id)init;

@end
