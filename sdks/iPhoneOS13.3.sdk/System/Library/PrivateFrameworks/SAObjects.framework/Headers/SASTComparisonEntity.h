//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class SAUIDecoratedText, SAUINanoImageResource;

@interface SASTComparisonEntity : AceObject <SAAceSerializable>
{
}

+ (id)comparisonEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)comparisonEntity;
@property(retain, nonatomic) SAUINanoImageResource *imageResource;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property(retain, nonatomic) SAUIDecoratedText *decoratedTitle;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

