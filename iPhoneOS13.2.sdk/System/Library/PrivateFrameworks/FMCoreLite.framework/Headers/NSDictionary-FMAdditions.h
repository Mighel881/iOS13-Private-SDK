//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (FMAdditions)
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)dictionaryWithContentsOfData:(id)arg1;
+ (id)fm_dictionaryWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)fm_dictionaryWithContentsOfData:(id)arg1;
- (id)fm_dictionaryByMappingValues:(id /* block */)arg1;
- (id)fm_filter:(id /* block */)arg1;
- (id)dictionaryWithLowercaseKeys;
- (id)fm_dictionaryWithLowercaseKeys;
@end
