//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem
{
    NSMutableSet *_privileges;
}

+ (id)copyParseRules;
@property(retain, nonatomic) NSMutableSet *privileges; // @synthesize privileges=_privileges;
- (void)addPrivilege:(id)arg1;
- (void)write:(id)arg1;
- (id)description;
- (id)init;

@end
