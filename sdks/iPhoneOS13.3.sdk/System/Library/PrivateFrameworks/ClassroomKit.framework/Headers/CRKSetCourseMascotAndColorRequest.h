//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier;

@interface CRKSetCourseMascotAndColorRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSUInteger _mascotType;
    NSUInteger _colorType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger colorType; // @synthesize colorType=_colorType;
@property(nonatomic) NSUInteger mascotType; // @synthesize mascotType=_mascotType;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

