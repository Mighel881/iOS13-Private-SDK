//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/CALayerDelegate-Protocol.h>

@class TSDTileStorage, TSKAccessController;
@protocol NSObject, OS_dispatch_queue;

@interface TSDTileProvider : NSObject <CALayerDelegate>
{
    id <NSObject> mTarget;
    TSDTileStorage *mTileStorage;
    TSKAccessController *mAccessController;
    NSObject<OS_dispatch_queue> *mQueue;
    CDStruct_2d1207dd mVisibleTileRect;
}

@property CDStruct_2d1207dd visibleTileRect; // @synthesize visibleTileRect=mVisibleTileRect;
- (id)p_bucketKey;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(CGContext )arg2;
- (void)drawTargetInLayer:(id)arg1 context:(CGContext )arg2;
- (BOOL)canTargetDrawInParallel;
- (BOOL)isTargetOpaque;
- (void)removeStoredImages;
- (void)flush;
- (id)contentsInRect:(CGRect)arg1 contentsScale:(double)arg2 forTile:(id)arg3 atLocation:(CDStruct_73b5d383)arg4 takingReadLock:(BOOL)arg5;
- (void)provideContentsInRect:(CGRect)arg1 contentsScale:(double)arg2 forTile:(id)arg3 atLocation:(CDStruct_73b5d383)arg4 inGroup:(id)arg5 limitedBySemaphore:(id)arg6 takingReadLock:(BOOL)arg7 startBlock:(id /* CDUnknownBlockType */)arg8 completionBlock:(id /* CDUnknownBlockType */)arg9;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 queue:(id)arg2 storage:(id)arg3 accessController:(id)arg4;

@end

