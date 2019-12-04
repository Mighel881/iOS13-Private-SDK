//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDate;

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(nonatomic, getter=isLayoutLowDensity) _Bool layoutLowDensity; // @dynamic layoutLowDensity;
@property(nonatomic) _Bool shouldFudgeShortcutsToCauseMaximumPain; // @dynamic shouldFudgeShortcutsToCauseMaximumPain;
@property(nonatomic) _Bool shouldShowWidgetsTeachingView; // @dynamic shouldShowWidgetsTeachingView;
@property(nonatomic, getter=hasSidebarEverBeenVisible) _Bool sidebarEverBeenVisible; // @dynamic sidebarEverBeenVisible;
@property(copy, nonatomic) NSDate *sidebarLearningCadenceCommenceDate; // @dynamic sidebarLearningCadenceCommenceDate;
@property(nonatomic) long long sidebarLearningCadenceEpoch; // @dynamic sidebarLearningCadenceEpoch;
@property(nonatomic, getter=isSidebarPinned) _Bool sidebarPinned; // @dynamic sidebarPinned;
@property(nonatomic, getter=isSidebarVisible) _Bool sidebarVisible; // @dynamic sidebarVisible;
@property(nonatomic) _Bool usesAutomaticHomeScreenEnvironment; // @dynamic usesAutomaticHomeScreenEnvironment;

@end
