//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIResponseKitTrainer-Protocol.h>

@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>
{
}

+ (id)sharedTrainer;
- (void)performTrainingForClient:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)moveLanguageModelBundlesFromTemporaryDirectory:(id)arg1 toDestination:(id)arg2 error:(id )arg3;
- (id)_init;

@end

