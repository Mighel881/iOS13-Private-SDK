//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@class TSDRep;

@interface TSDEditMenuTapGestureRecognizer : UITapGestureRecognizer
{
    TSDRep *mTouchedRep;
    BOOL mIgnoreTargetAction;
}

@property(nonatomic) BOOL ignoreTargetAction; // @synthesize ignoreTargetAction=mIgnoreTargetAction;
- (id)touchedRep;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;

@end
