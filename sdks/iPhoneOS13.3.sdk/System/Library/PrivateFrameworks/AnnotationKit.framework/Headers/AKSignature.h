//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSUUID, PKDrawing;

@interface AKSignature : NSObject <NSSecureCoding>
{
    PKDrawing *_drawing;
    CGPath _path;
    CGRect _strokesBounds;
    BOOL _shouldPersist;
    NSUUID *_uniqueID;
    double _baselineOffset;
    NSDate *_creationDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(retain) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
@property BOOL shouldPersist; // @synthesize shouldPersist=_shouldPersist;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) CGPath path;
@property(readonly) CGRect pathBounds;
@property(readonly) PKDrawing *drawing;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initForTesting;
- (id)initWithDrawing:(id)arg1 path:(CGPath )arg2 baselineOffset:(double)arg3;
- (id)initWithDrawing:(id)arg1 path:(CGPath )arg2 baselineOffset:(double)arg3 creationDate:(id)arg4;

@end

