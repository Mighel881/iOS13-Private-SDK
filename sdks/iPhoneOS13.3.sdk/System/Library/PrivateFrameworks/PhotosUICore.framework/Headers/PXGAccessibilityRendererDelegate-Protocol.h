//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSObject, PXGHitTestResult, PXGLayout;
@protocol PXAccessibilityView, PXDisplayAsset;

@protocol PXGAccessibilityRendererDelegate <NSObject>
@property(readonly, nonatomic) BOOL canSelectAccessibilityGroupElementsChildren;
@property(readonly, nonatomic) BOOL canSelectAccessibilityGroupElements;
@property(readonly, nonatomic) PXGLayout *accessibilityRootLayout;
- (void)notifySelectedCellsChanged;
- (void)axScrollToAsset:(id <PXDisplayAsset>)arg1;
- (id <PXDisplayAsset>)assetClosestToAsset:(id <PXDisplayAsset>)arg1 inDirection:(NSUInteger)arg2;
- (NSObject<PXAccessibilityView> *)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (PXGHitTestResult *)accessibilityHitTestResultAtPoint:(CGPoint)arg1;
- (BOOL)itemDidShowDefaultUIAtLocation:(CGPoint)arg1;
- (BOOL)itemDidShowAlternateUIAtLocation:(CGPoint)arg1;
- (BOOL)itemWasRightClickedWithHitTestResult:(PXGHitTestResult *)arg1 location:(CGPoint)arg2;
- (BOOL)itemWasDoubleClickedWithHitTestResult:(PXGHitTestResult *)arg1;
- (void)selectAssets:(NSArray *)arg1;
@end
