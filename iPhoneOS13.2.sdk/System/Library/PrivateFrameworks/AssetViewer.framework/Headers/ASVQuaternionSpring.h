//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ASVQuaternionSpring : NSObject
{
    NSArray *_springs;
    double _response;
    double _dampingRatio;
}

- (void)stepWithDeltaTime:(double)arg1;
- (id)init;
@property(nonatomic) double dampingRatio;
@property(nonatomic) double response;
@property(nonatomic) CDStruct_183601bc velocity;
@property(nonatomic) CDStruct_183601bc target;
@property(nonatomic) CDStruct_183601bc value;
@property(readonly, nonatomic) NSArray *springs;

@end
