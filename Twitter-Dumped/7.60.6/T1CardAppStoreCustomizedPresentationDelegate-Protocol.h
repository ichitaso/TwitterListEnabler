//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class UIViewController;
@protocol UIViewControllerTransitioningDelegate;

@protocol T1CardAppStoreCustomizedPresentationDelegate <NSObject>
- (void)dismissAppStoreController;
- (UIViewController *)presentingViewController;
- (id <UIViewControllerTransitioningDelegate>)transitioningDelegate;
- (long long)presentationStyle;
- (_Bool)customizeAppStoreViewControllerPresentationIfNeeded;
@end

