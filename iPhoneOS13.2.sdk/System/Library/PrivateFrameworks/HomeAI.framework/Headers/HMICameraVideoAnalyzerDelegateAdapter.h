//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeAI/HMICameraVideoAnalyzerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMICameraVideoAnalyzerDelegateAdapter : NSObject <HMICameraVideoAnalyzerDelegate>
{
    id /* block */ _didAnalyzeFragment;
    id /* block */ _didFailAnalysisForFragment;
    id /* block */ _didFindSignificantEvent;
    id /* block */ _didNotAnalyzeFragment;
}

@property(copy, nonatomic) id /* block */ didNotAnalyzeFragment; // @synthesize didNotAnalyzeFragment=_didNotAnalyzeFragment;
@property(copy, nonatomic) id /* block */ didFindSignificantEvent; // @synthesize didFindSignificantEvent=_didFindSignificantEvent;
@property(copy, nonatomic) id /* block */ didFailAnalysisForFragment; // @synthesize didFailAnalysisForFragment=_didFailAnalysisForFragment;
@property(copy, nonatomic) id /* block */ didAnalyzeFragment; // @synthesize didAnalyzeFragment=_didAnalyzeFragment;
- (void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3;
- (void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3;
- (void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (void)_finish;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
