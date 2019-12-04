//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookCoverUtility/BCUOperation-Protocol.h>

@class BCULayerRenderer, CALayer, NSString;
@protocol BCUPurgeableImage;

@interface _BCULayerRendererOperation : NSObject <BCUOperation>
{
    // Error parsing type: Aq, name: _operationId
    unsigned int _cancelled:1;
    unsigned int _configuring:1;
    _Bool _waitForCPUSynchronization;
    float _priority;
    BCULayerRenderer *_renderer;
    id /* block */ _layerBlock;
    id /* block */ _completion;
    CALayer *_layer;
    id <BCUPurgeableImage> _result;
}

@property(readonly, nonatomic) _Bool waitForCPUSynchronization; // @synthesize waitForCPUSynchronization=_waitForCPUSynchronization;
@property(retain, nonatomic) id <BCUPurgeableImage> result; // @synthesize result=_result;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
@property(copy, nonatomic) id /* block */ layerBlock; // @synthesize layerBlock=_layerBlock;
@property(retain, nonatomic) BCULayerRenderer *renderer; // @synthesize renderer=_renderer;
- (long long)_compareHoldingStateLock:(id)arg1;
- (void)dealloc;
- (void)completeWithImage:(id)arg1;
- (void)cancel;
- (id)configureLayer;
- (void)start;
@property(nonatomic) float priority; // @synthesize priority=_priority;
- (id)initWithRenderer:(id)arg1 priority:(float)arg2 waitForCPUSynchronization:(_Bool)arg3 layerBlock:(id /* block */)arg4 completion:(id /* block */)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
