//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GKCustomTournamentRequestInternal, GKPlayer, GKTournamentDefinition;

@interface GKCustomTournamentRequest : NSObject <NSSecureCoding>
{
    GKCustomTournamentRequestInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
@property(retain) GKCustomTournamentRequestInternal *internal; // @synthesize internal=_internal;
// - (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)createTournamentWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) GKTournamentDefinition *tournamentDefinition;
@property(readonly, nonatomic) GKPlayer *tournamentCreator;
- (id)initWithTournamentDefinition:(id)arg1 andCreator:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

