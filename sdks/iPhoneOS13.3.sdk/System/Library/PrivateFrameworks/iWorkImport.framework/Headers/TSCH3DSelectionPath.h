//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHSelectionPath.h>

__attribute__((visibility("hidden")))
@interface TSCH3DSelectionPath : TSCHSelectionPath
{
    Class mSceneObjectClass;
    NSUInteger mStyleIndex;
}

+ (id)selectionPathWithClass:(Class)arg1 styleIndex:(NSUInteger)arg2 selectionPath:(id)arg3;
+ (id)selectionPathWithClass:(Class)arg1 styleIndex:(NSUInteger)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5;
@property(readonly, nonatomic) NSUInteger styleIndex; // @synthesize styleIndex=mStyleIndex;
@property(readonly, nonatomic) Class sceneObjectClass; // @synthesize sceneObjectClass=mSceneObjectClass;
- (id)initWithClass:(Class)arg1 styleIndex:(NSUInteger)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5;

@end

