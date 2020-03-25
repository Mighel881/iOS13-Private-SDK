//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewPresenting-Protocol.h>

@class CSLayoutStrategy, NSString;
@protocol CSCoverSheetViewControllerProtocol;

@protocol CSPageViewControllerProtocol <CSCoverSheetViewPresenting>
+ (NSUInteger)requiredCapabilities;
+ (BOOL)isAvailableForConfiguration;
@property(retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property(readonly, nonatomic) BOOL authenticated;
@property(nonatomic, getter=isTransitioning) BOOL transitioning;
@property(nonatomic) __weak id <CSCoverSheetViewControllerProtocol> coverSheetViewController;

@optional
@property(readonly, copy, nonatomic) NSString *pageRole;
- (double)listInsetX;
- (double)customListWidth;
- (NSUInteger)listWidthStrategy;
- (NSUInteger)listLayout;
- (double)minimumDateToListSpacing;
- (double)dateTimeInsetX;
- (NSUInteger)dateTimeLayout;
@end
