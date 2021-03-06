//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/AFDictationDelegate-Protocol.h>

@class AFDictationConnection, NSString;
@protocol WFDictateTextActionRunningDelegate;

@interface WFDictateTextAction : WFAction <AFDictationDelegate>
{
    id <WFDictateTextActionRunningDelegate> _delegate;
    AFDictationConnection *_dictationConnection;
    NSString *_latestTranscription;
}

@property(copy, nonatomic) NSString *latestTranscription; // @synthesize latestTranscription=_latestTranscription;
@property(retain, nonatomic) AFDictationConnection *dictationConnection; // @synthesize dictationConnection=_dictationConnection;
@property(nonatomic) __weak id <WFDictateTextActionRunningDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (id)recognitionError;
- (void)finishRunningWithError:(id)arg1;
- (void)stopListening;
- (void)cancel;
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

