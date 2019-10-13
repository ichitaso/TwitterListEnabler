//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/PTVBroadcastWatcherObserver-Protocol.h>
#import <T1Twitter/PTVCustomTwitterViewDelegate-Protocol.h>
#import <T1Twitter/PTVDismissButtonDelegate-Protocol.h>
#import <T1Twitter/T1ComposeControllerDelegate-Protocol.h>
#import <T1Twitter/T1WatchBroadcastExternalVideoPlayerDelegate-Protocol.h>
#import <T1Twitter/T1WatchBroadcastViewControllerModelDelegate-Protocol.h>
#import <T1Twitter/TFNPresented-Protocol.h>

@class NSString, PTVMergeWatchBroadcastViewController, T1ComposeController, T1PeriscopeFollowPromptViewController, T1WatchBroadcastExternalVideoPlayer, T1WatchBroadcastViewControllerModel, T1WatchBroadcastViewControllerPresenter, TFNPaddedButton, UIView, UIViewController, UIWindow;
@protocol T1AutoplayFullscreenCoordinator, T1Dockable, T1WatchBroadcastViewControllerDelegate;

@interface T1WatchBroadcastViewController : TFNViewController <T1WatchBroadcastViewControllerModelDelegate, PTVCustomTwitterViewDelegate, PTVDismissButtonDelegate, T1WatchBroadcastExternalVideoPlayerDelegate, T1ComposeControllerDelegate, PTVBroadcastWatcherObserver, TFNPresented>
{
    _Bool _didAttachContentViewController;
    _Bool _didShowLocalChatMessage;
    _Bool _didShowBroadcastIntroView;
    _Bool _shouldAutoplay;
    _Bool _muted;
    _Bool _isPresentingRectifyViewController;
    T1WatchBroadcastViewControllerModel *_model;
    id <T1WatchBroadcastViewControllerDelegate> _delegate;
    id <T1AutoplayFullscreenCoordinator> _autoplayFullscreenCoordinator;
    UIView *_presenterRasterization;
    T1WatchBroadcastExternalVideoPlayer *_externalVideoPlayer;
    T1WatchBroadcastViewControllerPresenter *_presenter;
    UIViewController *_dismissingFromViewController;
    PTVMergeWatchBroadcastViewController *_contentViewController;
    T1PeriscopeFollowPromptViewController *_chatFollowPromptViewController;
    T1PeriscopeFollowPromptViewController *_overflowFollowPromptViewController;
    TFNPaddedButton *_dockButton;
    TFNPaddedButton *_backToEventButton;
    UIView *_dismissButtonView;
    T1ComposeController *_composeTweetController;
    CDUnknownBlockType _onPresentationCompletionBlock;
    UIWindow *_presentingWindow;
}

