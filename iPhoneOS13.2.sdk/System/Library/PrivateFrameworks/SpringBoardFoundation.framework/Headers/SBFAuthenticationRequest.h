//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBFAuthenticationRequest : NSObject
{
    unsigned long long _type;
    long long _source;
    id /* block */ _handler;
    NSString *_passcode;
}

@property(readonly, copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (id)publicDescription;
- (id)initForBiometricAuthenticationWithSource:(long long)arg1;
- (id)initForBiometricAuthenticationWithSource:(long long)arg1 handler:(id /* block */)arg2;
- (id)initForPasscode:(id)arg1 source:(long long)arg2;
- (id)initForPasscode:(id)arg1 source:(long long)arg2 handler:(id /* block */)arg3;
- (id)_initWithType:(unsigned long long)arg1 source:(long long)arg2 passcode:(id)arg3 handler:(id /* block */)arg4;

@end
