//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, SBCPlaybackPositionEntity;

@protocol SBCDomainSyncServiceProtocol <NSObject>
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(NSArray *)arg1 completionBlock:(void (^)(BOOL, NSError *, NSArray *))arg2;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1;
- (oneway void)persistPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1 isCheckpoint:(BOOL)arg2 completionBlock:(void (^)(BOOL))arg3;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)beginAccessingPlaybackPositionEntities;
@end
