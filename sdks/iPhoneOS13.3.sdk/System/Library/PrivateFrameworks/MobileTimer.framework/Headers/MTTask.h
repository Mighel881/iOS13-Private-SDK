//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTGCDTimer, NSString;

@interface MTTask : NSObject
{
    NSString *_identifier;
    double _delay;
    id /* CDUnknownBlockType */ _completableBlock;
    MTGCDTimer *_timer;
}

+ (id)taskWithIdentifier:(id)arg1 delay:(double)arg2 completableBlock:(id /* CDUnknownBlockType */)arg3;
+ (id)taskWithIdentifier:(id)arg1 completableBlock:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) MTGCDTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completableBlock; // @synthesize completableBlock=_completableBlock;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;

@end
