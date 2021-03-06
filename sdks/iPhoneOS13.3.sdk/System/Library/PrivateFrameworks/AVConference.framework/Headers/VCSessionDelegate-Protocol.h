//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSError, NSString, VCSession;

@protocol VCSessionDelegate <NSObject>
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 spatialAudioSourceIDDidChange:(NSUInteger)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didDetectError:(NSError *)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didChangeProminence:(unsigned char)arg3 description:(NSString *)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoPausedDidChange:(BOOL)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioPausedDidChange:(BOOL)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoEnabledDidChange:(BOOL)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioEnabledDidChange:(BOOL)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 updateConfiguration:(NSDictionary *)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 removeParticipantWithID:(NSString *)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 addParticipantWithID:(NSString *)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)vcSession:(VCSession *)arg1 didStart:(BOOL)arg2 error:(NSError *)arg3;
@end

