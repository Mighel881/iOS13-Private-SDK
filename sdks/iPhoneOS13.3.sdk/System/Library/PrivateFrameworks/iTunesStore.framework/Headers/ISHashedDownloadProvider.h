//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISDataProvider.h>


@class ISHashError, NSArray, NSString;

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying>
{
    int _fileDescriptor;
    NSArray *_hashes;
    ISHashError *_lastHashError;
    NSString *_localFilePath;
    struct CC_MD5state_st _md5Context;
    long long _numberOfBytesToHash;
    BOOL _shouldResumeFromLocalBytes;
    long long _totalBytesWritten;
    long long _validatedBytes;
}

@property long long validatedBytes; // @synthesize validatedBytes=_validatedBytes;
@property long long streamedBytes; // @synthesize streamedBytes=_totalBytesWritten;
@property BOOL shouldResumeFromLocalBytes; // @synthesize shouldResumeFromLocalBytes=_shouldResumeFromLocalBytes;
@property long long numberOfBytesToHash; // @synthesize numberOfBytesToHash=_numberOfBytesToHash;
@property(retain) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(copy) ISHashError *lastHashError; // @synthesize lastHashError=_lastHashError;
@property(retain) NSArray *hashes; // @synthesize hashes=_hashes;
- (BOOL)_writeDataWithoutHashing:(id)arg1 returningError:(id )arg2;
- (BOOL)_writeDataWithHashing:(id)arg1 returningError:(id )arg2;
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)arg1;
- (BOOL)_truncateToSize:(long long)arg1;
- (BOOL)_openFile;
- (void)_closeFile;
- (BOOL)_checkHashForByteCount:(long long)arg1;
- (void)setup;
- (void)resetStream;
- (BOOL)parseData:(id)arg1 returningError:(id )arg2;
- (BOOL)isStream;
- (id)closeStream;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id )arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

