//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol _CDPDataHarvester <NSObject>
- (void)loadWithLimit:(NSUInteger)arg1 dataPointReader:(void (^)(id <_CDPDataPoint>))arg2 completion:(void (^)(void))arg3;
@end

