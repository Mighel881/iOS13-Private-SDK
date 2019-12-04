//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarKit/AVTPhysicsControllerDelegate-Protocol.h>


@class AVTEyeSkinningDescriptor, AVTPhysicsController, AVTPupilReflectionCorrectionDescriptor, CAAnimation, NSMutableArray, NSMutableDictionary, NSString, SCNAnimationPlayer, SCNNode, SCNPhysicsWorld;

@interface AVTAvatar : NSObject <AVTPhysicsControllerDelegate, NSCopying>
{
    SCNNode *_avatarNode;
    SCNNode *_skeleton;
    SCNNode *_headNode;
    SCNNode *_leftEye;
    SCNNode *_rightEye;
    SCNNode *_neckNode;
    SCNNode *_neckPivotNode;
    CDStruct_b01a1f36 *_morphInfoFromARKitBlendShapeIndex;
    CDStruct_b01a1f36 *_friendlyPoseMorphInfos;
    unsigned long long _friendlyPoseMorphInfoCount;
    int _transitionCount;
    _Bool _arMode;
    _Bool _optimizedForSnapshot;
    SCNPhysicsWorld *_physicsWorld;
    AVTPhysicsController *_physicsController;
    NSMutableArray *_clipsPlaying;
    struct SCNVector3 _lookAt;
    NSMutableArray *_correctiveMorpherDescriptors;
    NSMutableArray *_physicalizedMorpherDescriptors;
    NSMutableArray *_physicalizedSkeletonDescriptors;
    NSMutableArray *_morpherDrivenMaterialDescriptors;
    AVTPupilReflectionCorrectionDescriptor *_pupilReflectionCorrectionDescriptor;
    AVTEyeSkinningDescriptor *_eyeSkinningDescriptor;
    NSMutableDictionary *_morpherWeightRemappingDescriptors;
    NSMutableDictionary *_morpherWeightThresholdDescriptors;
    NSMutableDictionary *_morpherWeightThresholdStates;
    // Error parsing type: , name: _arOffset
    float _arScale;
    double _physicsScaleFactor;
    double _lastRenderTime;
    CAAnimation *_bakedAnimation;
    SCNAnimationPlayer *_bakedAnimationPlayer_lazy;
}

