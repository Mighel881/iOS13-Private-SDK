//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSOperationQueue, NSString, NSURL, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfiguration : NSObject
{
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    SKUIClientContext *_clientContext;
    NSString *_currencySymbol;
    long long _currencySymbolPosition;
    NSArray *_fixedGiftAmountLabels;
    NSArray *_fixedGiftAmountValues;
    NSString *_senderName;
    struct _NSRange _giftAmountRange;
    NSURL *_giftPurchaseURL;
    NSURL *_giftValidationURL;
    long long _maximumMessageLength;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
    NSString *_senderEmailAddress;
    NSString *_storeFrontName;
    NSArray *_themes;
}

@property(readonly, nonatomic) NSArray *themes; // @synthesize themes=_themes;
@property(readonly, nonatomic) NSString *storeFrontName; // @synthesize storeFrontName=_storeFrontName;
@property(readonly, nonatomic) NSString *senderEmailAddress; // @synthesize senderEmailAddress=_senderEmailAddress;
@property(readonly, nonatomic) long long maximumMessageLength; // @synthesize maximumMessageLength=_maximumMessageLength;
@property(readonly, nonatomic) NSURL *giftValidationURL; // @synthesize giftValidationURL=_giftValidationURL;
@property(readonly, nonatomic) NSURL *giftPurchaseURL; // @synthesize giftPurchaseURL=_giftPurchaseURL;
@property(readonly, nonatomic) struct _NSRange giftAmountRange; // @synthesize giftAmountRange=_giftAmountRange;
@property(readonly, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(readonly, nonatomic) NSArray *fixedGiftAmountValues; // @synthesize fixedGiftAmountValues=_fixedGiftAmountValues;
@property(readonly, nonatomic) NSArray *fixedGiftAmountLabels; // @synthesize fixedGiftAmountLabels=_fixedGiftAmountLabels;
@property(readonly, nonatomic) long long currencySymbolPosition; // @synthesize currencySymbolPosition=_currencySymbolPosition;
@property(readonly, nonatomic) NSString *currencySymbol; // @synthesize currencySymbol=_currencySymbol;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;
- (void)_setHeaderImage:(id)arg1 forTheme:(id)arg2;
- (void)_loadThemeImages;
- (void)_finishLoadAccountInfoWithResponse:(id)arg1 error:(id)arg2 block:(id /* block */)arg3;
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (id)logoImageForCharity:(id)arg1;
- (void)loadLogoForCharity:(id)arg1;
- (void)loadConfigurationWithCompletionBlock:(id /* block */)arg1;
- (_Bool)loadCachedConfiguration;
- (id)charityForIdentifier:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;

@end
