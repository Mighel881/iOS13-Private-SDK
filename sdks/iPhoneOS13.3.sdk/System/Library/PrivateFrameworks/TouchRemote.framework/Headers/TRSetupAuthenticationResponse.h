//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupAuthenticationResponse : TRResponseMessage
{
    NSSet *_unauthenticatedAccountServices;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSSet *unauthenticatedAccountServices; // @synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

