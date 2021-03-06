//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MMElement, MMHTMLParser, NSMutableArray;

@interface MMSpanParser : NSObject
{
    BOOL _parseEm;
    BOOL _parseImages;
    BOOL _parseLinks;
    BOOL _parseStrong;
    NSUInteger _extensions;
    MMHTMLParser *_htmlParser;
    NSMutableArray *_elements;
    NSMutableArray *_openElements;
    MMElement *_blockElement;
}

@property(nonatomic) BOOL parseStrong; // @synthesize parseStrong=_parseStrong;
@property(nonatomic) BOOL parseLinks; // @synthesize parseLinks=_parseLinks;
@property(nonatomic) BOOL parseImages; // @synthesize parseImages=_parseImages;
@property(nonatomic) BOOL parseEm; // @synthesize parseEm=_parseEm;
@property(retain, nonatomic) MMElement *blockElement; // @synthesize blockElement=_blockElement;
@property(retain, nonatomic) NSMutableArray *openElements; // @synthesize openElements=_openElements;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) MMHTMLParser *htmlParser; // @synthesize htmlParser=_htmlParser;
@property(readonly, nonatomic) NSUInteger extensions; // @synthesize extensions=_extensions;
// - (void).cxx_destruct;
- (id)_stringWithBackslashEscapesRemoved:(id)arg1;
- (id)_parseLeftAngleBracketWithScanner:(id)arg1;
- (id)_parseBackslashWithScanner:(id)arg1;
- (id)_parseAmpersandWithScanner:(id)arg1;
- (id)_parseImageWithScanner:(id)arg1;
- (id)_parseLinkWithScanner:(id)arg1;
- (id)_parseReferenceLinkWithScanner:(id)arg1;
- (id)_parseInlineLinkWithScanner:(id)arg1;
- (id)_parseLinkTextBodyWithScanner:(id)arg1;
- (id)_parseAutomaticEmailLinkWithScanner:(id)arg1;
- (id)_parseAutomaticLinkWithScanner:(id)arg1;
- (id)_parseLineBreakWithScanner:(id)arg1;
- (id)_parseCodeSpanWithScanner:(id)arg1;
- (id)_parseEmAndStrongWithScanner:(id)arg1;
- (id)_parseStrikethroughWithScanner:(id)arg1;
- (id)_parseAutolinkWWWURLWithScanner:(id)arg1;
- (id)_parseAutolinkURLWithScanner:(id)arg1;
- (id)_parseAutolinkEmailAddressWithScanner:(id)arg1;
- (void)_parseAutolinkPathWithScanner:(id)arg1;
- (BOOL)_parseAutolinkDomainWithScanner:(id)arg1;
- (id)_parseNextElementWithScanner:(id)arg1;
- (id)_parseWithScanner:(id)arg1 untilTestPasses:(id /* CDUnknownBlockType */)arg2;
- (id)parseSpansInTableColumns:(id)arg1 withScanner:(id)arg2;
- (id)parseSpansInBlockElement:(id)arg1 withScanner:(id)arg2;
- (id)initWithExtensions:(NSUInteger)arg1;

@end

