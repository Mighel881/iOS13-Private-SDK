//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsArticles/UIActivityItemLinkPresentationSource-Protocol.h>

@class NSString, NSURL;

@interface NAChannelLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>
{
    NSString *_title;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
