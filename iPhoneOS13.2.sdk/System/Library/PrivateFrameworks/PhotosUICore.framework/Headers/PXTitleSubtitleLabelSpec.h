//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class PXLabelSpec;

@interface PXTitleSubtitleLabelSpec : PXViewSpec
{
    PXLabelSpec *_titleLabelSpec;
    PXLabelSpec *_subtitleLabelSpec;
    double _interLabelSpacing;
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;
    struct UIEdgeInsets _padding;
}

+ (id)px_headerTitleSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline; // @synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline;
@property(nonatomic) double interLabelSpacing; // @synthesize interLabelSpacing=_interLabelSpacing;
@property(retain, nonatomic) PXLabelSpec *subtitleLabelSpec; // @synthesize subtitleLabelSpec=_subtitleLabelSpec;
@property(retain, nonatomic) PXLabelSpec *titleLabelSpec; // @synthesize titleLabelSpec=_titleLabelSpec;
@property(readonly, nonatomic) double maximumTitleSubtitleHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
