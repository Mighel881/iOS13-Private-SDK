//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICGImageDecompressor : NSObject
{
    struct CGImage *_imageRef;
    long long _orientation;
}

+ (void)flushCaches;
- (long long)waitForOrientation;
- (struct CGImage *)waitForImageRef;
- (void)dealloc;
@property(readonly, nonatomic) _Bool _isHardwareBased;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 renderingIntent:(unsigned long long)arg3 cache:(_Bool)arg4;

@end
