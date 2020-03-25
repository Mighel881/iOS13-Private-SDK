//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class NSMutableArray, NSTimer, SKFieldNode, SKScene;

@interface ETTapMessage : ETMessage
{
    SKScene *_preVisualizeScene;
    SKFieldNode *_noiseField;
    struct vector<CGPoint, std::__1::allocator<CGPoint>> _points;
    struct vector<double, std::__1::allocator<double>> _times;
    NSMutableArray *_colors;
    double _baseTime;
    NSTimer *_soundTimer;
    NSUInteger _soundIndex;
}

+ (unsigned short)messageType;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (double)messageDuration;
- (void)_displayInScene:(id)arg1 point:(CGPoint)arg2 color:(id)arg3 filled:(BOOL)arg4 withWisp:(BOOL)arg5;
- (id)_animateCircleInner0:(double)arg1 inner1:(double)arg2 outer0:(double)arg3 outer1:(double)arg4 duration:(double)arg5;
- (void)displayInScene:(id)arg1;
- (void)preVisualizeInScene:(id)arg1;
- (id)messageTypeAsString;
- (BOOL)reachedSizeLimit;
- (void)addTapAtPoint:(CGPoint)arg1 time:(double)arg2 color:(id)arg3;
- (double)timeDeltaAtIndex:(NSUInteger)arg1;
- (CGPoint)pointAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger tapCount;
- (id)archiveData;
- (id)initWithArchiveData:(id)arg1;
- (id)init;

@end
