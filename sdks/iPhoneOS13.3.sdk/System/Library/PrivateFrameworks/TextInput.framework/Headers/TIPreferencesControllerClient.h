//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIPreferencesController.h>

@class NSString, NSXPCConnection;

@interface TIPreferencesControllerClient : TIPreferencesController
{
    NSXPCConnection *_connection;
    BOOL _writeable;
    BOOL _isValid;
    NSString *_machName;
}

+ (id)sharedPreferencesController;
+ (id)serviceInterface;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSString *machName; // @synthesize machName=_machName;
// - (void).cxx_destruct;
- (void)updateInputModes:(id)arg1;
- (void)performWithWriteability:(BOOL)arg1 operations:(id /* CDUnknownBlockType */)arg2;
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;
- (void)forwardInvocation:(id)arg1;
- (void)createConnectionIfNecessary;
- (void)dealloc;
- (void)_disconnect;
- (id)init;

@end

