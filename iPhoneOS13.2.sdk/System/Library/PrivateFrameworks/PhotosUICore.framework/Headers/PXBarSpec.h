//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class PXExtendedTraitCollection;

@interface PXBarSpec : NSObject <NSCopying>
{
    PXExtendedTraitCollection *_extendedTraitCollection;
}

@property(readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sortedBarItemsByPlacement:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)init;

@end
