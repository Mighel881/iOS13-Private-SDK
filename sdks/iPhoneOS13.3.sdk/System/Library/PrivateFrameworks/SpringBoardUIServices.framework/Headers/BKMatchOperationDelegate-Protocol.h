//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/BKOperationDelegate-Protocol.h>

@class BKMatchOperation, BKMatchResultInfo;

@protocol BKMatchOperationDelegate <BKOperationDelegate>

@optional
- (void)matchOperation:(BKMatchOperation *)arg1 failedWithReason:(long long)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 presenceDetectedInLockout:(long long)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 matchedWithResult:(BKMatchResultInfo *)arg2;
@end

