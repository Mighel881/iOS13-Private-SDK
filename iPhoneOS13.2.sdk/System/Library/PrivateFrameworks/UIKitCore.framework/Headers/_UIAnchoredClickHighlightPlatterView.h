//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIClickHighlightPlatterView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIAnchoredClickHighlightPlatterView : _UIClickHighlightPlatterView
{
    UIView *_anchorView;
}

@property(nonatomic) __weak UIView *anchorView; // @synthesize anchorView=_anchorView;
- (void)deAnchor;
- (void)anchorToContainer;
- (id)initWithTargetedPreview:(id)arg1;

@end
