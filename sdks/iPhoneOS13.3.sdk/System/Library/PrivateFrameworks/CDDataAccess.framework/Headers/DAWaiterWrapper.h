//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject
{
    id <DADataclassLockWatcher> _waiter;
    long long _dataclasses;
    id /* CDUnknownBlockType */ _completionHandler;
    int _waiterNum;
}

@property(readonly, nonatomic) int waiterNum; // @synthesize waiterNum=_waiterNum;
@property(nonatomic) long long dataclasses; // @synthesize dataclasses=_dataclasses;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) id <DADataclassLockWatcher> waiter; // @synthesize waiter=_waiter;
// - (void).cxx_destruct;
- (id)description;
- (id)init;

@end

