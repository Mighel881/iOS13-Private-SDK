//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CCUIModuleSettings : NSObject <NSCopying>
{
    struct CCUILayoutSize _portraitLayoutSize;
    struct CCUILayoutSize _landscapeLayoutSize;
}

// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (struct CCUILayoutSize)layoutSizeForInterfaceOrientation:(long long)arg1;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize)arg1 landscapeLayoutSize:(struct CCUILayoutSize)arg2;

@end
