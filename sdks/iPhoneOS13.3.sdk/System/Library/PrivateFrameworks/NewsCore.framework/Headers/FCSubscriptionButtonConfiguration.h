//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FCColor, NSString, NSURL;

@interface FCSubscriptionButtonConfiguration : NSObject <NSCopying>
{
    BOOL _dismissLandingPagePostPurchase;
    NSUInteger _subscriptionButtonType;
    NSString *_trialText;
    NSString *_nonTrialText;
    NSUInteger _targetType;
    NSUInteger _postPurchaseActionType;
    NSURL *_postPurchaseURL;
    NSString *_landingPageArticleID;
    FCColor *_buttonColor;
    FCColor *_buttonTextColor;
}

+ (id)defaultNonTrialText;
+ (id)defaultTrialText;
+ (id)defaultSubscriptionButtonText;
+ (id)defaultIssueCoverSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultLandingPageSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultArticleSubscriptionButtonWithLandingPageArticleID:(id)arg1;
+ (id)defaultOsloSheetTargetSubscriptionButton;
+ (id)defaultLandingPageTargetSubscriptionButtonWithLandingPageArticleID:(id)arg1;
@property(nonatomic, getter=shouldDismissLandingPagePostPurchase) BOOL dismissLandingPagePostPurchase; // @synthesize dismissLandingPagePostPurchase=_dismissLandingPagePostPurchase;
@property(retain, nonatomic) FCColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) FCColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(copy, nonatomic) NSString *landingPageArticleID; // @synthesize landingPageArticleID=_landingPageArticleID;
@property(copy, nonatomic) NSURL *postPurchaseURL; // @synthesize postPurchaseURL=_postPurchaseURL;
@property(nonatomic) NSUInteger postPurchaseActionType; // @synthesize postPurchaseActionType=_postPurchaseActionType;
@property(nonatomic) NSUInteger targetType; // @synthesize targetType=_targetType;
@property(copy, nonatomic) NSString *nonTrialText; // @synthesize nonTrialText=_nonTrialText;
@property(copy, nonatomic) NSString *trialText; // @synthesize trialText=_trialText;
@property(nonatomic) NSUInteger subscriptionButtonType; // @synthesize subscriptionButtonType=_subscriptionButtonType;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSubscriptionButtonType:(NSUInteger)arg1 trialText:(id)arg2 nonTrialText:(id)arg3 buttonColor:(id)arg4 buttonTextColor:(id)arg5 targetType:(NSUInteger)arg6 postPurchaseActionType:(NSUInteger)arg7 postPurchaseURL:(id)arg8 landingPageArticleID:(id)arg9 dismissLandingPagePostPurchase:(BOOL)arg10;
- (id)initWithConfigDictionary:(id)arg1;
- (id)init;

@end