@property(nonatomic) _Bool isPresentingRectifyViewController; // @synthesize isPresentingRectifyViewController=_isPresentingRectifyViewController;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(retain, nonatomic) UIWindow *presentingWindow; // @synthesize presentingWindow=_presentingWindow;
@property(nonatomic) _Bool didShowBroadcastIntroView; // @synthesize didShowBroadcastIntroView=_didShowBroadcastIntroView;
@property(nonatomic) _Bool didShowLocalChatMessage; // @synthesize didShowLocalChatMessage=_didShowLocalChatMessage;
@property(copy, nonatomic) CDUnknownBlockType onPresentationCompletionBlock; // @synthesize onPresentationCompletionBlock=_onPresentationCompletionBlock;
@property(retain, nonatomic) T1ComposeController *composeTweetController; // @synthesize composeTweetController=_composeTweetController;
@property(retain, nonatomic) UIView *dismissButtonView; // @synthesize dismissButtonView=_dismissButtonView;
@property(retain, nonatomic) TFNPaddedButton *backToEventButton; // @synthesize backToEventButton=_backToEventButton;
@property(retain, nonatomic) TFNPaddedButton *dockButton; // @synthesize dockButton=_dockButton;
@property(retain, nonatomic) T1PeriscopeFollowPromptViewController *overflowFollowPromptViewController; // @synthesize overflowFollowPromptViewController=_overflowFollowPromptViewController;
@property(retain, nonatomic) T1PeriscopeFollowPromptViewController *chatFollowPromptViewController; // @synthesize chatFollowPromptViewController=_chatFollowPromptViewController;
@property(retain, nonatomic) PTVMergeWatchBroadcastViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) UIViewController *dismissingFromViewController; // @synthesize dismissingFromViewController=_dismissingFromViewController;
@property(retain, nonatomic) T1WatchBroadcastViewControllerPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) T1WatchBroadcastExternalVideoPlayer *externalVideoPlayer; // @synthesize externalVideoPlayer=_externalVideoPlayer;
@property(retain, nonatomic) UIView *presenterRasterization; // @synthesize presenterRasterization=_presenterRasterization;
@property(nonatomic) __weak id <T1AutoplayFullscreenCoordinator> autoplayFullscreenCoordinator; // @synthesize autoplayFullscreenCoordinator=_autoplayFullscreenCoordinator;
@property(nonatomic) __weak id <T1WatchBroadcastViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) T1WatchBroadcastViewControllerModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)scribeContext;
- (void)_t1_rectifyViewControllerDidComplete:(_Bool)arg1;
- (void)_t1_presentRectifyURLIfNeeded:(id)arg1 fromViewController:(id)arg2;
- (void)_t1_presentRectifyViewControllerWithURL:(id)arg1;
- (void)composeControllerDidEndSession:(id)arg1;
- (void)composeControllerDidBeginSession:(id)arg1;
- (_Bool)navigationDismissItemDisplaysBelowNotch;
- (_Bool)navigationItemOrderInverted;
- (_Bool)shouldSkipBroadcastIntroViewOnViewWillAppear;
- (id)dismissButton;
- (id)backToEventButtonView;
- (id)videoDockingButtonView;
- (id)viewControllerForProfileBannerForTwitterUser:(id)arg1 withLeftMargin:(double)arg2 leftOffset:(double)arg3 avatarWidth:(double)arg4;
- (id)viewControllerForProfileFollow:(id)arg1;
- (id)viewControllerForFollowPromptMessage;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)tfnPresentedCustomPresentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (id)tfs_debugStrings;
- (void)tfn_previewingStateDidChange;
- (long long)t1_dockingPresentationOption;
- (void)setInteractiveTransitionEnabled:(_Bool)arg1;
- (void)didPressDismissButton:(struct CGPoint)arg1;
- (void)externalVideoPlayer:(id)arg1 didReceiveLifecycleToken:(id)arg2 chatToken:(id)arg3 chatPermissionType:(id)arg4;
- (void)externalVideoPlayer:(id)arg1 didPressDismissButton:(id)arg2;
- (void)externalVideoPlayer:(id)arg1 didChangePlaylistItem:(id)arg2;
- (void)externalVideoPlayer:(id)arg1 didReceiveShareURL:(id)arg2;
- (void)externalVideoPlayer:(id)arg1 didObservePlaybackStateError:(id)arg2;
- (id)presentationScribeParametersForExternalVideoPlayer:(id)arg1;
- (void)broadcastController:(id)arg1 willUpdatePlaybackPointTo:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didRequestToReportMessage:(id)arg2 withReportType:(unsigned long long)arg3 isInScrollbackMode:(_Bool)arg4;
- (void)broadcastViewControllerModel:(id)arg1 willPresentUserModalFromMessage:(id)arg2 isInScrollbackMode:(_Bool)arg3;
- (void)broadcastViewControllerModel:(id)arg1 willBlockUserForMessage:(id)arg2 isInScrollbackMode:(_Bool)arg3;
- (void)broadcastViewControllerModel:(id)arg1 didSelectReplyToMessage:(id)arg2 isInScrollbackMode:(_Bool)arg3;
- (void)broadcastViewControllerModel:(id)arg1 didCancelChatMessageActionSheetIsInScrollbackMode:(_Bool)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didPresentChatMessageActionSheetIsInScrollbackMode:(_Bool)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didTapMessage:(id)arg2 atIndex:(unsigned long long)arg3 inMessages:(id)arg4 isInScrollbackMode:(_Bool)arg5;
- (void)broadcastViewControllerModelDidLeaveScrollbackMode:(id)arg1;
- (void)broadcastViewControllerModelDidEnterScrollbackMode:(id)arg1;
- (void)broadcastViewControllerModel:(id)arg1 didReceiveBroadcastUnavailable:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didReceiveStreamUnavailableError:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didRequestToShareBroadcastURL:(id)arg2 forTimecode:(double)arg3 initialTimecode:(double)arg4 fromRect:(struct CGRect)arg5 inView:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)broadcastViewControllerModel:(id)arg1 didRequestToComposeDirectMessageWithBroadcastShareURL:(id)arg2 forTimecode:(double)arg3 initialTimecode:(double)arg4 fromRect:(struct CGRect)arg5 inView:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)broadcastViewControllerModel:(id)arg1 didRequestToComposeTweet:(id)arg2 forTimecode:(double)arg3 initialTimecode:(double)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)broadcastViewControllerModelWillDismissShareBroadcastScreen:(id)arg1 withoutSharingSelectedTimecode:(double)arg2 initialTimecode:(double)arg3;
- (void)broadcastViewControllerModelWillPresentShareBroadcastScreen:(id)arg1;
- (void)broadcastViewControllerModel:(id)arg1 didReceiveBroadcastingTwitterUser:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didToggleTheaterModeEnabled:(_Bool)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didSendMessage:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 loggedInUserBlockedByBroadcasterInBroadcast:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didDeleteBroadcast:(id)arg2 error:(id)arg3;
- (void)broadcastViewControllerModel:(id)arg1 didUnblockUserWithUserReference:(id)arg2 error:(id)arg3;
- (void)broadcastViewControllerModel:(id)arg1 didBlockUserWithUserReference:(id)arg2 error:(id)arg3;
- (void)broadcastViewControllerModel:(id)arg1 didRetweetStatus:(id)arg2 forBroadcast:(id)arg3 error:(id)arg4;
- (void)broadcastViewControllerModel:(id)arg1 didReceiveAuthenticationErrorWithRectifyURL:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didRequestToReportBroadcast:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didRequestToShareScreenshot:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didRequestToShareBroadcast:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didUpdateLiveEvent:(id)arg2;
- (void)broadcastViewControllerModel:(id)arg1 didUpdateBroadcast:(id)arg2;
- (void)_t1_dispose;
- (void)_t1_dismissContentViewControllerWithCompletion:(CDUnknownBlockType)arg1 sender:(id)arg2;
- (void)_t1_dismissContentViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_t1_attachContentViewControllerAnimated:(_Bool)arg1;
- (void)_t1_initiateContentPlaybackAnimated:(_Bool)arg1;
- (void)_t1_logChatMessageActionSheetAction:(id)arg1;
- (void)_t1_broadcastOrStreamReceivedUnavailable;
- (void)_t1_queueLocalChatMessageIfNecessary;
- (void)_t1_dockButtonTapped:(id)arg1;
- (id)_t1_viewControllerToPresentFrom;
- (void)_t1_presentActivityViewControllerWithShareURL:(id)arg1 image:(id)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_t1_presentActivityViewControllerWithShareURL:(id)arg1 image:(id)arg2 type:(long long)arg3;
- (void)_t1_dismissButtonPressed;
- (void)_t1_didTapEventButton;
- (void)_t1_didSetupSelfWithBroadcast:(id)arg1 account:(id)arg2;
- (void)_t1_setupSelfWithBroadcastIDOrShareToken:(id)arg1 account:(id)arg2;
- (void)pauseBroadcast;
- (void)playBroadcast;
- (void)dismissFullscreenPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithBroadcastIDOrShareToken:(id)arg1 account:(id)arg2;
- (id)initWithBroadcast:(id)arg1 account:(id)arg2 cardDataSource:(id)arg3 liveEvent:(id)arg4 presentingFromWindow:(id)arg5 shouldAutoplay:(_Bool)arg6;
@property(retain, nonatomic) TFNViewController<T1Dockable> *t1_dockableSourceViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

