//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, SKUIURL, SKUIURLResolver, UIViewController;

@protocol SKUIURLResolverDelegate <NSObject>
- (void)URLResolver:(SKUIURLResolver *)arg1 showURL:(SKUIURL *)arg2 withTabIdentifier:(NSString *)arg3;
- (void)URLResolver:(SKUIURLResolver *)arg1 showTransientViewController:(UIViewController *)arg2;
- (UIViewController *)presentationViewControllerForURLResolver:(SKUIURLResolver *)arg1;

@optional
- (BOOL)URLResolver:(SKUIURLResolver *)arg1 shouldPerformDefaultActionForURL:(SKUIURL *)arg2;
- (void)URLResolver:(SKUIURLResolver *)arg1 didFinishWithResult:(BOOL)arg2;
@end
