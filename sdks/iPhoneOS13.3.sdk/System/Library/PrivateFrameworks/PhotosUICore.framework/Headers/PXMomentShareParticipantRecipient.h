//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRecipient.h>

@class PHMomentShareParticipant;

@interface PXMomentShareParticipantRecipient : PXRecipient
{
    PHMomentShareParticipant *_momentShareParticipant;
}

@property(readonly, nonatomic) PHMomentShareParticipant *momentShareParticipant; // @synthesize momentShareParticipant=_momentShareParticipant;
// - (void).cxx_destruct;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;
- (id)initWithMomentShareParticipant:(id)arg1;

@end

