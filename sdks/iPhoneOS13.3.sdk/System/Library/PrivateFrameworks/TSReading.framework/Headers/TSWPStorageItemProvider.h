//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface TSWPStorageItemProvider : NSObject <NSItemProviderWriting>
{
    NSString *_string;
}

+ (id)writableTypeIdentifiersForItemProvider;
+ (id)storageItemProviderWithString:(id)arg1;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_loadPlainTextData:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end
