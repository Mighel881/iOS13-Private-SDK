//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class NSDate;

@interface WFLogHealthSampleAction : WFAction
{
    NSDate *_currentDate;
}

@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
- (void)saveObject:(id)arg1 withObjectType:(id)arg2 item:(id)arg3;
- (void)forceUpdateSelectedUnit;
- (void)updateParameterStates;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)resourceAvailabilityChanged;
- (void)wasRemovedFromWorkflow:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (void)initializeParameters;
- (id)outputContentClasses;
- (id)dateForParameterValueWithKey:(id)arg1 error:(id *)arg2;
- (void)handleWithQuantityType:(id)arg1;
- (void)handleWithCategoryType:(id)arg1;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
