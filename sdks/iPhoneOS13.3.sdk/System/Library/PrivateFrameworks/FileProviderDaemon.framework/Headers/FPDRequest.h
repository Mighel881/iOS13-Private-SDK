//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface FPDRequest : NSObject <NSSecureCoding>
{
    BOOL _fromPOSIX;
    int _pid;
    NSString *_processName;
    NSString *_executablePath;
}

+ (BOOL)supportsSecureCoding;
+ (id)UUIDForExecutablePath:(id)arg1;
+ (id)requestForSelf;
+ (id)requestForPID:(int)arg1;
+ (id)requestForPID:(int)arg1 fromPOSIX:(BOOL)arg2;
@property(readonly, nonatomic, getter=isFromPOSIX) BOOL fromPOSIX; // @synthesize fromPOSIX=_fromPOSIX;
@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *shortDescription;
- (id)description;
- (id)nsfpRequestWithIdentifier:(id)arg1 forSession:(id)arg2;
- (id)initWithPID:(int)arg1 fromPOSIX:(BOOL)arg2;

@end
