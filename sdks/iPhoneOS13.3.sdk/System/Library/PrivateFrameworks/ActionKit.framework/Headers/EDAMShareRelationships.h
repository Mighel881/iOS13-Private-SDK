//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMShareRelationshipRestrictions, NSArray;

@interface EDAMShareRelationships : FATObject
{
    NSArray *_invitations;
    NSArray *_memberships;
    EDAMShareRelationshipRestrictions *_invitationRestrictions;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) EDAMShareRelationshipRestrictions *invitationRestrictions; // @synthesize invitationRestrictions=_invitationRestrictions;
@property(retain, nonatomic) NSArray *memberships; // @synthesize memberships=_memberships;
@property(retain, nonatomic) NSArray *invitations; // @synthesize invitations=_invitations;
// - (void).cxx_destruct;

@end

