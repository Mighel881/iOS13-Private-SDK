//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface STUserDescription : NSObject
{
    NSString *_givenName;
    NSString *_familyName;
    NSNumber *_userDSID;
    NSString *_userAltDSID;
}

+ (id)currentUser;
@property(readonly, copy, nonatomic) NSString *userAltDSID; // @synthesize userAltDSID=_userAltDSID;
@property(readonly, copy, nonatomic) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(readonly, copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(readonly, copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
- (id)initWithGivenName:(id)arg1 familyName:(id)arg2 userDSID:(id)arg3 userAltDSID:(id)arg4;

@end
