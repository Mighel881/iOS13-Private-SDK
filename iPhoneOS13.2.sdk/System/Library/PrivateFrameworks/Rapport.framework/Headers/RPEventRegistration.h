//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RPEventRegistration : NSObject
{
    NSString *_eventID;
    NSDictionary *_options;
    id /* block */ _handler;
}

@property(copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;

@end
