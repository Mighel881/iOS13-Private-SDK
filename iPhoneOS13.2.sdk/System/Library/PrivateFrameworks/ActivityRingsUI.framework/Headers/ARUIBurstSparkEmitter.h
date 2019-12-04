//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUIKineticSparkEmitter-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ARUIBurstSparkEmitter : NSObject <ARUIKineticSparkEmitter>
{
    float _angle;
    float _emitterStartTime;
    float _steadyStateStartTime;
    unsigned long long _particleCount;
    unsigned long long _bufferOffset;
    // Error parsing type: , name: _position
    // Error parsing type: , name: _burstVector
    // Error parsing type: , name: _burstSwing
    // Error parsing type: , name: _omnidirectionalBurstSwing
    float _initialBurstStartTimeSkewFactorMultiplier;
    unsigned long long _maximumBurstCount;
    float _burstGravity;
    float _initialBurstRate;
    float _steadyStateBurstRate;
    // Error parsing type: , name: _burstVelocity
    // Error parsing type: , name: _burstSizeX
    // Error parsing type: , name: _burstSizeY
    // Error parsing type: , name: _burstLifeSpan
    // Error parsing type: , name: _burstAlpha
    float _firstWindowFinalBirthTime;
    float _firstWindowFinalDeathTime;
    float _secondWindowFinalBirthTime;
    float _secondWindowFinalDeathTime;
    _Bool _omnidirectionalBurst;
    float _angularRotationTime;
}

@property(nonatomic) float angularRotationTime; // @synthesize angularRotationTime=_angularRotationTime;
@property(nonatomic) float emitterStartTime; // @synthesize emitterStartTime=_emitterStartTime;
@property(nonatomic) _Bool omnidirectionalBurst; // @synthesize omnidirectionalBurst=_omnidirectionalBurst;
- (id)updateForTime:(float)arg1;
- (id)updateWithCount:(unsigned long long)arg1 bufferOffset:(unsigned long long)arg2 length:(float)arg3 startTime:(float)arg4 startTimeSkewFactor:(float)arg5 directionalVector:directionalSwing: /* Error: Ran out of types for this method. */;
-     // Error parsing type: 28@0:816f24, name: _rotationSwing:forPercent:
- (id)generateSparks;
- (float)initialBurstRate;
- (unsigned long long)initialBurstCount;
- (void)_updateSteadyStateStartTime;
- (unsigned long long)bufferOffset;
- (void)setBufferOffset:(unsigned long long)arg1;
- (unsigned long long)particleCount;
- (void)setParticleCount:(unsigned long long)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
