//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSCoreSpeechServices : NSObject
{
}

+ (long long)getFirstPassRunningMode;
+ (void)requestUpdatedSATAudio;
+ (void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (void)voiceTriggerRTModelForVersion:(NSUInteger)arg1 minorVersion:(NSUInteger)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
+ (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (id)getCoreSpeechXPCConnection;
+ (id)getCoreSpeechServiceConnection;

@end
