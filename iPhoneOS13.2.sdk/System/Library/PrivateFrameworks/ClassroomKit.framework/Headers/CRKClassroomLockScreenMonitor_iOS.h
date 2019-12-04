//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKClassroomLockScreenMonitoring-Protocol.h>

@class NSString;

@interface CRKClassroomLockScreenMonitor_iOS : NSObject <CRKClassroomLockScreenMonitoring>
{
    int mDidAppearObserver;
    int mDidDismissObserver;
    _Bool _classroomLockScreenVisible;
}

+ (id)sharedMonitor;
@property(nonatomic, getter=isClassroomLockScreenVisible) _Bool classroomLockScreenVisible; // @synthesize classroomLockScreenVisible=_classroomLockScreenVisible;
- (void)endObserving;
- (void)startObserving;
- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(id)arg1 passcode:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
