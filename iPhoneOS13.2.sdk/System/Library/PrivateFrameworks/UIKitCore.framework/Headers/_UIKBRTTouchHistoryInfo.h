//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchHistoryInfo : NSObject
{
    BOOL _isLeftHand;
    BOOL _isActive;
    BOOL _ignoreForDrift;
    BOOL _ignoreTouch;
    id _touchIdentifier;
    double _touchTime;
    CGPoint _actualLocation;
    CGPoint _errorVector;
}

@property(nonatomic) CGPoint errorVector; // @synthesize errorVector=_errorVector;
@property(nonatomic) BOOL ignoreTouch; // @synthesize ignoreTouch=_ignoreTouch;
@property(nonatomic) BOOL ignoreForDrift; // @synthesize ignoreForDrift=_ignoreForDrift;
@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(nonatomic) BOOL isLeftHand; // @synthesize isLeftHand=_isLeftHand;
@property(nonatomic) CGPoint actualLocation; // @synthesize actualLocation=_actualLocation;
@property(nonatomic) double touchTime; // @synthesize touchTime=_touchTime;
@property(retain, nonatomic) id touchIdentifier; // @synthesize touchIdentifier=_touchIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (id)init;

@end
