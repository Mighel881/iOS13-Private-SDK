//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFBase64Encoder : MFBaseFilterDataConsumer
{
    const char _table;
    NSUInteger _left;
    unsigned char _leftovers[3];
    NSUInteger _line;
    NSUInteger _lineBreak;
    BOOL _padChar;
}

@property(nonatomic) BOOL padChar; // @synthesize padChar=_padChar;
@property(nonatomic) NSUInteger lineBreak; // @synthesize lineBreak=_lineBreak;
- (void)setStandardLineBreak;
@property(nonatomic) BOOL allowSlash;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)initWithConsumers:(id)arg1;

@end

