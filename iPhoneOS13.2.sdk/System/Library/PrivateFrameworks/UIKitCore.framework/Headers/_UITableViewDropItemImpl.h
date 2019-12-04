//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITableViewDropItem-Protocol.h>

@class NSIndexPath, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UITableViewDropItemImpl : NSObject <_UITableViewDropItem>
{
    UIDragItem *_dragItem;
    NSIndexPath *_sourceIndexPath;
    NSIndexPath *_translatedSourceIndexPath;
}

@property(retain, nonatomic, getter=_translatedSourceIndexPath, setter=_setTranslatedSourceIndexPath:) NSIndexPath *translatedSourceIndexPath; // @synthesize translatedSourceIndexPath=_translatedSourceIndexPath;
@property(retain, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
- (void)_translateSourceIndexPath:(id /* block */)arg1;
@property(readonly, nonatomic) struct CGSize previewSize;
- (id)initWithDragItem:(id)arg1 sourceIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
