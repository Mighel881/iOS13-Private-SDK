//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol SBUIPowerDownViewDelegate;

@protocol SBUIPowerDownViewInterface 
@property(nonatomic) __weak id <SBUIPowerDownViewDelegate> delegate;
- (void)hideAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)showAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
@end
