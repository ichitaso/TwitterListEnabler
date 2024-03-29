//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1AppSplitNewsCameraViewController, T1AppSplitViewController, T1DashViewController, UITouch, UIViewController;

@protocol T1AppSplitViewControllerDelegate <NSObject>

@optional
- (_Bool)appSplitViewController:(T1AppSplitViewController *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (_Bool)appSplitViewController:(T1AppSplitViewController *)arg1 canDismissNewsCameraViewController:(T1AppSplitNewsCameraViewController *)arg2;
- (_Bool)appSplitViewController:(T1AppSplitViewController *)arg1 canPresentNewsCameraFromViewController:(UIViewController *)arg2;
- (_Bool)appSplitViewController:(T1AppSplitViewController *)arg1 canDismissDashViewController:(T1DashViewController *)arg2;
- (_Bool)appSplitViewController:(T1AppSplitViewController *)arg1 canPresentDashFromViewController:(UIViewController *)arg2;
- (UIViewController *)contentPresentingViewControllerForAppSplitViewController:(T1AppSplitViewController *)arg1;
- (UIViewController *)panelPresentingViewControllerForAppSplitViewController:(T1AppSplitViewController *)arg1;
- (void)appSplitViewControllerDashPanelOpenPercentDidChange:(T1AppSplitViewController *)arg1;
- (void)appSplitViewControllerSplitModeDidChange:(T1AppSplitViewController *)arg1;
@end

