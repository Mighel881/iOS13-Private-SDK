//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface NFEventTrigger : NSObject
{
    BOOL _fireOnce;
    BOOL _fireOnAny;
    NSString *_key;
    NSSet *_events;
    id /* CDUnknownBlockType */ _block;
}

@property(readonly, nonatomic) BOOL fireOnAny; // @synthesize fireOnAny=_fireOnAny;
@property(readonly, nonatomic) BOOL fireOnce; // @synthesize fireOnce=_fireOnce;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) NSSet *events; // @synthesize events=_events;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
- (id)initWithKey:(id)arg1 fireOnce:(BOOL)arg2 fireOnAny:(BOOL)arg3 events:(id)arg4 block:(id /* CDUnknownBlockType */)arg5;

@end

