//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class BRObservableFile, NSOperationQueue, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _BRObservableFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    BRObservableFile *_parent;
}

@property(nonatomic) __weak BRObservableFile *parent; // @synthesize parent=_parent;
@property(retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemUbiquityDidChange;
- (void)presentedItemDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
