//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject
{
    NSSet *_scenes;
    id /* block */ _invalidationHandler;
}

@property(readonly, copy, nonatomic) NSSet *scenes; // @synthesize scenes=_scenes;
- (void)invalidate;
- (void)dealloc;
- (id)initWithScenes:(id)arg1 invalidationHandler:(id /* block */)arg2;

@end
