//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, NSString, TSKDocumentRoot;
@protocol TSWPTextSpanningObject;

@protocol TSWPTextSpanningObject <NSObject>
@property(readonly, nonatomic) NSString *textAttributeUUIDString;
- (void)resetTextAttributeUUIDString;
- (BOOL)isEquivalentToObject:(NSObject<TSWPTextSpanningObject> *)arg1;

@optional
- (void)migrateWithDocumentRoot:(TSKDocumentRoot *)arg1;
- (BOOL)supportsDeepCopyForUndo;
@end

