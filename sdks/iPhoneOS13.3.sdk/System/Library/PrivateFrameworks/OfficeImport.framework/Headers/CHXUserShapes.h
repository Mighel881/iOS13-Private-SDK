//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXUserShapes : NSObject
{
}

+ (void)readFromCharSpaceNode:(struct _xmlNode )arg1 state:(id)arg2;
+ (id)readAbsoluteSizeAnchor:(struct _xmlNode )arg1 drawingState:(id)arg2;
+ (id)readRelativeSizeAnchor:(struct _xmlNode )arg1 drawingState:(id)arg2;
+ (id)readDrawable:(struct _xmlNode )arg1 anchor:(id)arg2 drawingState:(id)arg3;
+ (CGPoint)readRealPoint:(struct _xmlNode )arg1;
+ (float)readRealCoordinate:(struct _xmlNode )arg1;

@end

