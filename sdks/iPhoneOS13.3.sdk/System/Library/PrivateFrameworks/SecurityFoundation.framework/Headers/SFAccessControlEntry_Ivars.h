//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFAccessControlEntry_Ivars : NSObject
{
    NSString *bundleID;
    struct {
        unsigned int isOwner:1;
        unsigned int canRead:1;
        unsigned int canWrite:1;
    } accessControlEntryFlags;
}

// - (void).cxx_destruct;

@end
