//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUserDefaultsDataSource-Protocol.h>

@class NSDate;
@protocol OS_dispatch_queue;

@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setPersistedValue:(id)arg1 forKey:(id)arg2;
- (id)persistedValueForKey:(id)arg1;
@property(readonly, nonatomic) NSDate *currentDate;
- (id)init;

@end
