//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASCompression : NSObject
{
}

+ (id)decompress:(id)arg1 maxLength:(long long)arg2;
+ (id)decompress:(id)arg1;
+ (id)_compress:(id)arg1 fast:(BOOL)arg2 lowMemory:(BOOL)arg3;
+ (id)fastCompress:(id)arg1;
+ (id)compress:(id)arg1 lowMemory:(BOOL)arg2;
+ (id)compress:(id)arg1 fast:(BOOL)arg2;

@end

