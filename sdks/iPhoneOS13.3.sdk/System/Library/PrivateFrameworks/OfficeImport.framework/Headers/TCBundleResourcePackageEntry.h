//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OISFUZipEntry;

__attribute__((visibility("hidden")))
@interface TCBundleResourcePackageEntry : NSObject
{
    OISFUZipEntry *mZipEntry;
    struct _xmlDoc mXmlDocument;
}

// - (void).cxx_destruct;
- (struct _xmlDoc )xmlDocument;
- (id)data;
- (void)dealloc;
- (id)initWithZipEntry:(id)arg1;

@end

