//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFStateMachineState, NSSet, NSString;

@interface NFStateMachineEvent : NSObject
{
    NSString *_name;
    NSSet *_states;
    NFStateMachineState *_destinationState;
    id /* block */ _fireBlock;
}

@property(copy, nonatomic) id /* block */ fireBlock; // @synthesize fireBlock=_fireBlock;
@property(retain, nonatomic) NFStateMachineState *destinationState; // @synthesize destinationState=_destinationState;
@property(retain, nonatomic) NSSet *states; // @synthesize states=_states;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)fired:(id)arg1 withOwner:(id)arg2;
- (id)onFire:(id /* block */)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 transitionFromStates:(id)arg2 toState:(id)arg3;

@end
