//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIStoryboardUnwindChain : NSObject
{
    NSMutableArray *_viewControllers;
    NSUInteger _commonAncestorIdx;
    NSUInteger _modalAncestorContainingSourceIdx;
}

// - (void).cxx_destruct;
- (id)debugDescription;
- (void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) UIViewController *modalAncestorContainingSourceViewController;
@property(readonly, nonatomic) UIViewController *commonAncestorViewController;
- (id)initFromSourceViewController:(id)arg1 toDestinationViewController:(id)arg2;

@end

