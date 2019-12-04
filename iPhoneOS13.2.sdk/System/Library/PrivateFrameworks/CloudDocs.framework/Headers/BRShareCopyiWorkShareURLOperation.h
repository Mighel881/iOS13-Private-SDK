//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation
{
    CKShare *_share;
    NSString *_appName;
    id /* block */ _shareCopyURLCompletionBlock;
}

+ (id)iWorkShareableExtensions;
@property(copy) id /* block */ shareCopyURLCompletionBlock; // @synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (id)initWithShare:(id)arg1 appName:(id)arg2;

@end
