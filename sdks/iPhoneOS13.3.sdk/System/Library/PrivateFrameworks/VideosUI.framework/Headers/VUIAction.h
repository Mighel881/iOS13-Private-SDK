//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIAction-Protocol.h>

__attribute__((visibility("hidden")))
@interface VUIAction : NSObject <VUIAction>
{
}

+ (id)actionWithDictionary:(id)arg1 viewElement:(id)arg2 appContext:(id)arg3;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isAccountRequired;

@end

