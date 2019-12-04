//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PhotosControlCommand : NSObject
{
    NSArray *_args;
    unsigned char _options;
}

+ (long long)maximumArgs;
+ (long long)minimumArgs;
+ (struct option *)longopts;
+ (const char *)optstring;
+ (id)usagesummary;
+ (id)usage;
+ (id)abbreviations;
+ (id)name;
- (void)outputError:(id)arg1;
- (void)output:(id)arg1;
- (id)args;
- (_Bool)processOption:(BOOL)arg1 arg:(id)arg2;
- (_Bool)processArgc:(int)arg1 argv:(char **)arg2;
- (void)willProcessOptions;
- (id)description;
@property(readonly) _Bool isVerbose;
- (id)initWithArgc:(int)arg1 argv:(char **)arg2 options:(unsigned char)arg3;
- (id)init;

@end
