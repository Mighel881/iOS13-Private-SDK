//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NviContext;
@protocol NviDataReceiver;

@protocol NviDataSource 
@property(readonly, nonatomic) unsigned long long type;
- (void)stopWithDidStopHandler:(void (^)(_Bool, NSError *))arg1;
- (void)startWithNviContext:(NviContext *)arg1 didStartHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeReceiver:(id <NviDataReceiver>)arg1;
- (void)addReceiver:(id <NviDataReceiver>)arg1;
@end
