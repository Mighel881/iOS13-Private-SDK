//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@interface CRKBlockOperation : CATOperation
{
    id /* CDUnknownBlockType */ _operationBlock;
}

+ (id)blockOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ operationBlock; // @synthesize operationBlock=_operationBlock;
// - (void).cxx_destruct;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)initWithOperationBlock:(id /* CDUnknownBlockType */)arg1;

@end

