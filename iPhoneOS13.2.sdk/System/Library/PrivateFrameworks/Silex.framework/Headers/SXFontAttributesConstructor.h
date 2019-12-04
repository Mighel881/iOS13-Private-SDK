//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFontAttributesConstructor-Protocol.h>

@class NSString;
@protocol SXFontIndex;

@interface SXFontAttributesConstructor : NSObject <SXFontAttributesConstructor>
{
    id <SXFontIndex> _fontIndex;
}

@property(readonly, nonatomic) id <SXFontIndex> fontIndex; // @synthesize fontIndex=_fontIndex;
- (long long)weightByApplyingWeightLabels:(id)arg1 toWeight:(long long)arg2;
- (id)fontNameForAttributes:(id)arg1 size:(long long)arg2;
- (id)fontAttributesForFontDescriptions:(id)arg1;
- (id)initWithFontIndex:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
