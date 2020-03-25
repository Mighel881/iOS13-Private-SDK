//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDImageProvider.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSDPDFImageProvider : TSDImageProvider
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    CGPDFDocument _PDFDocument;
    CGSize _naturalSize;
    NSObject<OS_dispatch_semaphore> *_flushableContentLock;
    BOOL _hasFlushableContent;
}

// - (void).cxx_destruct;
- (CGPDFDocument )p_load;
- (void)p_loadIfNecessary;
- (void)flush;
- (void)drawImageInContext:(CGContext )arg1 rect:(CGRect)arg2;
- (BOOL)isValid;
- (NSUInteger)i_flushableMemoryEstimate;
- (BOOL)i_hasFlushableContent;
- (CGSize)naturalSize;
@property(readonly, nonatomic) long long pageAngle;
@property(readonly, nonatomic) CGPDFDocument CGPDFDocument;
- (void)dealloc;
- (void)i_commonInit;

@end
