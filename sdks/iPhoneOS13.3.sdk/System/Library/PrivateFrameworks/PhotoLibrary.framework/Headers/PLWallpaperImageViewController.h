//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/PLUIEditImageViewController.h>

#import <PhotoLibrary/SBFLegibilitySettingsProviderDelegate-Protocol.h>

@class NSArray, NSString, SBSUIWallpaperPreviewViewController, UINavigationItem;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate>
{
    UINavigationItem *_navItem;
    int _wallpaperMode;
    NSArray *_navigationToolbarItems;
    BOOL _saveWallpaperData;
    NSString *_wallpaperTitle;
    unsigned int _didSetImageMode:1;
    BOOL _isWallpaperEdit;
    BOOL __statusBarHidden;
    SBSUIWallpaperPreviewViewController *_wallpaperPreviewViewController;
    long long _previewVariant;
    long long _previewType;
    long long __statusBarStyle;
}

@property(nonatomic, setter=_setStatusBarHidden:) BOOL _statusBarHidden; // @synthesize _statusBarHidden=__statusBarHidden;
@property(nonatomic, setter=_setStatusBarStyle:) long long _statusBarStyle; // @synthesize _statusBarStyle=__statusBarStyle;
@property(nonatomic) BOOL isWallpaperEdit; // @synthesize isWallpaperEdit=_isWallpaperEdit;
@property(nonatomic) long long previewType; // @synthesize previewType=_previewType;
@property(nonatomic) long long previewVariant; // @synthesize previewVariant=_previewVariant;
@property(retain, nonatomic) SBSUIWallpaperPreviewViewController *wallpaperPreviewViewController; // @synthesize wallpaperPreviewViewController=_wallpaperPreviewViewController;
@property(copy, nonatomic) NSString *wallpaperTitle; // @synthesize wallpaperTitle=_wallpaperTitle;
@property(nonatomic) BOOL saveWallpaperData; // @synthesize saveWallpaperData=_saveWallpaperData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (void)setupWallpaperPreview;
- (void)_updatePreviewFrame:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)_displayWallpaperOptionsSheet;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)motionToggledManually:(BOOL)arg1;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)setImageAsLockScreenClicked:(id)arg1;
- (void)setImageAsHomeScreenClicked:(id)arg1;
- (void)_cropWallpaperFinished:(id)arg1;
- (void)_backgroundCropWallpaper;
- (void)_savePhoto;
- (void)_updateTitles;
- (BOOL)uiipc_useTelephonyUI;
- (void)_adjustScrollViewGeometry;
- (unsigned short)imageFormat;
- (BOOL)clientIsWallpaper;
- (void)setupNavigationItem;
- (void)loadView;
- (NSUInteger)_tileAutoresizingMask;
- (NSUInteger)_contentAutoresizingMask;
- (CGRect)_viewFrame;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (long long)desiredStatusBarAnimation;
- (BOOL)wantsStatusBarVisible;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)navigationItem;
- (int)cropOverlayMode;
- (id)initWithUIImage:(id)arg1;
- (void)prepareForForeground:(id)arg1;
- (void)prepareForBackground:(id)arg1;
- (id)initWithWallpaperVariant:(long long)arg1;
- (id)init;
- (void)setWallpaperSynchronouslyFromArgs:(id)arg1;
- (void)setWallpaperFromArgs:(id)arg1;

@end
