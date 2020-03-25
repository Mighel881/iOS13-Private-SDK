//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class INIntent, INInteraction, INRelevantShortcut, NSString, NSUserActivity, REDonatedAction, UIImage;

@interface REUIDonatedElementProperties : NSObject <NSSecureCoding, NSCopying>
{
    UIImage *_bodyImage;
    BOOL _isUsingPlaceholderArtwork;
    BOOL _displayAppName;
    REDonatedAction *_action;
    NSString *_appName;
    UIImage *_appIcon;
    UIImage *_fullsizeAppIcon;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_monochromeBodyImage;
    NSUserActivity *_userActivity;
    INIntent *_intent;
    INRelevantShortcut *_relevantShortcut;
}

+ (BOOL)supportsSecureCoding;
+ (void)createWithDonatedAction:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) INRelevantShortcut *relevantShortcut; // @synthesize relevantShortcut=_relevantShortcut;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, nonatomic) UIImage *monochromeBodyImage; // @synthesize monochromeBodyImage=_monochromeBodyImage;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) BOOL displayAppName; // @synthesize displayAppName=_displayAppName;
@property(readonly, nonatomic) UIImage *fullsizeAppIcon; // @synthesize fullsizeAppIcon=_fullsizeAppIcon;
@property(readonly, nonatomic) UIImage *appIcon; // @synthesize appIcon=_appIcon;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) REDonatedAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
@property(readonly, nonatomic) INInteraction *interaction;
- (void)_loadAppContentPropertiesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)_scaleImageForDisplay:(id)arg1;
- (void)_loadContentForRelevantShortcut:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_loadContentForUserActivityOnShortcut:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_loadContentForUserActivity:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_loadContentForIntent:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSString *localBundleIdentifier;
@property(readonly, nonatomic) NSString *remoteBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSString *bodyImageCompositingFilter;
@property(readonly, nonatomic) UIImage *bodyImage;
@property(readonly, nonatomic, getter=isLocalDonation) BOOL localDonation;
- (id)_placeholderImageNameForBundleID:(id)arg1;
@property(readonly, nonatomic) BOOL supportsBackgroundExecution;
- (BOOL)_hasLocalExtensionForIntentExecution;
@property(readonly, nonatomic) BOOL supportsLocalIntentExecution;
@property(readonly, nonatomic) BOOL requiresRemoteExecution;
- (BOOL)_isPodcastsDonation;
- (BOOL)_isMusicDonation;
@property(readonly, nonatomic) BOOL isEndWorkoutDonation;
@property(readonly, nonatomic) BOOL isBeginWorkoutDonation;
@property(readonly, nonatomic) BOOL isWorkoutDonation;
@property(readonly, nonatomic) BOOL isMediaDonation;
@property(readonly, nonatomic) NSUInteger donationType;
- (void)loadWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDonatedAction:(id)arg1;

@end
