//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSModalViewControllerBase.h>

#import <CoverSheet/CSModalViewDelegate-Protocol.h>

@protocol CSThermalStatusProviding;

@interface CSTemperatureWarningViewController : CSModalViewControllerBase <CSModalViewDelegate>
{
    id <CSThermalStatusProviding> _thermalStatusProvider;
}

// - (void).cxx_destruct;
- (void)handleSecondaryActionForView:(id)arg1;
- (long long)presentationPriority;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidLoad;
- (id)initWithThermalStatusProvider:(id)arg1;

@end

