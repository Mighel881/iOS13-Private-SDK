//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol EDThreadScopeManagerDataSource, EFScheduler;

@interface EDThreadScopeManager : NSObject <EFLoggable>
{
    NSMutableDictionary *_threadScopes;
    struct os_unfair_lock_s _threadScopesLock;
    id <EDThreadScopeManagerDataSource> _dataSource;
    id <EFScheduler> _evictionScheduler;
}

+ (id)mailboxTypesToPrecompute;
+ (id)log;
@property(readonly, nonatomic) id <EFScheduler> evictionScheduler; // @synthesize evictionScheduler=_evictionScheduler;
@property(readonly, nonatomic) __weak id <EDThreadScopeManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (unsigned long long)_numberOfThreadScopesToEvictFrom:(id)arg1 upTo:(unsigned long long *)arg2;
- (id)_threadScopesWithLastViewedOlderThanLimit;
- (double)_evictionScoreForCount:(unsigned long long)arg1 timeInterval:(double)arg2;
- (void)_evictAtLeast:(unsigned long long)arg1 upTo:(unsigned long long)arg2 threadScopesFrom:(id)arg3;
- (void)_initializeThreadScopesIfNeeded;
- (void)removeThreadScopesForMailboxScope:(id)arg1;
- (void)removeThreadScope:(id)arg1;
- (void)removeAllThreadScopes;
- (void)setLastViewedDate:(id)arg1 forThreadScope:(id)arg2;
- (void)setNeedsUpdate:(_Bool)arg1 forThreadScope:(id)arg2;
- (void)addThreadScope:(id)arg1 withDatabaseID:(long long)arg2 needsUpdate:(_Bool)arg3 lastViewedDate:(id)arg4;
- (id)threadScopesByDatabaseID;
- (long long)databaseIDForThreadScope:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *threadScopes;
- (_Bool)_shouldPrecomputeMailboxType:(id)arg1;
- (_Bool)_shouldPrecomputeMailboxWithObjectID:(id)arg1;
- (_Bool)_shouldPrecomputeThreadScope:(id)arg1;
- (id)_threadScopeInfoForThreadScope:(id)arg1;
- (_Bool)isThreadScopePrecomputed:(id)arg1 shouldMigrate:(_Bool *)arg2;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
