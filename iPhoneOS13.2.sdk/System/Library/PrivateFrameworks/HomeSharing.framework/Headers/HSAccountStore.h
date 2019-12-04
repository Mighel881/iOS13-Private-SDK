//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICURLRequest, NSString;
@protocol OS_dispatch_queue;

@interface HSAccountStore : NSObject
{
    int _defaultsDidChangeToken;
    ICURLRequest *_groupIDRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) ICURLRequest *groupIDRequest; // @synthesize groupIDRequest=_groupIDRequest;
@property(copy, nonatomic) NSString *groupID; // @dynamic groupID;
- (void)clearGroupID;
- (void)clearCaches;
- (void)clearAllCredentials;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id /* block */)arg1;
- (void)determineGroupIDWithCompletionHandler:(id /* block */)arg1;
- (_Bool)canDetermineGroupID;
@property(copy, nonatomic) NSString *password; // @dynamic password;
@property(copy, nonatomic) NSString *appleID; // @dynamic appleID;
- (void)dealloc;
- (id)init;

@end
