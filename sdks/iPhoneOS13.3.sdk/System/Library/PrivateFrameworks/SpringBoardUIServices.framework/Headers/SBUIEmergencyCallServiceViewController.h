//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBUIEmergencyCallServiceInterface-Protocol.h>

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface>
{
    long long _backgroundStyle;
    UIColor *_tintColor;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
// - (void).cxx_destruct;
- (void)noteViewMovedOffscreenTemporarily;
- (void)noteTintColorForBackgroundStyleChanged:(id)arg1;
- (void)backgroundStyle:(id /* CDUnknownBlockType */)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

