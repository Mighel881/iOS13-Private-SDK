//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastDataParser-Protocol.h>

__attribute__((visibility("hidden")))
@interface WFWeatherHistorical1DayParserV2 : NSObject <WFForecastDataParser>
{
}

- (id)parseForecastConditionsFromObservations:(id)arg1 calendar:(id)arg2;
- (id)parseHistoricalForecastConditionsFromObservations:(id)arg1 forDate:(id)arg2;
- (id)parseHistoricalForecast:(id)arg1 location:(id)arg2 date:(id)arg3 error:(id )arg4;
- (id)parseForecastData:(id)arg1 types:(NSUInteger)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id )arg6 rules:(id)arg7;
- (id)parseForecastData:(id)arg1 types:(NSUInteger)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id )arg6;

@end

