//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSSourceExport-Protocol.h>

@class NSString, NUSource;

@interface NUJSSource : NUJSProxy <NUJSSourceExport>
{
}

@property(readonly) NSString *mediaType;
- (id)toString;
@property(readonly, nonatomic) NUSource *source;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithSource:(id)arg1 context:(id)arg2;

@end

