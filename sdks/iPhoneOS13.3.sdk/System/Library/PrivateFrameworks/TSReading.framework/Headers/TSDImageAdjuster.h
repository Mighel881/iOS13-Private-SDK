//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject
{
    TSDImageAdjustments *mImageAdjustments;
}

- (CGImage )p_newImageFromCIImage:(id)arg1 underlyingImage:(CGImage )arg2;
- (CGImage )newFilteredImageForImage:(CGImage )arg1 enhancedImage:(CGImage )arg2;
- (void)dealloc;
- (id)initWithImageAdjustments:(id)arg1;
- (id)init;

@end

