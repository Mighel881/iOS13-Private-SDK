//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CKConversation, NSString;

@protocol CKConversationListCell 
+ (double)cellHeight;
+ (NSString *)identifierForConversation:(CKConversation *)arg1;
- (void)updateContentsForConversation:(CKConversation *)arg1 fastPreview:(_Bool)arg2;
- (void)updateContentsForConversation:(CKConversation *)arg1;
@end
