//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class IMDMessagePTask, NSArray;

@protocol IMDMessagePTaskStore 
- (_Bool)updateTaskFlagsForPTask:(IMDMessagePTask *)arg1;
- (_Bool)deleteAllCompletedTasks;
- (NSArray *)loadMostRecentMessagePTasks;
- (_Bool)storePTask:(IMDMessagePTask *)arg1;
@end
