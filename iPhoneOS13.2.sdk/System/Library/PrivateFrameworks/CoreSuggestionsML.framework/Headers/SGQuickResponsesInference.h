//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SGQuickResponsesModel, SGQuickResponsesPersonalization, SGQuickResponsesRanking, _PASRng;

@interface SGQuickResponsesInference : NSObject
{
    SGQuickResponsesModel *_model;
    SGQuickResponsesRanking *_ranking;
    SGQuickResponsesPersonalization *_personalization;
    _PASRng *_rng;
}

+ (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(_Bool)arg3 isUsingQuickResponses:(_Bool)arg4 locale:(id)arg5 plistPath:(id)arg6;
+ (void)registerDisplayedQuickResponses:(id)arg1 plistPath:(id)arg2;
+ (id)quickResponsesForMessage:(id)arg1 maxResponses:(unsigned long long)arg2 conversationTurns:(id)arg3 locale:(id)arg4 chunkPath:(id)arg5 plistPath:(id)arg6;
+ (id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4;
+ (id)languageForLocale:(id)arg1 withLanguageDetectionForMessage:(id)arg2;
+ (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4;
+ (id)stringsForQuickResponses:(id)arg1;
- (id)quickResponsesFromReplyTextIds:(id)arg1 config:(id)arg2;
- (id)randomizedReplyTextIdsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
- (id)replyTextIdsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
- (id)replyTextsFromSemanticClasses:(id)arg1 config:(id)arg2;
- (id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4;
- (id)initWithLanguage:(id)arg1 chunkPath:(id)arg2 plistPath:(id)arg3;
- (id)initWithModel:(id)arg1 ranking:(id)arg2 personalization:(id)arg3 rng:(id)arg4;

@end
