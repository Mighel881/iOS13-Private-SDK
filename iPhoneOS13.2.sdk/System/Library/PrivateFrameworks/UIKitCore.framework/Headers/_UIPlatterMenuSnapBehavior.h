//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior
{
    UIAttachmentBehavior *_spring1;
    UIAttachmentBehavior *_spring2;
}

@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) double frequency;
@property(nonatomic) double damping;
- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint)arg2;

@end
