//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface AFClientInfo : NSObject <NSCopying, NSSecureCoding>
{
    int _processIdentifier;
    NSString *_processName;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)_descriptionWithIndent:(NSUInteger)arg1;
- (id)description;
- (id)initWithProcessIdentifier:(int)arg1 processName:(id)arg2;
- (id)mutatedCopyWithMutator:(id /* CDUnknownBlockType */)arg1;

@end

