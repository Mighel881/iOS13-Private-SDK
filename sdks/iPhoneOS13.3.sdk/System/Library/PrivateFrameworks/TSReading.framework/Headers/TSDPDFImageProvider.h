//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDImageProvider.h>

@interface TSDPDFImageProvider : TSDImageProvider
{
    CGPDFDocument mPDFDocument;
    CGSize mNaturalSize;
}

- (CGPDFDocument )p_load;
- (void)p_loadIfNecessary;
- (void)flush;
- (BOOL)hasFlushableContent;
- (void)drawImageInContext:(CGContext )arg1 rect:(CGRect)arg2;
- (BOOL)isValid;
- (CGSize)naturalSize;
- (long long)pageAngle;
- (CGPDFDocument )CGPDFDocument;
- (void)dealloc;

@end

