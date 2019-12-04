//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UICollectionLayoutSupplementaryItem.h>


#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@class NSString;

@interface _UICollectionLayoutBoundarySupplementaryItem : _UICollectionLayoutSupplementaryItem <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    NSString *_elementKind;
    long long _alignment;
    struct CGPoint _offset;
    _Bool _extendsBoundary;
    _Bool _pinToVisibleBounds;
}

+ (id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(struct CGPoint)arg4;
+ (id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3;
@property(readonly, nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) _Bool pinToVisibleBounds; // @synthesize pinToVisibleBounds=_pinToVisibleBounds;
@property(nonatomic) _Bool extendsBoundary; // @synthesize extendsBoundary=_extendsBoundary;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(struct CGPoint)arg4 zIndex:(long long)arg5 contentInsets:(struct NSDirectionalEdgeInsets)arg6 extendsBoundary:(_Bool)arg7 pinToVisibleBounds:(_Bool)arg8;

@end
