//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDConceptIndexManager;

@protocol HDConceptIndexManagerObserver <NSObject>
- (void)conceptIndexManagerDidChangeExecutionState:(NSUInteger)arg1;
- (void)conceptIndexManagerDidBecomeQuiescent:(HDConceptIndexManager *)arg1 samplesProcessedCount:(long long)arg2;
@end

