//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRCtcTimeSample : NSObject
{
    struct CRCtcCandidate _blank;
    struct CRCTCPriorityQueue _sample;
}

@property struct CRCTCPriorityQueue sample; // @synthesize sample=_sample;
@property struct CRCtcCandidate blank; // @synthesize blank=_blank;
- (void)dealloc;
- (id)init;
- (void)addCandidate:(struct CRCtcCandidate)arg1;
- (struct CRCtcCandidate)topCandidate;
- (void)trimCandidates;
- (const vector_cdb6db61 )candidates;

@end
