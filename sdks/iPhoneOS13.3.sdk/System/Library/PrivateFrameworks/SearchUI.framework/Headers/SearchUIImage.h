//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

@class UIImage;

@interface SearchUIImage : SFImage
{
    BOOL _useFastPathShadow;
    BOOL _needsTinting;
    UIImage *_uiImage;
    SFImage *_sfImage;
}

+ (id)imageForSuggestionCardSectionType:(int)arg1;
+ (BOOL)isEqualHasSubclassOverrideForImage:(id)arg1;
+ (BOOL)isEqualHasSubclassOverrideForImage1:(id)arg1 image2:(id)arg2;
+ (BOOL)image:(id)arg1 isEqualToImage:(id)arg2;
+ (id)imageWithSFImage:(id)arg1 variantForAppIcon:(NSUInteger)arg2;
+ (id)imageWithSFImage:(id)arg1;
@property(nonatomic) BOOL needsTinting; // @synthesize needsTinting=_needsTinting;
@property(nonatomic) BOOL useFastPathShadow; // @synthesize useFastPathShadow=_useFastPathShadow;
@property(retain, nonatomic) SFImage *sfImage; // @synthesize sfImage=_sfImage;
@property(retain, nonatomic) UIImage *uiImage; // @synthesize uiImage=_uiImage;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)imageData;
- (double)scale;
- (BOOL)isTemplate;
- (BOOL)shouldCropToCircle;
- (double)cornerRadius;
- (CGSize)size;
- (id)loadImage;
- (void)loadImageWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithSFImage:(id)arg1;

@end

