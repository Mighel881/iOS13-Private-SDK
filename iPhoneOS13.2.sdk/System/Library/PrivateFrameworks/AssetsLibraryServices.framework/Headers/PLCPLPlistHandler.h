//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLCPLPlistHandler : NSObject
{
}

+ (void)deleteCPLPlistWithPathManager:(id)arg1;
+ (void)saveCPLPlistObject:(id)arg1 forKey:(id)arg2 pathManager:(id)arg3;
+ (id)readCPLPlistObjectWithKey:(id)arg1 pathManager:(id)arg2;
+ (id)_readCPLPlistWithPathManager:(id)arg1 error:(id *)arg2;
+ (_Bool)CPLPlistFileExistsWithPathManager:(id)arg1;
+ (void)initialize;

@end
