//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTResult, NSArray;

@interface ENAsyncReducerState : NSObject
{
    NSArray *_visitedItems;
    NSArray *_pendingItems;
    id _currentItem;
    CUTResult *_currentResult;
    id /* CDUnknownBlockType */ _cancelBlock;
    id /* CDUnknownBlockType */ _continueBlock;
    id /* CDUnknownBlockType */ _stopBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ stopBlock; // @synthesize stopBlock=_stopBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ continueBlock; // @synthesize continueBlock=_continueBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) CUTResult *currentResult; // @synthesize currentResult=_currentResult;
@property(retain, nonatomic) id currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSArray *pendingItems; // @synthesize pendingItems=_pendingItems;
@property(retain, nonatomic) NSArray *visitedItems; // @synthesize visitedItems=_visitedItems;
// - (void).cxx_destruct;
- (void)stopWithResult:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)continueWithResult:(id)arg1;

@end

