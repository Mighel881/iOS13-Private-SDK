//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSObject, TSSStylesheet, TSUMutableRetainedPointerSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSSStylesheetPasteboardProxy : TSPObject
{
    TSSStylesheet *mStylesheet;
    TSUMutableRetainedPointerSet *mReferencedStyles;
    NSObject<OS_dispatch_queue> *mReferencedStylesQueue;
    BOOL mSelfArchiving;
}

// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)addStyleReference:(id)arg1;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2;

@end

