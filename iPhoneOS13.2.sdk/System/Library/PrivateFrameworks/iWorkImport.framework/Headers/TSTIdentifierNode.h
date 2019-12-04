//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTIdentifierNode : TSTExpressionNode
{
    NSMutableArray *_components;
    unsigned int _symbol;
    NSString *_aggregateFunction;
}

@property(retain, nonatomic) NSString *aggregateFunction; // @synthesize aggregateFunction=_aggregateFunction;
@property(nonatomic) unsigned int symbol; // @synthesize symbol=_symbol;
-     // Error parsing type: v32@0:8^{IdentifierNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{ExpressionNodeArchive}I}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{IdentifierNodeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{ExpressionNodeArchive}I}16@24, name: loadFromArchive:unarchiver:
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (id)detokenizedText;
- (id)formulaPlainText;
- (id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 baseHostCell:(struct TSUCellCoord)arg3 forceReferenceInterpretation:(_Bool)arg4 symbolTable:(struct TSCESymbolTable *)arg5 oldToNewNodeMap:(id)arg6;
- (void)appendToLastComponent:(id)arg1;
- (id)tableName;
- (id)sheetName;
- (int)tokenType;
- (id)string;
- (_Bool)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
@property(readonly, nonatomic) NSString *lastComponentWithWhitespaceAppended;
@property(readonly, nonatomic) NSString *fullIdentifier;
@property(readonly, nonatomic) NSString *lastIdentifierComponent;
- (void)addIdentifierComponent:(id)arg1;
- (id)identifierComponents;
- (unsigned long long)componentCount;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 identifier:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

@end
