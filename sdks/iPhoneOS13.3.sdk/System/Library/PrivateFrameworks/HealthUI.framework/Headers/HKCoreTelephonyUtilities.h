//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface HKCoreTelephonyUtilities : NSObject
{
    struct __CTServerConnection _ctServerConnection;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ctServerQueue; // @synthesize ctServerQueue=_ctServerQueue;
// - (void).cxx_destruct;
- (struct __CTServerConnection )ctServerConnection;
- (BOOL)isEmergencyServicePhoneNumber:(id)arg1;
- (void)dealloc;
- (id)init;

@end

