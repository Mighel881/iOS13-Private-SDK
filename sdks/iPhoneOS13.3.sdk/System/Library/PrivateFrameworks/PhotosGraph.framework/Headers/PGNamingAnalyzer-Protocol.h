//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, PGGraphNamingProcessor;

@protocol PGNamingAnalyzer <NSObject>
- (NSString *)name;
- (void)runAnalysisWithProgressBlock:(void (^)(double, BOOL ))arg1;
- (id)initWithNamingProcessor:(PGGraphNamingProcessor *)arg1;
@end

