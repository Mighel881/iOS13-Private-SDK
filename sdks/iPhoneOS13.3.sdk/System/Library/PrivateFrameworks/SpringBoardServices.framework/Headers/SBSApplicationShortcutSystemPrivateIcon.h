//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString;

@interface SBSApplicationShortcutSystemPrivateIcon : SBSApplicationShortcutIcon
{
    NSString *_systemImageName;
}

@property(readonly, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
// - (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initForSubclass;
- (id)initWithSystemImageName:(id)arg1;

@end

