//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/JSExport-Protocol.h>

@class NUJSScale;

@protocol NUJSImageGeometryExport <JSExport>
@property(readonly) long long orientation;
@property(readonly) NUJSScale *scale;
@property(readonly) struct CGSize scaledSize;
@property(readonly) struct CGSize size;
@property(readonly) struct CGRect extent;
@end
