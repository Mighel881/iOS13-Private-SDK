//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFAssertionPolicyHandler-Protocol.h>

@class NSArray, NSMutableArray;

@interface PFAssertionPolicyComposite : NSObject <PFAssertionPolicyHandler>
{
    NSMutableArray *_policies;
}

@property(readonly) NSArray *policies; // @synthesize policies=_policies;
// - (void).cxx_destruct;
- (void)notifyAssertion:(id)arg1;
- (void)addPolicy:(id)arg1;
- (id)init;

@end

