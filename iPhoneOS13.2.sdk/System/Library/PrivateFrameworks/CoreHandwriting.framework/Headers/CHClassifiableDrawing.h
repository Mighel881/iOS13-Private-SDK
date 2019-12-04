//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDrawing, NSCharacterSet;

@interface CHClassifiableDrawing : NSObject
{
    _Bool _expandCodePoints;
    _Bool _firstPointIsSubstrokeCut;
    _Bool _lastPointIsSubstrokeCut;
    CHDrawing *_drawing;
    NSCharacterSet *_characterSet;
    unsigned long long _maxCandidateCount;
    struct CGRect _normalizationContext;
}

@property(readonly, nonatomic) unsigned long long maxCandidateCount; // @synthesize maxCandidateCount=_maxCandidateCount;
@property(readonly, nonatomic) _Bool lastPointIsSubstrokeCut; // @synthesize lastPointIsSubstrokeCut=_lastPointIsSubstrokeCut;
@property(readonly, nonatomic) _Bool firstPointIsSubstrokeCut; // @synthesize firstPointIsSubstrokeCut=_firstPointIsSubstrokeCut;
@property(readonly, nonatomic) struct CGRect normalizationContext; // @synthesize normalizationContext=_normalizationContext;
@property(readonly, nonatomic) _Bool expandCodePoints; // @synthesize expandCodePoints=_expandCodePoints;
@property(readonly, retain, nonatomic) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
@property(readonly, retain, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
- (void)dealloc;
- (id)initWithDrawing:(id)arg1 characterSet:(id)arg2 expandCodePoints:(_Bool)arg3 normalizationContext:(struct CGRect)arg4 firstPointIsSubstrokeCut:(_Bool)arg5 lastPointIsSubstrokeCut:(_Bool)arg6 maxCandidateCount:(unsigned long long)arg7;

@end
