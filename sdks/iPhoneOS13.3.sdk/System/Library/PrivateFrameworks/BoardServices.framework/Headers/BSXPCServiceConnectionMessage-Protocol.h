//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BoardServices/BSXPCDecoding-Protocol.h>
#import <BoardServices/BSXPCEncoding-Protocol.h>

@protocol BSXPCServiceConnectionMessage;

@protocol BSXPCServiceConnectionMessage <BSXPCEncoding, BSXPCDecoding>
- (id <BSXPCServiceConnectionMessage>)createReply;
- (BOOL)expectsReply;
- (BOOL)sendSynchronously;
- (BOOL)send;
@end

