//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, KNAnimationRegistryWithFallbacks, TSDCapabilities;

__attribute__((visibility("hidden")))
@interface KNAnimationContext : NSObject
{
    TSDCapabilities *_capabilities;
    CGColorSpace _colorSpace;
    double _fieldOfViewInRadians;
    double _pixelAspectRatio;
    KNAnimationRegistryWithFallbacks *_registry;
    CALayer *_showLayer;
    double _viewScale;
    CGRect _slideRect;
    CGRect _unscaledSlideRect;
    struct CATransform3D _slideProjectionMatrix;
}

@property(readonly, nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(readonly, nonatomic) CGRect unscaledSlideRect; // @synthesize unscaledSlideRect=_unscaledSlideRect;
@property(readonly, nonatomic) CGRect slideRect; // @synthesize slideRect=_slideRect;
@property(readonly, nonatomic) struct CATransform3D slideProjectionMatrix; // @synthesize slideProjectionMatrix=_slideProjectionMatrix;
@property(readonly, nonatomic) CALayer *showLayer; // @synthesize showLayer=_showLayer;
@property(readonly, nonatomic) KNAnimationRegistryWithFallbacks *registry; // @synthesize registry=_registry;
@property(nonatomic) double pixelAspectRatio; // @synthesize pixelAspectRatio=_pixelAspectRatio;
@property(readonly, nonatomic) double fieldOfViewInRadians; // @synthesize fieldOfViewInRadians=_fieldOfViewInRadians;
@property(nonatomic) CGColorSpace colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, nonatomic) TSDCapabilities *capabilities; // @synthesize capabilities=_capabilities;
// - (void).cxx_destruct;
- (void)updateGeometryToFitShowLayerAtViewScale:(double)arg1;
@property(readonly, nonatomic) double showScale;
- (void)dealloc;
- (id)init;
- (id)initWithShowSize:(CGSize)arg1 viewScale:(double)arg2 showLayer:(id)arg3;

@end

