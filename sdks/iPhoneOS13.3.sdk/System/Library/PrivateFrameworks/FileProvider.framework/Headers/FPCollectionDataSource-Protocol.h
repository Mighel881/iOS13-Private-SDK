//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol FPCollectionDataSourceDelegate;

@protocol FPCollectionDataSource
@property(nonatomic) __weak id <FPCollectionDataSourceDelegate> delegate;
@property(readonly, nonatomic) BOOL hasMoreIncoming;
- (void)enumerationMightHaveResumed;
- (void)invalidate;
- (void)start;
@end
