//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1ProfileSegmentedFollowingViewControllerDataSourceDelegate-Protocol.h>

@class T1ScrollingSegmentedViewController, TFNTwitterAccount;
@protocol T1ScrollingSegmentedViewControllerDataSource;

@interface T1ProfileSegmentedFollowingViewController : TFNViewController <T1ProfileSegmentedFollowingViewControllerDataSourceDelegate>
{
    TFNTwitterAccount *_account;
    T1ScrollingSegmentedViewController *_contentViewController;
    id <T1ScrollingSegmentedViewControllerDataSource> _retainedDataSource;
}

@property(readonly, nonatomic) id <T1ScrollingSegmentedViewControllerDataSource> retainedDataSource; // @synthesize retainedDataSource=_retainedDataSource;
@property(readonly, nonatomic) T1ScrollingSegmentedViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)profileSegmentedFollowingViewControllerDataSource:(id)arg1 didSelectEmptyContentMessageForTab:(long long)arg2;
- (_Bool)tfn_isContentScrolledToBottom;
- (_Bool)tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
- (_Bool)tfn_supportsNavigationBarCollapsing;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithTab:(long long)arg1 userDataSource:(id)arg2 account:(id)arg3 showFollowersYouKnow:(_Bool)arg4;

@end

