//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBHFloatyFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    double _continuousCornerRadius;
    double _titleFontSizeInPortrait;
    double _titleFontSizeInLandscape;
    CGSize _contentBackgroundSize;
    CGPoint _contentBackgroundOffsetFromCenterInPortrait;
    CGPoint _contentBackgroundOffsetFromCenterInLandscape;
}

@property(nonatomic) double titleFontSizeInLandscape; // @synthesize titleFontSizeInLandscape=_titleFontSizeInLandscape;
@property(nonatomic) double titleFontSizeInPortrait; // @synthesize titleFontSizeInPortrait=_titleFontSizeInPortrait;
@property(nonatomic) CGPoint contentBackgroundOffsetFromCenterInLandscape; // @synthesize contentBackgroundOffsetFromCenterInLandscape=_contentBackgroundOffsetFromCenterInLandscape;
@property(nonatomic) CGPoint contentBackgroundOffsetFromCenterInPortrait; // @synthesize contentBackgroundOffsetFromCenterInPortrait=_contentBackgroundOffsetFromCenterInPortrait;
@property(nonatomic) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
@property(nonatomic) CGSize contentBackgroundSize; // @synthesize contentBackgroundSize=_contentBackgroundSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)setTitleFontSizeInAllOrientations:(double)arg1;
- (id)init;

@end
