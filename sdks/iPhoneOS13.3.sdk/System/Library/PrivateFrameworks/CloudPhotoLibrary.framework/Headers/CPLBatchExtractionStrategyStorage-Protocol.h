//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CPLRecordChange, CPLScopedIdentifier, NSString;
@protocol NSFastEnumeration;

@protocol CPLBatchExtractionStrategyStorage <NSObject>
- (NSUInteger)effectiveResourceSizeToUploadForUploadIdentifier:(NSString *)arg1;
- (BOOL)hasChangesInScopeWithIdentifier:(NSString *)arg1;
- (BOOL)removeChange:(CPLRecordChange *)arg1 error:(id )arg2;
- (id <NSFastEnumeration>)allChangesWithScopeIdentifier:(NSString *)arg1;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(CPLScopedIdentifier *)arg2;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(CPLScopedIdentifier *)arg2;
- (id <NSFastEnumeration>)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2 changeType:(NSUInteger)arg3;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2 trashed:(BOOL)arg3;
- (CPLRecordChange *)changeWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
@end

