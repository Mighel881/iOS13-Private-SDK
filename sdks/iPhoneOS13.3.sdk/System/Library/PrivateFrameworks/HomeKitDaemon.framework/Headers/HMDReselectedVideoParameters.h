//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>

@class HMDReselectedRTPParameters, HMDVideoAttributes;

@interface HMDReselectedVideoParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDVideoAttributes *_videoAttributes;
    HMDReselectedRTPParameters *_rtpParameters;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDReselectedRTPParameters *rtpParameters; // @synthesize rtpParameters=_rtpParameters;
@property(readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (BOOL)_parseFromTLVData;
- (id)tlvData;
- (id)initWithAttribute:(id)arg1 rtpParameter:(id)arg2;

@end
