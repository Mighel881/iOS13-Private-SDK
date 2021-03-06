//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HealthUI/MKMapViewDelegate-Protocol.h>

@class HKLocationReadings, MKMapView, UIButton;

@interface HKRouteView : UIView <MKMapViewDelegate>
{
    MKMapView *_mapView;
    HKLocationReadings *_locationReadings;
    UIButton *_toggleMapTypeButton;
}

@property(retain, nonatomic) UIButton *toggleMapTypeButton; // @synthesize toggleMapTypeButton=_toggleMapTypeButton;
// - (void).cxx_destruct;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)layoutSubviews;
- (void)setLocationReadings:(id)arg1;
- (void)_displayMapRouteForLocationReadings;
- (void)_addAnnotation:(id)arg1 isStartPoint:(BOOL)arg2;
- (void)_toggleMapType;
- (id)routeImageForSharing;
- (void)_setRouteMapType:(NSUInteger)arg1;
- (void)_clearMapViewIfNeeded;
- (id)init;

@end

