//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CADDatabaseInitializationOptions;

@protocol CADAccessInterface
- (void)CADDatabaseGetAccess:(void (^)(int, BOOL, BOOL))arg1;
- (void)CADDatabaseSetInitializationOptions:(CADDatabaseInitializationOptions *)arg1 reply:(void (^)(int))arg2;
@end

