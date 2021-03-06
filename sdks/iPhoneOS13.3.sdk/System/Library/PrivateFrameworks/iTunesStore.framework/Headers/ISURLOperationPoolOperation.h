//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISURLOperation, NSMutableArray;

@interface ISURLOperationPoolOperation : ISOperation
{
    long long _cancelCount;
    BOOL _forwardImmediately;
    NSMutableArray *_operations;
}

- (void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2;
- (void)run;
@property(readonly, nonatomic) ISURLOperation *mainOperation;
- (BOOL)containsOperation:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)dealloc;

@end

