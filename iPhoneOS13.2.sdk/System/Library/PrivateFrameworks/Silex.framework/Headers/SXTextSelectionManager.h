//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTextSelectionManager-Protocol.h>

@class NSHashTable, NSString;

@interface SXTextSelectionManager : NSObject <SXTextSelectionManager>
{
    NSHashTable *_textSelecting;
}

@property(readonly, nonatomic) NSHashTable *textSelecting; // @synthesize textSelecting=_textSelecting;
- (void)clearSelection;
- (void)addTextSelecting:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
