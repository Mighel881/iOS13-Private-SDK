//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/AVCapturePhotoCaptureDelegate-Protocol.h>

@class AVCaptureSession;

@interface WFTakePhotoAction : WFAction <AVCapturePhotoCaptureDelegate>
{
    NSUInteger _remainingPhotos;
    AVCaptureSession *_session;
}

@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) NSUInteger remainingPhotos; // @synthesize remainingPhotos=_remainingPhotos;
// - (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)takePhoto;

@end

