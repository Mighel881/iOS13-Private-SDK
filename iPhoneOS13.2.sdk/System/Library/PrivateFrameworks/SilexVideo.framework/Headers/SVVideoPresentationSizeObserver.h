//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPresentationSizeObserving-Protocol.h>

@class NSString, SVKeyValueObserver;
@protocol SVPlayerItemObserving;

@interface SVVideoPresentationSizeObserver : NSObject <SVVideoPresentationSizeObserving>
{
    id /* block */ changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_presentationSizeObserver;
    struct CGSize _presentationSize;
}

@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(readonly, nonatomic) SVKeyValueObserver *presentationSizeObserver; // @synthesize presentationSizeObserver=_presentationSizeObserver;
@property(readonly, nonatomic) id <SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property(copy, nonatomic, setter=onChange:) id /* block */ changeBlock; // @synthesize changeBlock;
- (id)initWithPlayerItemObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
