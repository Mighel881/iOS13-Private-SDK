//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/ISChangeObserver-Protocol.h>
#import <PhotosUICore/PXVideoViewDelegate-Protocol.h>

@class NSString, PXVideoSession, PXVideoView, UIImage, UIImageView;
@protocol PXVideoSessionUIViewDelegate;

@interface PXVideoSessionUIView : UIView <PXVideoViewDelegate, ISChangeObserver>
{
    UIView *_videoContainerView;
    PXVideoView *_videoView;
    PXVideoView *_adoptedVideoView;
    PXVideoView *_activeVideoView;
    UIImageView *_placeholderImageView;
    _Bool _placeholderVisible;
    _Bool _allowsEdgeAntialiasing;
    PXVideoSession *_videoSession;
    UIImage *_placeholderImage;
    id <PXVideoSessionUIViewDelegate> _delegate;
    NSString *_videoGravity;
    struct CGRect _contentsRect;
}

@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) _Bool allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(nonatomic) __weak id <PXVideoSessionUIViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool placeholderVisible; // @synthesize placeholderVisible=_placeholderVisible;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) PXVideoSession *videoSession; // @synthesize videoSession=_videoSession;
- (void)_updateEdgeAntialiasing;
- (void)_updatePlaceholderVisibility;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)videoViewReadinessDidChange:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isVideoLayerReadyForDisplay;
- (id)generateSnapshotImage;
- (void)_updateVideoViewFrame;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
