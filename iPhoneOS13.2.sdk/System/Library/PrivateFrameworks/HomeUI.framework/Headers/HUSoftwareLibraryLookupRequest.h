//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying>
{
    NSString *_bundleID;
    NSString *_storeID;
}

@property(readonly, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleID:(id)arg1 storeID:(id)arg2;

@end
