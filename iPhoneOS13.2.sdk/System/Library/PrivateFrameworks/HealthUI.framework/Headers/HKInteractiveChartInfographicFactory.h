//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKInteractiveChartInfographicFactory : NSObject
{
}

+ (id)_attributedSymbolForAudioClassification:(unsigned long long)arg1 textStyle:(id)arg2;
+ (id)_tableTitleAttributes;
+ (id)_audioTitleAttributes;
+ (id)_itemWithTitleKey:(id)arg1 valueKey:(id)arg2 hideSeparator:(_Bool)arg3;
+ (id)_itemWithTitleKey:(id)arg1 valueKey:(id)arg2;
+ (id)_whoExposureTextItem;
+ (id)_exposureLimitTextItem;
+ (id)_itemForAudioInfographicWithClassification:(unsigned long long)arg1 descriptionKey:(id)arg2;
+ (id)_headphoneAudioExposureInfographic;
+ (id)_environmentalAudioExposureInfographic;
+ (id)infographicViewControllerForDisplayType:(id)arg1;
+ (_Bool)infographicSupportedForDisplayType:(id)arg1;

@end
