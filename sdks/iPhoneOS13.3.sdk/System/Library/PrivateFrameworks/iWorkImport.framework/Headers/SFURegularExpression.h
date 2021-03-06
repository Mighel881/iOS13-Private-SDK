//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface SFURegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_expressionString;
    void _reserved;
}

+ (id)regularExpressionWithString:(id)arg1;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (const char )getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;
- (id)initWithCoder:(id)arg1;
- (NSRange)matchedRangeForString:(id)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange )arg3 count:(unsigned int)arg4;
- (NSRange)matchedRangeForCString:(const char )arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange )arg3 count:(unsigned int)arg4;
- (id)expressionString;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (NSUInteger)numberOfSubexpressions;
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithExpressionString:(id)arg1;
- (void)dealloc;

@end

