//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface OADPoint3D : NSObject <NSCopying>
{
    float mX;
    float mY;
    float mZ;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (float)z;
- (float)y;
- (float)x;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;

@end

