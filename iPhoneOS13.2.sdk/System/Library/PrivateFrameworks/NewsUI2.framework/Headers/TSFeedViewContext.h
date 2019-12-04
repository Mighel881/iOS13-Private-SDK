//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, TSAnalyticsReferral;

@interface TSFeedViewContext : NSObject
{
    // Error parsing type: , name: presentationReason
    // Error parsing type: , name: feedPickerSection
    // Error parsing type: , name: feedPickerType
    // Error parsing type: , name: sourceURL
    // Error parsing type: , name: sourceApplication
    // Error parsing type: , name: userActivityType
    // Error parsing type: , name: sourceSearchText
    // Error parsing type: , name: adPreviewID
    // Error parsing type: , name: adPreviewSessionID
    // Error parsing type: , name: maximumAdRequestsForCurrentAdPreviewID
    // Error parsing type: , name: displayRank
    // Error parsing type: , name: externalAnalyticsFeedReferrer
    // Error parsing type: , name: referral
    // Error parsing type: , name: previousArticleID
    // Error parsing type: , name: previousArticleVersion
    // Error parsing type: , name: showSubscribedAlert
}

- (id)init;
- (void)setWithShowSubscribedAlert:(_Bool)arg1;
- (void)setWithPreviousArticleVersion:(long long)arg1;
- (void)setWithPreviousArticleID:(id)arg1;
- (void)setWithReferral:(id)arg1;
- (void)setWithExternalAnalyticsFeedReferrer:(long long)arg1;
- (void)setWithDisplayRank:(long long)arg1;
- (void)setWithMaximumAdRequestsForCurrentAdPreviewID:(long long)arg1;
- (void)setWithAdPreviewSessionID:(id)arg1;
- (void)setWithAdPreviewID:(id)arg1;
- (void)setWithSourceSearchText:(id)arg1;
- (void)setWithUserActivityType:(id)arg1;
- (void)setWithSourceApplication:(id)arg1;
- (void)setWithSourceURL:(id)arg1;
- (void)setWithFeedPickerType:(int)arg1;
- (void)setWithFeedPickerSection:(int)arg1;
- (void)setWithPresentationReason:(int)arg1;
@property(nonatomic) _Bool showSubscribedAlert; // @synthesize showSubscribedAlert;
@property(nonatomic, retain) NSNumber *previousArticleVersion; // @synthesize previousArticleVersion;
@property(nonatomic, copy) NSString *previousArticleID;
@property(nonatomic, retain) TSAnalyticsReferral *referral; // @synthesize referral;
@property(nonatomic, retain) NSNumber *externalAnalyticsFeedReferrer; // @synthesize externalAnalyticsFeedReferrer;
@property(nonatomic, retain) NSNumber *displayRank; // @synthesize displayRank;
@property(nonatomic, retain) NSNumber *maximumAdRequestsForCurrentAdPreviewID; // @synthesize maximumAdRequestsForCurrentAdPreviewID;
@property(nonatomic, copy) NSString *adPreviewSessionID;
@property(nonatomic, copy) NSString *adPreviewID;
@property(nonatomic, copy) NSString *sourceSearchText;
@property(nonatomic, copy) NSString *userActivityType;
@property(nonatomic, copy) NSString *sourceApplication;
@property(nonatomic, copy) NSURL *sourceURL;
@property(nonatomic, retain) NSNumber *feedPickerType; // @synthesize feedPickerType;
@property(nonatomic, retain) NSNumber *feedPickerSection; // @synthesize feedPickerSection;
@property(nonatomic, retain) NSNumber *presentationReason; // @synthesize presentationReason;

@end
