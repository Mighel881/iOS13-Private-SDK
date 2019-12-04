//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString;

@protocol BRLTTranslatorProtocol 
- (NSString *)textForPrintBraille:(NSString *)arg1 mode:(unsigned long long)arg2 locations:(id *)arg3;
- (NSString *)printBrailleForText:(NSString *)arg1 mode:(unsigned long long)arg2 locations:(id *)arg3 textPositionsRange:(struct _NSRange)arg4;
- (_Bool)activeTableSupportsIPA;
- (_Bool)activeTableSupportsTechnicalBraille;
- (_Bool)activeTableSupportsEightDotBraille;
- (_Bool)activeTableSupportsContractedBraille;
- (NSString *)activeTable;
- (void)setActiveTable:(NSString *)arg1;
- (unsigned long long)interfaceVersion;
@end
