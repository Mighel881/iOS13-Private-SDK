//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString, WBBookmarksDatabaseHealthInformation, WebBookmark, WebBookmarkList;

@protocol WBBookmarkProvider 
- (WBBookmarksDatabaseHealthInformation *)databaseHealthInformation;
- (WebBookmark *)bookmarkWithID:(int)arg1;
- (NSArray *)readingListBookmarksMatchingString:(NSString *)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(_Bool)arg3;
- (WebBookmarkList *)readingListWithUnreadOnly:(_Bool)arg1 filteredUsingString:(NSString *)arg2;
- (NSArray *)bookmarksMatchingString:(NSString *)arg1;
- (void)enumerateBookmarks:(_Bool)arg1 andReadingListItems:(_Bool)arg2 matchingString:(NSString *)arg3 usingBlock:(void (^)(NSString *, NSString *, WebBookmark * (^)(void)))arg4;
@end
