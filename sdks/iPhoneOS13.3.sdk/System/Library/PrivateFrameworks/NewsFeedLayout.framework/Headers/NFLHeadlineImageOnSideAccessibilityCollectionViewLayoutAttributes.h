//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@class NSString;

@interface NFLHeadlineImageOnSideAccessibilityCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes
{
    NSString *_titleFontName;
    double _titleFontSize;
    double _titleLineHeight;
    NSRange _titleNextToImageRange;
}

@property(nonatomic) NSRange titleNextToImageRange; // @synthesize titleNextToImageRange=_titleNextToImageRange;
- (void)setExcerptLineHeight:(double)arg1;
- (double)excerptLineHeight;
- (void)setExcerptFontSize:(double)arg1;
- (double)excerptFontSize;
- (void)setExcerptFontName:(id)arg1;
- (id)excerptFontName;
// - (void).cxx_destruct;
@property(nonatomic) CGRect titleBellowImageFrame;
@property(nonatomic) CGRect titleNextToImageFrame;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1;

@end

