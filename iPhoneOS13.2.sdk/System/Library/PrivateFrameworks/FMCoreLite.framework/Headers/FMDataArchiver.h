//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface FMDataArchiver : NSObject
{
    _Bool _backedUp;
    _Bool _createDirectories;
    long long _dataProtectionClass;
    NSURL *_fileURL;
    NSData *_unitTestData;
}

+ (id)defaultClasses;
@property(copy, nonatomic) NSData *unitTestData; // @synthesize unitTestData=_unitTestData;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) _Bool createDirectories; // @synthesize createDirectories=_createDirectories;
@property(nonatomic) _Bool backedUp; // @synthesize backedUp=_backedUp;
@property(nonatomic) long long dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
- (unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1;
- (id)saveObject:(id)arg1;
- (_Bool)saveDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)saveArray:(id)arg1 error:(id *)arg2;
- (id)saveDictionary:(id)arg1;
- (id)saveArray:(id)arg1;
- (id)underlyingDataWithError:(id *)arg1;
- (id)readDataOfClasses:(id)arg1 error:(id *)arg2;
- (id)readArrayAndClasses:(id)arg1 error:(id *)arg2;
- (id)readDictionaryAndClasses:(id)arg1 error:(id *)arg2;
- (void)injectUnitTestData:(id)arg1;
- (id)initWithFileURL:(id)arg1;

@end
