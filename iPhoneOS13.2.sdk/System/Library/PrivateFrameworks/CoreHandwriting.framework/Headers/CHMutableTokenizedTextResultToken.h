//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHTokenizedTextResultToken.h>

@class NSIndexSet, NSString;

@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken
{
}

@property(nonatomic) long long substrokeCount; // @dynamic substrokeCount;
@property(nonatomic) unsigned long long properties; // @dynamic properties;
@property(nonatomic) double combinedScore; // @dynamic combinedScore;
@property(nonatomic) double recognitionScore; // @dynamic recognitionScore;
@property(nonatomic) unsigned int wordID; // @dynamic wordID;
@property(copy, nonatomic) NSIndexSet *strokeIndexes; // @dynamic strokeIndexes;
@property(copy, nonatomic) NSString *string; // @dynamic string;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
