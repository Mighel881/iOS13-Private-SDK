//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFDataConsumer-Protocol.h>

@interface MFBlockDataConsumer : NSObject <MFDataConsumer>
{
    id /* CDUnknownBlockType */ _appendHandler;
    id /* CDUnknownBlockType */ _doneHandler;
}

// - (void).cxx_destruct;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)initWithAppendHandler:(id /* CDUnknownBlockType */)arg1 doneHandler:(id /* CDUnknownBlockType */)arg2;

@end

