//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKConversation, NSString;

@protocol CKConversationListCell <NSObject>
+ (double)cellHeight;
+ (NSString *)identifierForConversation:(CKConversation *)arg1;
- (void)updateContentsForConversation:(CKConversation *)arg1 fastPreview:(BOOL)arg2;
- (void)updateContentsForConversation:(CKConversation *)arg1;
@end