+ (id)avatarWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (unsigned char)classIdentifier;
+ (_Bool)canLoadDataRepresentation:(id)arg1;
+ (_Bool)canLoadDataRepresentationWithVersion:(unsigned short)arg1 minimumCompatibleVersion:(unsigned short)arg2 error:(id *)arg3;
+ (void)preloadAvatar:(id)arg1;
+ (struct SCNVector4)applyGazeCorrectionWithInputAngle:translation: /* Error: Ran out of types for this method. */;
- (id)stickerPhysicsStateIdentifier;
- (double)physicsController:(id)arg1 downforceForNodeNamed:(id)arg2;
- (id)physicsWorldForPhysicsController:(id)arg1;
- (id)avatarNodeForPhysicsController:(id)arg1;
- (id)arTechniqueName;
- (_Bool)hasCustomARTechnique;
- (void)update;
- (_Bool)_decode:(id)arg1 error:(id *)arg2;
- (void)_encode:(id)arg1;
- (id)dataRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct UIImage *)snapshotWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (void)stopTransitionAnimation;
- (void)transitionFromPose:(id)arg1 toPose:(id)arg2 duration:(double)arg3 delay:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)animatePhysicsScaleFactor:(double)arg1 duration:(double)arg2;
- (void)setPhysicsScaleFactor:(double)arg1;
- (_Bool)isTransitioning;
- (id)debugPoseJSONRepresentation;
- (void)setPose:(id)arg1;
- (id)pose;
- (void)_resetFaceToRandomPosition;
- (void)setupFaceTracking;
- (long long)blendShapeIndexForBlendShapeName:(id)arg1;
- (id)blendShapeNameForBlendShapeIndex:(unsigned long long)arg1;
- (CDStruct_b01a1f36)morphInfoForARKitBlendShapeIndex:(unsigned long long)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(_Bool)arg2;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1;
- (void)applyHeadPoseWithTrackingInfo:(id)arg1 gazeCorrection:(_Bool)arg2 pointOfView:(id)arg3;
- (void)applyBlendShapesWithTrackingInfo:(id)arg1;
- (void)setupMorphInfoForChangeInSubHierarchy;
- (void)setupMorphInfo;
- (id)effectiveMorphedNodeForTargetName:(id)arg1 candidateNode:(id)arg2;
- (void)updateAfterAnimationsEvaluatedAtTime:(double)arg1 renderer:(id)arg2;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)didAddToScene:(id)arg1;
- (void)willRemoveFromScene:(id)arg1;
- (void)updateEyeOrientationAndReflections;
- (void)setupEyeOrientationAndReflections;
- (_Bool)usesSkinningForEyeOrientation;
- (void)updateMorpherDrivenMaterialsWithDeltaTime:(double)arg1;
- (void)removeMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)addMorpherDrivenMaterialsInHierarchy:(id)arg1;
- (void)resetMorpherDrivenMaterials;
- (void)applyWeightWithThresholdingForLocation:(id)arg1 weight:(float)arg2 morphInfo:(CDStruct_b01a1f36)arg3;
- (float)thresholdedWeightAtLocation:(id)arg1 sourceWeight:(float)arg2 time:(double)arg3;
- (void)resetThresholdingStates;
- (void)addMorpherWeightThresholdings;
- (void)resetMorpherWeightThresholdings;
- (void)addMorpherWeightRemappings;
- (void)resetMorpherWeightRemappings;
- (void)applyCorrectiveDescriptors;
- (void)removeCorrectiveDescriptorsInHierarchy:(id)arg1;
- (void)addCorrectiveDescriptorsInHierarchy:(id)arg1;
- (void)resetCorrectiveDescriptors;
- (void)evaluatePhysicalizedDescriptors;
- (void)removePhysicalizedDescriptorsInHierarchy:(id)arg1;
- (void)addPhysicalizedDescriptorsInHierarchy:(id)arg1 ignoreUpperNodes:(_Bool)arg2;
- (void)resetPhysicalizedDescriptors;
- (id)descriptorsByRemovingDescriptors:(id)arg1 inHierarchy:(id)arg2 passingTest:(id /* block */)arg3;
- (void)removeMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)addMorphingSkinningControllersInHierarchy:(id)arg1;
- (void)resetMorphingSkinningControllers;
- (void)removeCustomBehavioursInHierarchy:(id)arg1;
- (void)addCustomBehavioursInHierarchy:(id)arg1;
- (void)resetCustomBehaviours;
- (void)updateBindingsOfNode:(id)arg1;
- (void)updateBindings;
- (void)lookAt:(struct SCNVector3)arg1;
- (void)lookAt:(struct SCNVector3)arg1 withDuration:(double)arg2;
- (struct SCNVector3)currentLookAt;
- (void)rotateHead:(double)arg1;
- (float)applyWeightRemapForLocation:(id)arg1 weight:(float)arg2;
- (void)resetARModeBehaviours;
@property(nonatomic) _Bool arMode;
- (void)_updateShaderModifier:(id)arg1 forARMode:(_Bool)arg2 withOnTopMask:(_Bool)arg3;
- (id)bakedAnimationPlayer;
- (id)bakedAnimationCopy;
- (void)resumeBakedAnimation;
- (void)pauseBakedAnimation;
- (void)setBakedAnimationReferenceTime:(double)arg1;
@property(readonly) SCNNode *avatarNode;
@property(readonly) SCNNode *neckNode;
@property(readonly) SCNNode *headNode;
- (void)setHeadNode:(id)arg1;
- (id)cameraNode;
- (id)lightingNode;
- (void)setAvatarNode:(id)arg1;
- (void)resetToPhysicsState:(id)arg1;
- (id)physicsState;
- (void)setupPhysicsIfNeeded;
- (void)physicsSpecializationSettingsDidChange;
- (double)physicsDownforceForNodeNamed:(id)arg1;
- (float)arScale;
-     // Error parsing type: 16@0:8, name: arOffset
- (void)dealloc;
- (id)init;
- (void)avatarCommonInit;
- (void)setOptimizeForSnapshot:(_Bool)arg1;
- (_Bool)optimizeForSnapshot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
