//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NUAbstractScaleNode : NURenderNode
{
}

- (id)_scaleImage:(id)arg1 by:(CDStruct_912cb5d2)arg2 sampleMode:(long long)arg3;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
@property(readonly, nonatomic) NURenderNode *inputNode;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(NSDictionary )arg2;

@end

