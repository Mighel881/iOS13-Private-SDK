//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarRecordInternal-Protocol.h>

@class NSString;

@interface AVTAvatarPuppetRecord : NSObject <AVTAvatarRecordInternal>
{
    NSString *_puppetName;
}

+ (id /* block */)matchingIdentifierTest:(id)arg1;
@property(readonly, copy, nonatomic) NSString *puppetName; // @synthesize puppetName=_puppetName;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isPuppet) _Bool puppet;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithPuppetName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
