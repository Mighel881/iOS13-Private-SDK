//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSCollectionLayoutSupplementaryItem.h>



@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem <NSCopying>
{
    long long _alignment;
    _Bool _extendsBoundary;
    _Bool _pinToVisibleBounds;
    struct CGPoint _offset;
}

+ (id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 absoluteOffset:(struct CGPoint)arg4;
+ (id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3;
@property(readonly, nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) _Bool pinToVisibleBounds; // @synthesize pinToVisibleBounds=_pinToVisibleBounds;
@property(nonatomic) _Bool extendsBoundary; // @synthesize extendsBoundary=_extendsBoundary;
- (id)copyWithContainerAnchor:(id)arg1 itemAnchor:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 alignment:(long long)arg7 offset:(struct CGPoint)arg8 extendsBoundary:(_Bool)arg9 pinToVisibleBounds:(_Bool)arg10;

@end
