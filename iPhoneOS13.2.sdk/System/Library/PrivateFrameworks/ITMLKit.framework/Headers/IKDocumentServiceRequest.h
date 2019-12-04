//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKServiceRequest.h>

#import <ITMLKit/IKJSViewModelLinkDelegate-Protocol.h>

@class IKAppDocument, IKJSViewModelLink, NSDictionary, NSString;

@interface IKDocumentServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate>
{
    IKJSViewModelLink *_link;
    struct {
        _Bool hasResponseDictionaryDidChange;
        _Bool hasDocumentDidChange;
    } _dsrDelegateFlags;
    NSDictionary *_responseDictionary;
    IKAppDocument *_appDocument;
}

@property(readonly) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
@property(readonly, copy) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2;
- (void)documentDidChangeForViewModelLink:(id)arg1;
- (void)responseDictionaryDidChangeForViewModelLink:(id)arg1;
- (void)onCancel;
- (void)onSend;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
