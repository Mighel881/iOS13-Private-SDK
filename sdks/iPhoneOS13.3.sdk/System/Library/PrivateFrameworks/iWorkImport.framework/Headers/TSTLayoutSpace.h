//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTCoordinateArray, TSTLayout, TSTLayoutSpaceBezierPathCache, TSTLayoutSpaceBundle, TSTMasterLayout;

__attribute__((visibility("hidden")))
@interface TSTLayoutSpace : NSObject
{
    TSTLayoutSpaceBundle *mBundle;
    int mLayoutSpaceType;
    BOOL mInvalidTableOffset;
    unsigned short mInvalidColumnIndex;
    unsigned int mInvalidRowIndex;
    CDStruct_58eae27c mGridRange;
    BOOL mHeaderColumnsRepeat;
    BOOL mHeaderRowsRepeat;
    double mViewScale;
    CGAffineTransform mTransformToCanvas;
    CGAffineTransform mTransformFromCanvas;
    CGAffineTransform mTransformToDevice;
    CGAffineTransform mTransformFromDevice;
    BOOL mDrawBlackAndWhite;
    BOOL mDrawPreventAntialias;
    CGPoint mTableOffset;
    TSTCoordinateArray *mHeaderRowColumnCoordinates;
    TSTCoordinateArray *mBodyColumnCoordinates;
    TSTCoordinateArray *mHeaderColumnRowCoordinates;
    TSTCoordinateArray *mBodyRowCoordinates;
    CGRect mCachedFrame;
    CGRect mCachedAlignedFrame;
    CGRect mCachedStrokeFrame;
    CGRect mCachedAlignedStrokeFrame;
    TSTLayoutSpaceBezierPathCache *mBezierPathCache;
    BOOL mLayoutDirectionIsLeftToRight;
    struct _opaque_pthread_rwlock_t mLock;
    BOOL mInvalidatedForEditingCell;
}

@property(nonatomic) CGPoint tableOffset; // @synthesize tableOffset=mTableOffset;
@property(nonatomic) BOOL drawPreventAntialias; // @synthesize drawPreventAntialias=mDrawPreventAntialias;
@property(nonatomic) BOOL drawBlackAndWhite; // @synthesize drawBlackAndWhite=mDrawBlackAndWhite;
@property(nonatomic) CGAffineTransform transformFromDevice; // @synthesize transformFromDevice=mTransformFromDevice;
@property(nonatomic) CGAffineTransform transformToDevice; // @synthesize transformToDevice=mTransformToDevice;
@property(nonatomic) CGAffineTransform transformFromCanvas; // @synthesize transformFromCanvas=mTransformFromCanvas;
@property(nonatomic) CGAffineTransform transformToCanvas; // @synthesize transformToCanvas=mTransformToCanvas;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) BOOL headerRowsRepeat; // @synthesize headerRowsRepeat=mHeaderRowsRepeat;
@property(nonatomic) BOOL headerColumnsRepeat; // @synthesize headerColumnsRepeat=mHeaderColumnsRepeat;
@property(readonly, nonatomic) TSTLayoutSpaceBezierPathCache *bezierPathCache; // @synthesize bezierPathCache=mBezierPathCache;
@property(readonly, nonatomic) BOOL layoutDirectionIsLeftToRight; // @synthesize layoutDirectionIsLeftToRight=mLayoutDirectionIsLeftToRight;
@property(readonly, nonatomic) int layoutSpaceType; // @synthesize layoutSpaceType=mLayoutSpaceType;
@property(readonly, nonatomic) TSTLayoutSpaceBundle *bundle; // @synthesize bundle=mBundle;
- (int)validateCoordinateCache:(id)arg1;
- (void)validateCachedFrames;
- (void)drawStrokesInGridRange:(CDStruct_58eae27c)arg1 clearStrokes:(BOOL)arg2 context:(CGContext )arg3;
- (void)p_drawStrokeForGridRow:(unsigned int)arg1 strokeRect:(CDStruct_58eae27c)arg2 clearStroke:(BOOL)arg3 shadowType:(int)arg4 context:(CGContext )arg5;
- (void)p_drawStrokeForGridColumn:(unsigned int)arg1 strokeRect:(CDStruct_58eae27c)arg2 clearStroke:(BOOL)arg3 shadowType:(int)arg4 context:(CGContext )arg5;
- (int)validateTableOffset:(id)arg1;
- (void)validateCoordinateDirection;
- (int)validate:(id)arg1;
- (void)invalidateCoordinatesForEditingCellID:(struct TSUCellCoord)arg1;
- (void)invalidateTableOffset;
- (void)invalidateCoordinatesAfterRow:(unsigned int)arg1;
- (void)invalidateCoordinatesAfterColumn:(unsigned short)arg1;
- (void)invalidateCoordinates;
- (void)unlock;
- (void)lockForWrite;
- (void)lockForRead;
- (id)description;
- (void)dealloc;
- (id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2;
@property(readonly, nonatomic) BOOL isCorner;
@property(readonly, nonatomic) BOOL isRows;
@property(readonly, nonatomic) BOOL isColumns;
@property(readonly, nonatomic) BOOL isRepeat;
@property(readonly, nonatomic) BOOL isFrozen;
@property(readonly, nonatomic) BOOL isMain;
- (BOOL)p_getLayoutDirectionLeftToRight;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
@property(readonly, nonatomic) TSTLayout *layout;

@end

