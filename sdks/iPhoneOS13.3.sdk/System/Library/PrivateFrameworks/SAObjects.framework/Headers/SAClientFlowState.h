//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

@class NSDictionary;

@interface SAClientFlowState : SAAceClientState
{
}

+ (id)clientFlowStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientFlowState;
+ (id)persistencePolicy;
+ (id)deliveryDeadline;
@property(copy, nonatomic) NSDictionary *cachedDomainClassJavascriptChecksumMap;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

