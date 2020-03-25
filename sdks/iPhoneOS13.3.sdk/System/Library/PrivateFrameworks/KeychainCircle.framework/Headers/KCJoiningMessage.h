//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface KCJoiningMessage : NSObject
{
    int _type;
    NSData *_firstData;
    NSData *_secondData;
    NSData *_der;
}

+ (id)encodeToDERType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id )arg4;
+ (NSUInteger)encodedSizeType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id )arg4;
+ (id)messageWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id )arg4;
+ (id)messageWithType:(int)arg1 data:(id)arg2 secondData:(id)arg3 error:(id )arg4;
+ (id)messageWithType:(int)arg1 data:(id)arg2 error:(id )arg3;
+ (id)messageWithDER:(id)arg1 error:(id )arg2;
@property(readonly) NSData *der; // @synthesize der=_der;
@property(readonly) NSData *secondData; // @synthesize secondData=_secondData;
@property(readonly) NSData *firstData; // @synthesize firstData=_firstData;
@property(readonly) int type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)initWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id )arg4;
- (id)initWithDER:(id)arg1 error:(id )arg2;
- (BOOL)inflatePartsOfEncoding:(id )arg1;

@end
