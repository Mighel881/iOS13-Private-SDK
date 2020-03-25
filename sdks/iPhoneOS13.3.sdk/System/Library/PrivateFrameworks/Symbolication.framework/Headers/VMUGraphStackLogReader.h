//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUStackLogReaderBase.h>

#import <Symbolication/VMUStackLogReader-Protocol.h>

@class NSData, VMUDebugTimer, VMUProcessObjectGraph, VMURangeToStringMap;

@interface VMUGraphStackLogReader : VMUStackLogReaderBase <NSSecureCoding, VMUStackLogReader>
{
    struct _CSTypeRef _symbolicator;
    VMUProcessObjectGraph *_graph;
    NSData *_diskLogs;
    VMUDebugTimer *_debugTimer;
    unsigned int _nodeNamespaceSize;
    unsigned int _nodeToStackIndexTable;
    NSUInteger _nodeToMSLPayloadTable;
    struct vmu_backtrace_uniquing_table_t _backtraceUniquingTable;
    struct backtrace_uniquing_table _originalUniquingTable;
    VMURangeToStringMap *_functionNameRanges;
    VMURangeToStringMap *_sourceInfoRanges;
}

+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *diskLogs; // @synthesize diskLogs=_diskLogs;
@property(nonatomic) __weak VMUProcessObjectGraph *graph; // @synthesize graph=_graph;
// - (void).cxx_destruct;
- (int)enumerateRecords:(id /* CDUnknownBlockType */)arg1;
@property(readonly) NSUInteger nodesInUniquingTable;
- (id)vmuVMRegionForAddress:(NSUInteger)arg1;
- (long long)getFramesForStackID:(NSUInteger)arg1 stackFramesBuffer:(NSUInteger )arg2;
- (long long)getFramesForAddress:(NSUInteger)arg1 size:(NSUInteger)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(NSUInteger )arg4;
- (NSUInteger)stackIDForNode:(unsigned int)arg1;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(NSUInteger )arg3;
- (int)enumerateMSLRecordsAndPayloads:(id /* CDUnknownBlockType */)arg1;
@property(readonly) BOOL inspectingLiveProcess;
@property(readonly) BOOL is64bit;
- (struct _VMURange)sourceLineRangeContainingPCaddress:(NSUInteger)arg1;
- (id)sourceFileNameAndLineNumberForPCaddress:(NSUInteger)arg1 fullPath:(BOOL)arg2;
- (unsigned int)sourceLineNumberForPCaddress:(NSUInteger)arg1;
- (id)sourceFileNameForPCaddress:(NSUInteger)arg1;
- (id)sourcePathForPCaddress:(NSUInteger)arg1;
- (void)_parseSourceInfoString:(id)arg1 intoComponents:(unsigned int )arg2;
- (void)_setSourcePath:(id)arg1 lineNumber:(unsigned int)arg2 forPCAddressRange:(struct _VMURange)arg3;
- (struct _VMURange)functionRangeContainingPCaddress:(NSUInteger)arg1;
- (id)functionNameForPCaddress:(NSUInteger)arg1;
- (void)_setFunctionName:(id)arg1 forPCAddressRange:(struct _VMURange)arg2;
- (struct _VMURange)binaryImageRangeForPCaddress:(NSUInteger)arg1;
- (id)binaryImagePathForPCaddress:(NSUInteger)arg1;
- (void)symbolicateBacktraceUniquingTable;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)arg1;
- (BOOL)copyOriginalUniquingTable:(id)arg1;
- (void)streamFullStackLogsToBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 graph:(id)arg3 debugTimer:(id)arg4 collectDisklogs:(BOOL)arg5;

@end
