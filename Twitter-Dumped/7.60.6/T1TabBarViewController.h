//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1TabBarIntegration-Protocol.h>
#import <T1Twitter/TFNCustomTabBarDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/TFNTwitterProgressCenterObserver-Protocol.h>

@class NSArray, NSString, T1TabViewGroup, TFNBarProgressView, TFNCustomTabBar, UIView;
@protocol NSCopying, T1TabBarViewControllerDelegate;

@interface T1TabBarViewController : UIViewController <TFNCustomTabBarDelegate, TFNLayoutMetricsEnvironment, TFNTwitterProgressCenterObserver, T1TabBarIntegration>
{
    _Bool _tabBarHidden;
    _Bool _tabBarShadowHidden;
    id <T1TabBarViewControllerDelegate> _delegate;
    NSArray *_tabViews;
    long long _displayMode;
    TFNCustomTabBar *_tabBar;
    UIView *_tabBarDivider;
    UIView *_tabBarBackgroundView;
    T1TabViewGroup *_tabViewGroup;
    double _maximumTabWidth;
    unsigned long long _progressViewHideAnimationCount;
    TFNBarProgressView *_progressView;
    struct UIEdgeInsets _sideBarContentEdgeInsets;
}

+ (struct CGSize)preferredContentSizeForDisplayMode:(long long)arg1 tabCount:(long long)arg2;
@property(readonly, nonatomic) TFNBarProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) unsigned long long progressViewHideAnimationCount; // @synthesize progressViewHideAnimationCount=_progressViewHideAnimationCount;
@property(nonatomic) double maximumTabWidth; // @synthesize maximumTabWidth=_maximumTabWidth;
@property(readonly, nonatomic) T1TabViewGroup *tabViewGroup; // @synthesize tabViewGroup=_tabViewGroup;
@property(readonly, nonatomic) UIView *tabBarBackgroundView; // @synthesize tabBarBackgroundView=_tabBarBackgroundView;
@property(readonly, nonatomic) UIView *tabBarDivider; // @synthesize tabBarDivider=_tabBarDivider;
@property(readonly, nonatomic) TFNCustomTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(nonatomic) struct UIEdgeInsets sideBarContentEdgeInsets; // @synthesize sideBarContentEdgeInsets=_sideBarContentEdgeInsets;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(copy, nonatomic) NSArray *tabViews; // @synthesize tabViews=_tabViews;
@property(nonatomic) __weak id <T1TabBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isTabBarShadowHidden) _Bool tabBarShadowHidden; // @synthesize tabBarShadowHidden=_tabBarShadowHidden;
@property(readonly, nonatomic, getter=isTabBarHidden) _Bool tabBarHidden; // @synthesize tabBarHidden=_tabBarHidden;
- (void).cxx_destruct;
- (void)_t1_setProgressViewProgress:(float)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_t1_setProgressViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)progressCenter:(id)arg1 didCompleteProgress:(id)arg2;
- (void)progressCenter:(id)arg1 didUpdateProgress:(id)arg2;
- (void)progressCenter:(id)arg1 didStartProgress:(id)arg2;
- (long long)customTabBar:(id)arg1 contentModeForTabAtIndex:(long long)arg2 withView:(id)arg3;
- (struct CGSize)customTabBar:(id)arg1 sizeForTabAtIndex:(long long)arg2 withView:(id)arg3;
- (void)customTabBarHighlightedTabIndexChanged:(id)arg1;
- (void)customTabBar:(id)arg1 longPressOnTabAtIndex:(long long)arg2 withView:(id)arg3;
- (void)customTabBar:(id)arg1 selectTabAtIndex:(long long)arg2 withView:(id)arg3;
- (_Bool)customTabBar:(id)arg1 selectTabRequiresLongPressFailureForTabAtIndex:(long long)arg2 withView:(id)arg3;
- (void)_t1_updateTabBarHidden;
- (void)setTabBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)setTabBarHidden:(_Bool)arg1;
- (struct CGRect)tabBarFrameInView:(id)arg1;
- (void)_t1_updateMaximumTabWidth;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (id)_t1_backgroundColorForDisplayMode;
- (struct CGRect)_t1_embeddedProgessViewFrame;
- (void)_t1_layoutTabBar;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)_t1_updateTabViews;
@property(nonatomic) long long selectedTabIndex;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <NSCopying> uniqueID;

@end

