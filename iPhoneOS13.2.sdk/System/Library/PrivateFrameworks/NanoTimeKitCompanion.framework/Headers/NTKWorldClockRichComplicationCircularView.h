//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, NTKWorldClockRichComplicationHandsView, UIColor, UILabel, WorldClockCity;

@interface NTKWorldClockRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    struct {
        double cityNameFontSize;
        double cityNameBaselineOffsetNorthSide;
        double cityNameBaselineOffsetSouthSide;
        double dialDiameter;
        struct CGSize majorTickSize;
        struct CGSize minorTickSize;
    } _constants;
    NTKRichComplicationDialView *_dialView;
    UILabel *_cityNameLabel;
    NTKWorldClockRichComplicationHandsView *_handsView;
    WorldClockCity *_city;
    struct NSNumber *_clockTimerToken;
    _Bool _positionLabelNorthSide;
    UIColor *_daytimeBackgroundColor;
    UIColor *_daytimeHandsColor;
    UIColor *_daytimeHandsDotColor;
    UIColor *_nighttimeBackgroundColor;
    UIColor *_nighttimeHandsColor;
    UIColor *_nighttimeHandsDotColor;
}

- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (_Bool)_shouldUseDaytimeColoring;
@property(retain, nonatomic) UIColor *nighttimeHandsDotColor; // @synthesize nighttimeHandsDotColor=_nighttimeHandsDotColor;
@property(retain, nonatomic) UIColor *nighttimeHandsColor; // @synthesize nighttimeHandsColor=_nighttimeHandsColor;
@property(retain, nonatomic) UIColor *nighttimeBackgroundColor; // @synthesize nighttimeBackgroundColor=_nighttimeBackgroundColor;
@property(retain, nonatomic) UIColor *daytimeHandsDotColor; // @synthesize daytimeHandsDotColor=_daytimeHandsDotColor;
@property(retain, nonatomic) UIColor *daytimeHandsColor; // @synthesize daytimeHandsColor=_daytimeHandsColor;
@property(retain, nonatomic) UIColor *daytimeBackgroundColor; // @synthesize daytimeBackgroundColor=_daytimeBackgroundColor;
- (void)_updateUI;
- (void)_stopClockUpdates;
- (void)_startClockUpdates;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_applyPausedUpdate;
- (void)setPaused:(_Bool)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end
