//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCKeyValueStore.h>

#import <NewsToday/FRRingBufferContainer-Protocol.h>

@class NSString;

@interface FCKeyValueStore (FRRingBufferContainer) <FRRingBufferContainer>
- (double)maxForKey:(id)arg1;
- (double)minForKey:(id)arg1;
- (_Bool)hasMaxForKey:(id)arg1;
- (_Bool)hasMinForKey:(id)arg1;
- (void)setRingBuffers:(id)arg1;
- (id)ringBufferForKey:(id)arg1;
- (id)ringBufferForKey:(id)arg1 capacity:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
