//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDictionary, NSString, NSURL;

@interface SOAuthorizationRequestParameters : NSObject <NSSecureCoding>
{
    BOOL _useInternalExtensions;
    NSURL *_url;
    NSString *_requestedOperation;
    NSDictionary *_httpHeaders;
    NSData *_httpBody;
    NSString *_realm;
    NSDictionary *_extensionData;
    NSData *_auditTokenData;
    NSString *_callerBundleIdentifier;
    NSDictionary *_authorizationOptions;
    long long _responseCode;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(nonatomic) BOOL useInternalExtensions; // @synthesize useInternalExtensions=_useInternalExtensions;
@property(retain, nonatomic) NSDictionary *authorizationOptions; // @synthesize authorizationOptions=_authorizationOptions;
@property(copy, nonatomic) NSString *callerBundleIdentifier; // @synthesize callerBundleIdentifier=_callerBundleIdentifier;
@property(retain, nonatomic) NSData *auditTokenData; // @synthesize auditTokenData=_auditTokenData;
@property(copy, nonatomic) NSDictionary *extensionData; // @synthesize extensionData=_extensionData;
@property(copy, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(copy, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(copy, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(copy, nonatomic) NSString *requestedOperation; // @synthesize requestedOperation=_requestedOperation;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthorizationRequestParametersCore:(id)arg1;

@end
