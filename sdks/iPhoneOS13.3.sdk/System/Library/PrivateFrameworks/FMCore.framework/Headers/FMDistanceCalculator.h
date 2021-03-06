//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSNumberFormatter, NSUserDefaults;
@protocol FMDistanceCalculatorLocalizationDelegate, OS_dispatch_queue;

@interface FMDistanceCalculator : NSObject
{
    NSObject<FMDistanceCalculatorLocalizationDelegate> *_localizationDelegate;
    NSLocale *_locale;
    NSLocale *_measurementSystemLocale;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_calculationQueue;
    NSNumberFormatter *_formatter;
}

@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calculationQueue; // @synthesize calculationQueue=_calculationQueue;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSLocale *measurementSystemLocale; // @synthesize measurementSystemLocale=_measurementSystemLocale;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) __weak NSObject<FMDistanceCalculatorLocalizationDelegate> *localizationDelegate; // @synthesize localizationDelegate=_localizationDelegate;
// - (void).cxx_destruct;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)_localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)_localizedStringFromNumber:(id)arg1 numberStyle:(NSUInteger)arg2 fractionDigits:(NSUInteger)arg3;
- (id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2;
- (id)futureLocalizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
@property(nonatomic) long long measurementSystem;
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2 measurementSystemLocale:(id)arg3;
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2;
- (id)initWithDefaultsSuiteName:(id)arg1;
- (id)init;

@end

