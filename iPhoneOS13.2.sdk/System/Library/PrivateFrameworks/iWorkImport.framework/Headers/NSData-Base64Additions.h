//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <iWorkImport/TSPSplitableData-Protocol.h>

@interface NSData (Base64Additions) <TSPSplitableData>
+ (id)tsu_decodeFromBase64CString:(const char *)arg1 srcLength:(unsigned long long)arg2;
+ (id)tsu_decodeFromBase64String:(id)arg1;
+ (id)tsu_decodeFromBase64StringWithWhitespace:(id)arg1;
+ (id)tsp_dataFromDispatchData:(id)arg1;
+ (id)tsp_dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;
+ (id)tsp_dataWithTranscoder:(id)arg1;
- (id)tsu_encodeToBase64URLSafeString;
- (id)tsu_encodeToBase64String;
- (id)tsu_compressWithAlgorithm:(int)arg1 operation:(int)arg2;
- (void)tsp_splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(id /* block */)arg2;
@property(readonly, nonatomic) unsigned long long tsp_length;
- (id)tsp_dispatchDataWithApplier:(id /* block */)arg1;
- (id)tsp_dispatchData;
- (id)tsp_dataWithEncryptionKey:(id)arg1;
- (id)tsp_dataWithDecryptionKey:(id)arg1;
- (_Bool)tsp_writeToURL:(id)arg1 encryptionKey:(id)arg2;
@end
