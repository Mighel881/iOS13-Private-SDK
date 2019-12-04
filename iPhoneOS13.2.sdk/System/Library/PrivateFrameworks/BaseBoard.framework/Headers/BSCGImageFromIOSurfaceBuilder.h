//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSurface;

@interface BSCGImageFromIOSurfaceBuilder : NSObject
{
    IOSurface *_surface;
    struct CGImage *_image;
    _Bool _isDirty;
    _Bool _isOpaque;
}

@property(readonly, nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_isOpaque;
- (struct CGImage *)_buildImage;
- (id)_surface;
- (struct CGImage *)buildCGImage;
- (id)setOpaque:(_Bool)arg1;
- (void)dealloc;
- (id)initWithIOSurface:(id)arg1;

@end
