//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFStateMachineTransition.h>

@class NSString;

@interface PFStateMachineSubflowTransition : PFStateMachineTransition
{
    NSString *_subflowName;
}

@property(readonly) NSString *subflowName; // @synthesize subflowName=_subflowName;
// - (void).cxx_destruct;
- (id)description;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (void)performAction:(id)arg1;
- (id)returnDestination:(id)arg1;
- (id)destination:(id)arg1;
- (id)initWithEventName:(id)arg1 subflow:(id)arg2 to:(id)arg3;

@end

