//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSArray, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBadgeView : UIView <_UIStatusBarDisplayable>
{
    UILabel *_label;
    NSArray *_constraintsWithConstant;
}

@property(retain, nonatomic) NSArray *constraintsWithConstant; // @synthesize constraintsWithConstant=_constraintsWithConstant;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (void)applyStyleAttributes:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(CGRect)arg1;

@end
