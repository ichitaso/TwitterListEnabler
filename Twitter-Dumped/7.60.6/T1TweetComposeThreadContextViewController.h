//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1ThreadTweetsViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>

@class NSString, T1ThreadTweetsConnectorView, T1ThreadTweetsStatusView, T1ThreadTweetsViewController, T1TweetComposeThreadContextMoreButton, TFNButton, TFNTwitterAccount, TFNTwitterComposition, TFNTwitterStatus, TFSTwitterScribeContext;
@protocol T1TweetComposeThreadContextViewControllerDelegate;

@interface T1TweetComposeThreadContextViewController : UIViewController <T1ThreadTweetsViewControllerDelegate, TFNModalSheetViewControllerLayoutDelegate>
{
    _Bool _contextTweetAdded;
    id <T1TweetComposeThreadContextViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    TFNTwitterComposition *_composition;
    TFSTwitterScribeContext *_scribeContext;
    T1ThreadTweetsStatusView *_statusView;
    TFNButton *_addRemoveButton;
    T1TweetComposeThreadContextMoreButton *_moreButton;
    T1ThreadTweetsConnectorView *_connectorView;
    id _currentFetchStatusTag;
    TFNTwitterStatus *_status;
    T1ThreadTweetsViewController *_selectThreadViewController;
}

@property(retain, nonatomic) T1ThreadTweetsViewController *selectThreadViewController; // @synthesize selectThreadViewController=_selectThreadViewController;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) id currentFetchStatusTag; // @synthesize currentFetchStatusTag=_currentFetchStatusTag;
@property(retain, nonatomic) T1ThreadTweetsConnectorView *connectorView; // @synthesize connectorView=_connectorView;
@property(retain, nonatomic) T1TweetComposeThreadContextMoreButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) _Bool contextTweetAdded; // @synthesize contextTweetAdded=_contextTweetAdded;
@property(retain, nonatomic) TFNButton *addRemoveButton; // @synthesize addRemoveButton=_addRemoveButton;
@property(retain, nonatomic) T1ThreadTweetsStatusView *statusView; // @synthesize statusView=_statusView;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1TweetComposeThreadContextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)threadTweetsViewControllerDidTapDone:(id)arg1;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
@property(readonly, nonatomic) double peekHeight;
- (void)_t1_updateContextTweedAdded;
- (void)_t1_updateSelectThreadViewControllerForAccount;
- (void)_t1_presentSelectThreadViewController;
- (void)_t1_action_addRemoveButtonDidTouchUpInside:(id)arg1;
- (void)_t1_updateViewDisplayState;
- (void)_t1_updateStatusView;
- (void)_t1_updateStatus;
- (void)_t1_updatePreferredContentSize;
- (void)_t1_layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 scribeContext:(id)arg2 delegate:(id)arg3 composition:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

