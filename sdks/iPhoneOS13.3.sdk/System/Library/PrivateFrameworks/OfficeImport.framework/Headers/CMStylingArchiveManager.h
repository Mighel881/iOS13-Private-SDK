//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMArchiveManager.h>

@class NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMStylingArchiveManager : CMArchiveManager
{
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
}

// - (void).cxx_destruct;
- (id)cssStylesheetString;
- (id)commitStylesheet;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (id)init;

@end
