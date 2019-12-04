//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageLegacy/MFDiagnosticsGenerator-Protocol.h>

@class MFConnectionSettings, NSArray, NSString, _MFSocket;
@protocol MFSASLSecurityLayer;

@interface MFConnection : NSObject <MFDiagnosticsGenerator>
{
    id <MFSASLSecurityLayer> _securityLayer;
    MFConnectionSettings *_connectionSettings;
    _MFSocket *_socket;
    double _lastUsedTime;
    char *_buffer;
    long long _bufferRemainingBytes;
    unsigned long long _bufferStart;
    unsigned long long _bufferLength;
    unsigned long long _desiredBufferLength;
    struct z_stream_s *_deflater;
    struct z_stream_s *_inflater;
    char *_zbuffer;
    unsigned int _readBytesNotLogged;
    unsigned int _isFetching:1;
    unsigned int _allowFallbacks:1;
    unsigned int _compressionEnabled:1;
}

+ (_Bool)shouldTryFallbacksAfterError:(id)arg1;
+ (void)setLogActivityOnHosts:(id)arg1;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (id)logActivityOnPorts;
+ (void)setLogAllSocketActivity:(_Bool)arg1;
+ (_Bool)logAllSocketActivity;
+ (void)setLogClasses:(id)arg1;
+ (id)logClasses;
+ (void)flushLog;
+ (void)logConnection:(id)arg1 type:(long long)arg2 data:(id)arg3;
+ (void)initialize;
+ (void)readLoggingDefaults;
- (id)copyDiagnosticInformation;
- (void)setConnectionSettings:(id)arg1;
- (id)connectionSettings;
@property(readonly, nonatomic) double lastUsedTime;
@property(readonly, nonatomic) _Bool hasBytesAvailable;
- (void)disconnect;
@property(readonly, nonatomic) _Bool isValid;
- (void)endCompression;
- (_Bool)startCompression;
@property(readonly, nonatomic) NSString *securityProtocol;
- (_Bool)startTLSForAccount:(id)arg1;
- (_Bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (_Bool)readBytesIntoData:(id)arg1 desiredLength:(unsigned long long)arg2;
- (_Bool)readLineIntoData:(id)arg1;
- (void)logReadChars:(const char *)arg1 length:(unsigned long long)arg2;
- (void)enableThroughputMonitoring:(_Bool)arg1;
- (void)setDesiredReadBufferLength:(unsigned long long)arg1;
- (_Bool)writeData:(id)arg1;
- (_Bool)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange)arg2;
- (_Bool)writeBytes:(const char *)arg1 length:(unsigned long long)arg2 dontLogBytesInRange:(struct _NSRange)arg3;
@property(readonly, nonatomic) _Bool usesOpportunisticSockets;
@property(readonly, nonatomic) _Bool loginDisabled;
@property(readonly, nonatomic) NSArray *authenticationMechanisms;
@property(readonly, nonatomic) NSArray *capabilities;
- (_Bool)authenticateUsingAccount:(id)arg1;
- (void)setAllowsFallbacks:(_Bool)arg1;
- (_Bool)connectUsingFallbacksForAccount:(id)arg1;
- (_Bool)connectUsingAccount:(id)arg1;
- (_Bool)connectUsingSettings:(id)arg1;
- (void)_setupSocketWithSettings:(id)arg1;
@property(nonatomic) _Bool isFetching;
@property(readonly, nonatomic) _Bool isCellularConnection;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
