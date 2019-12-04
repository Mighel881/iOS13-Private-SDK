//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, RPMessageable;

@interface RPMediaControlSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _registeredMediaControlInterest;
    unsigned long long _mediaControlFlags;
    id /* block */ _mediaControlFlagsChangedHandler;
    id <RPMessageable> _messenger;
}

@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(copy, nonatomic) id /* block */ mediaControlFlagsChangedHandler; // @synthesize mediaControlFlagsChangedHandler=_mediaControlFlagsChangedHandler;
@property(readonly, nonatomic) unsigned long long mediaControlFlags; // @synthesize mediaControlFlags=_mediaControlFlags;
- (void)mediaSetVolume:(double)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (void)mediaGetVolumeFromDestinationID:(id)arg1 completion:(id /* block */)arg2;
- (void)mediaSkipBySeconds:(double)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (void)mediaCommand:(int)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (void)mediaCaptionSettingSet:(int)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (void)mediaCaptionSettingGetFromDestinationID:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleMediaControlEvent:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)init;

@end
