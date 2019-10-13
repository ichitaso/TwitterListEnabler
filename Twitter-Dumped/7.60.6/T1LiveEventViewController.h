//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderContainerViewController.h>

#import <T1Twitter/T1ComposeCustomAction-Protocol.h>
#import <T1Twitter/T1Dockable-Protocol.h>
#import <T1Twitter/T1DockingControllerDelegate-Protocol.h>
#import <T1Twitter/T1ImageTransitionDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventCarouselSubheaderViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventCarouselTransitionObserver-Protocol.h>
#import <T1Twitter/T1LiveEventHeaderCarouselEntryViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventHeaderViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventHeaderViewControllerScribeDataSource-Protocol.h>
#import <T1Twitter/T1LiveEventMetadataSubheaderViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventPlayerStateControllerDelegate-Protocol.h>
#import <T1Twitter/T1LiveEventViewControllerScrollingHandlerDelegate-Protocol.h>
#import <T1Twitter/T1MediaInlineComposeControllerDelegate-Protocol.h>
#import <T1Twitter/T1MomentTrustAndSafetyDelegate-Protocol.h>
#import <T1Twitter/T1ResizableHeaderContentDelegate-Protocol.h>
#import <T1Twitter/T1SlideshowViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1UpdateIndicatorDelegate-Protocol.h>
#import <T1Twitter/T1WatchBroadcastViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterLiveEventMetadataLoaderDelegate-Protocol.h>

@class NSArray, NSDictionary, NSError, NSLayoutConstraint, NSNumber, NSString, T1EmptyContentViewController, T1LiveEventCarouselSubheaderViewController, T1LiveEventCarouselTransitionHandler, T1LiveEventHeaderCarouselEntryViewController, T1LiveEventHeaderViewController, T1LiveEventLoadingView, T1LiveEventMediaViewController, T1LiveEventMetadataRefreshRecurringTask, T1LiveEventMetadataSubheaderViewController, T1LiveEventPlayerStateController, T1LiveEventScoreSubheaderViewController, T1LiveEventViewControllerScrollingHandler, T1MediaInlineComposeController, T1SlideshowViewController, TFNTwitterLiveEvent, TFNTwitterLiveEventCarouselEntry, TFNTwitterLiveEventTimelineVariant, TFSTimer, TFSTwitterRecurringTaskTimerEventSource, TFSTwitterScribeContext, UIView, UIVisualEffectView;
@protocol TFNTwitterCardDataSource;

@interface T1LiveEventViewController : T1ResizableHeaderContainerViewController <T1ResizableHeaderContentDelegate, T1LiveEventPlayerStateControllerDelegate, TFNTwitterLiveEventMetadataLoaderDelegate, T1ComposeCustomAction, T1MediaInlineComposeControllerDelegate, T1LiveEventMetadataSubheaderViewControllerDelegate, T1Dockable, T1DockingControllerDelegate, T1LiveEventViewControllerScrollingHandlerDelegate, T1ImageTransitionDelegate, T1SlideshowViewControllerDelegate, T1UpdateIndicatorDelegate, T1LiveEventCarouselSubheaderViewControllerDelegate, T1WatchBroadcastViewControllerDelegate, T1LiveEventCarouselTransitionObserver, T1LiveEventHeaderCarouselEntryViewControllerDelegate, T1LiveEventHeaderViewControllerScribeDataSource, T1LiveEventHeaderViewControllerDelegate, T1MomentTrustAndSafetyDelegate>
{
    _Bool _dockingEnabled;
    _Bool _hasDisplayedPrompt;
    _Bool _videoWasDockedFromFullscreenCompose;
    _Bool _liveEventMultiVideoPinningEnabled;
    _Bool _liveEventSquishyHeaderEnabled;
    _Bool _liveEventChromeSyncEnabled;
    _Bool _liveEventScoreCardPinningEnabled;
    _Bool _liveEventHeaderLockingEnabled;
    _Bool _lockedHeaderExpanding;
    TFNTwitterLiveEvent *_liveEvent;
    TFNTwitterLiveEventCarouselEntry *_preselectedCarouselEntry;
    NSArray *_liveEventTimelineViewControllers;
    T1EmptyContentViewController *_emptyContentViewController;
    NSDictionary *_timelineIdentifierToControllerMapping;
    T1LiveEventViewControllerScrollingHandler *_scrollingHandler;
    T1LiveEventPlayerStateController *_playerStateController;
    T1LiveEventLoadingView *_loadingView;
    T1LiveEventMetadataRefreshRecurringTask *_metadataRefreshTask;
    TFSTwitterRecurringTaskTimerEventSource *_metadataRefreshTaskTimerEventSource;
    T1LiveEventMetadataSubheaderViewController *_metadataSubheaderViewController;
    T1LiveEventScoreSubheaderViewController *_scoreSubheaderViewController;
    T1LiveEventCarouselSubheaderViewController *_carouselSubheaderViewController;
    T1LiveEventCarouselTransitionHandler *_carouselTransitionHandler;
    T1MediaInlineComposeController *_inlineComposeController;
    T1SlideshowViewController *_slideshowViewController;
    UIVisualEffectView *_sensitiveBlurView;
    NSError *_timelineLoadError;
    TFNTwitterLiveEventTimelineVariant *_scribeSelectedTimelineVariant;
    TFSTimer *_showGeoblockingErrorTimer;
    NSNumber *_carouselCount;
    NSString *_timelineIDForSelectionOnInitialLoad;
    UIView *_customNavigationBarBackgroundView;
    NSLayoutConstraint *_loadingViewTopLayoutConstraint;
    NSLayoutConstraint *_loadingViewBottomLayoutConstraint;
    TFSTimer *_fadeTimer;
}

@property(nonatomic, getter=isLockedHeaderExpanding) _Bool lockedHeaderExpanding; // @synthesize lockedHeaderExpanding=_lockedHeaderExpanding;
@property(retain, nonatomic) TFSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
@property(retain, nonatomic) NSLayoutConstraint *loadingViewBottomLayoutConstraint; // @synthesize loadingViewBottomLayoutConstraint=_loadingViewBottomLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *loadingViewTopLayoutConstraint; // @synthesize loadingViewTopLayoutConstraint=_loadingViewTopLayoutConstraint;
@property(retain, nonatomic) UIView *customNavigationBarBackgroundView; // @synthesize customNavigationBarBackgroundView=_customNavigationBarBackgroundView;
@property(nonatomic, getter=isLiveEventHeaderLockingEnabled) _Bool liveEventHeaderLockingEnabled; // @synthesize liveEventHeaderLockingEnabled=_liveEventHeaderLockingEnabled;
@property(nonatomic, getter=isLiveEventScoreCardPinningEnabled) _Bool liveEventScoreCardPinningEnabled; // @synthesize liveEventScoreCardPinningEnabled=_liveEventScoreCardPinningEnabled;
@property(nonatomic, getter=isLiveEventChromeSyncEnabled) _Bool liveEventChromeSyncEnabled; // @synthesize liveEventChromeSyncEnabled=_liveEventChromeSyncEnabled;
@property(nonatomic, getter=isLiveEventSquishyHeaderEnabled) _Bool liveEventSquishyHeaderEnabled; // @synthesize liveEventSquishyHeaderEnabled=_liveEventSquishyHeaderEnabled;
@property(nonatomic, getter=isLiveEventMultiVideoPinningEnabled) _Bool liveEventMultiVideoPinningEnabled; // @synthesize liveEventMultiVideoPinningEnabled=_liveEventMultiVideoPinningEnabled;
@property(copy, nonatomic) NSString *timelineIDForSelectionOnInitialLoad; // @synthesize timelineIDForSelectionOnInitialLoad=_timelineIDForSelectionOnInitialLoad;
@property(retain, nonatomic) NSNumber *carouselCount; // @synthesize carouselCount=_carouselCount;
@property(retain, nonatomic) TFSTimer *showGeoblockingErrorTimer; // @synthesize showGeoblockingErrorTimer=_showGeoblockingErrorTimer;
@property(retain, nonatomic) TFNTwitterLiveEventTimelineVariant *scribeSelectedTimelineVariant; // @synthesize scribeSelectedTimelineVariant=_scribeSelectedTimelineVariant;
@property(nonatomic) _Bool videoWasDockedFromFullscreenCompose; // @synthesize videoWasDockedFromFullscreenCompose=_videoWasDockedFromFullscreenCompose;
@property(retain, nonatomic) NSError *timelineLoadError; // @synthesize timelineLoadError=_timelineLoadError;
@property(retain, nonatomic) UIVisualEffectView *sensitiveBlurView; // @synthesize sensitiveBlurView=_sensitiveBlurView;
@property(nonatomic) _Bool hasDisplayedPrompt; // @synthesize hasDisplayedPrompt=_hasDisplayedPrompt;
@property(nonatomic) __weak T1SlideshowViewController *slideshowViewController; // @synthesize slideshowViewController=_slideshowViewController;
@property(retain, nonatomic) T1MediaInlineComposeController *inlineComposeController; // @synthesize inlineComposeController=_inlineComposeController;
@property(retain, nonatomic) T1LiveEventCarouselTransitionHandler *carouselTransitionHandler; // @synthesize carouselTransitionHandler=_carouselTransitionHandler;
@property(retain, nonatomic) T1LiveEventCarouselSubheaderViewController *carouselSubheaderViewController; // @synthesize carouselSubheaderViewController=_carouselSubheaderViewController;
@property(retain, nonatomic) T1LiveEventScoreSubheaderViewController *scoreSubheaderViewController; // @synthesize scoreSubheaderViewController=_scoreSubheaderViewController;
@property(retain, nonatomic) T1LiveEventMetadataSubheaderViewController *metadataSubheaderViewController; // @synthesize metadataSubheaderViewController=_metadataSubheaderViewController;
@property(readonly, nonatomic) TFSTwitterRecurringTaskTimerEventSource *metadataRefreshTaskTimerEventSource; // @synthesize metadataRefreshTaskTimerEventSource=_metadataRefreshTaskTimerEventSource;
@property(readonly, nonatomic) T1LiveEventMetadataRefreshRecurringTask *metadataRefreshTask; // @synthesize metadataRefreshTask=_metadataRefreshTask;
@property(readonly, nonatomic) T1LiveEventLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) T1LiveEventPlayerStateController *playerStateController; // @synthesize playerStateController=_playerStateController;
@property(readonly, nonatomic) _Bool dockingEnabled; // @synthesize dockingEnabled=_dockingEnabled;
@property(readonly, nonatomic) T1LiveEventViewControllerScrollingHandler *scrollingHandler; // @synthesize scrollingHandler=_scrollingHandler;
@property(retain, nonatomic) NSDictionary *timelineIdentifierToControllerMapping; // @synthesize timelineIdentifierToControllerMapping=_timelineIdentifierToControllerMapping;
@property(retain, nonatomic) T1EmptyContentViewController *emptyContentViewController; // @synthesize emptyContentViewController=_emptyContentViewController;
@property(retain, nonatomic) NSArray *liveEventTimelineViewControllers; // @synthesize liveEventTimelineViewControllers=_liveEventTimelineViewControllers;
@property(retain, nonatomic) TFNTwitterLiveEventCarouselEntry *preselectedCarouselEntry; // @synthesize preselectedCarouselEntry=_preselectedCarouselEntry;
@property(retain, nonatomic) TFNTwitterLiveEvent *liveEvent; // @synthesize liveEvent=_liveEvent;
- (void).cxx_destruct;
- (void)watchBroadcastViewControllerWillDismiss:(id)arg1;
- (void)watchBroadcastViewControllerDidRequestDock:(id)arg1;
- (_Bool)slideshowShouldAllowVideoDocking:(id)arg1;
- (void)slideshow:(id)arg1 didSelectSticker:(id)arg2;
- (void)slideshow:(id)arg1 status:(id)arg2 didSelectActiveRange:(id)arg3;
- (void)slideshow:(id)arg1 didSelectStatusReply:(id)arg2;
- (void)slideshow:(id)arg1 dismissAndPresentViewController:(id)arg2;
- (void)slideshow:(id)arg1 didSelectUser:(id)arg2;
- (void)slideshow:(id)arg1 didDeleteStatus:(id)arg2;
- (void)slideshow:(id)arg1 didSelectStatus:(id)arg2;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)setPreviewImageHidden:(_Bool)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
- (void)imageTransitionViewController:(id)arg1 didTransition:(_Bool)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageContentsRectForObject:(id)arg2;
- (long long)imageTransitionViewController:(id)arg1 contentModeForPreviewFrameOfObject:(id)arg2;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (id)inlineComposeControllerScribeParameters:(id)arg1;
- (id)inlineComposeControllerScribePage:(id)arg1;
- (void)inlineComposeControllerDidSwitchToFullscreen:(id)arg1;
- (id)inlineComposerControllerComposition:(id)arg1;
- (id)inlineComposeControllerSemanticCoreID:(id)arg1;
- (double)inlineComposeController:(id)arg1 autocompleteStartingPositionInContainer:(id)arg2;
- (id)inlineComposeControllerInitialComposeString:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_t1_stopShowGeoblockingErrorTimerIfNeeded;
- (void)_t1_geoblockingErrorTimerFired;
- (void)_t1_startShowGeoblockingErrorTimerIfNeeded;
- (unsigned long long)_t1_sensitiveOrBlockedPromptType;
- (void)_t1_displaySensitivePromptIfNeeded;
- (void)_t1_logCarouselPositionScribeWithAction:(id)arg1;
- (void)_t1_displayInlineCompose;
- (void)_t1_setupInlineComposeControllerIfNecessary;
- (id)scribePage;
- (void)_t1_scribeTimelineTabChangeFromTimelineVariant:(id)arg1 toIndex:(long long)arg2;
- (id)_t1_scribeContextForTimelineVariant:(id)arg1 tilePosition:(id)arg2;
- (id)_t1_scribeContextForTimelineVariant:(id)arg1;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext;
- (void)momentEventViewController:(id)arg1 didUnblockStatus:(id)arg2;
- (void)momentEventViewController:(id)arg1 didBlockStatus:(id)arg2;
- (void)momentEventViewController:(id)arg1 didReportStatus:(id)arg2;
- (void)muteDockedVideo:(_Bool)arg1;
- (void)disposeDockedVideo;
- (void)pauseDockedVideo;
- (void)playDockedVideo;
@property(readonly, nonatomic) _Bool isDockedVideoPaused;
@property(readonly, nonatomic) _Bool isDockedVideoPlaying;
@property(readonly, nonatomic) NSString *playerIdentifier;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource;
@property(readonly, nonatomic) long long dockedViewTapAction;
@property(readonly, nonatomic) long long dockedViewSwipeAction;
- (struct CGPoint)dockedViewOriginForDockedViewSize:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool dockedViewContainsVideo;
@property(readonly, nonatomic) CDUnknownBlockType undockActionBlock;
@property(readonly, nonatomic) UIView *dockableView;
- (void)dockingController:(id)arg1 didPerformDockedViewTapAction:(long long)arg2;
- (void)dockingController:(id)arg1 willPerformDockedViewSwipeAction:(long long)arg2;
- (void)didDockWithDockingController:(id)arg1;
- (_Bool)canShowUpdateIndicator:(id)arg1 withContentNotification:(id)arg2;
- (_Bool)dataViewControllerShouldScrollToTop:(id)arg1;
- (void)liveEventViewControllerScrollingHandlerDidPrecedeDockingThreshold:(id)arg1;
- (void)liveEventViewControllerScrollingHandlerDidExceedDockingThreshold:(id)arg1;
- (void)liveEventMetadataLoader:(id)arg1 loadFailedWithError:(id)arg2;
- (void)liveEventMetadataLoader:(id)arg1 didLoadMetadata:(id)arg2;
- (id)scribeContextForCarouselSubheaderViewController:(id)arg1 tilePosition:(id)arg2;
- (void)liveEventCarouselSubheaderViewController:(id)arg1 didSelectCarouselEntry:(id)arg2;
- (void)liveEventMetadataSubheaderViewController:(id)arg1 didTapDescriptionActiveRange:(id)arg2;
- (void)liveEventMetadataSubheaderViewControllerDidTapAuthorAttribution:(id)arg1 authorUser:(id)arg2;
- (void)liveEventPlayerStateControllerDidUpdateFullscreenPresentationState:(id)arg1;
- (void)liveEventPlayerStateControllerDidRequestPlaybackPause:(id)arg1;
- (void)liveEventPlayerStateControllerDidRequestPlaybackResume:(id)arg1;
- (id)tweetCompositionFromCurrentContext;
- (_Bool)resizableHeaderContainerViewController:(id)arg1 shouldScrollViewControllerToTop:(id)arg2 atIndex:(long long)arg3;
- (void)resizableHeaderContainerViewController:(id)arg1 didSelectViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
- (_Bool)resizableHeaderContainerViewControllerShouldAutoHideNavigationBar:(id)arg1;
- (id)resizableHeaderContainerViewController:(id)arg1 badgeImageInfoForItemAtIndex:(long long)arg2;
- (id)resizableHeaderContainerViewController:(id)arg1 customTitleColorAtIndex:(long long)arg2;
- (id)resizableHeaderContainerViewController:(id)arg1 customHighlightedTitleColorAtIndex:(long long)arg2;
- (id)resizableHeaderContainerViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (id)resizableHeaderContainerViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForResizableHeaderContainerViewController:(id)arg1;
- (void)carouselTransitionHandlerDidRequestReplayOfCurrentItem:(id)arg1;
- (void)carouselTransitionHandler:(id)arg1 didCompleteTransitionToCarouselEntry:(id)arg2;
- (_Bool)liveEventCarouselEntryViewControllerIsSufficientlyVisibleToStartTransition:(id)arg1;
- (_Bool)liveEventCarouselEntryViewControllerShouldStartTransition:(id)arg1;
- (void)liveEventCarouselEntryViewController:(id)arg1 didUpdateMuteState:(_Bool)arg2;
- (void)liveEventCarouselEntryViewController:(id)arg1 didTapToPlay:(_Bool)arg2;
- (void)liveEventCarouselEntryViewControllerDidObserveGeoblockingError:(id)arg1;
- (void)liveEventCarouselEntryViewControllerDidCompletePlayback:(id)arg1;
- (void)liveEventCarouselEntryViewControllerDidStartPlayback:(id)arg1;
- (void)liveEventCarouselEntryViewController:(id)arg1 didTapExpandMediaForBroadcast:(id)arg2 cardDataSource:(id)arg3;
- (void)liveEventCarouselEntryViewController:(id)arg1 didTapExpandMediaForStatus:(id)arg2 previewImage:(id)arg3 mediaInfo:(id)arg4;
- (void)liveEventCarouselEntryViewController:(id)arg1 didTapAttributionForStatus:(id)arg2;
- (void)liveEventCarouselEntryViewControllerDidTapRemindMeButton:(id)arg1;
- (id)scribeContextForLiveEventHeaderCarouselEntryViewController:(id)arg1;
- (id)scribeContextForLiveEventHeaderViewController:(id)arg1;
- (void)liveEventHeaderViewControllerDidTapMoreActions:(id)arg1;
- (void)liveEventHeaderViewControllerDidTapBack:(id)arg1;
- (void)resizableHeaderViewControllerDidRequestRefresh:(id)arg1;
- (void)resizableHeaderViewControllerDidUpdateCurrentHeaderHeight:(id)arg1;
- (void)resizableHeaderViewControllerDidUpdateExpandedHeaderHeight:(id)arg1;
- (id)resizableHeaderSubheaderViewControllersForResizableHeaderViewController:(id)arg1;
- (long long)dataViewControllerRestorePositionType;
- (void)_t1_didTapBroadcastContainerView;
- (void)_t1_didTapVideoContainerView;
- (void)_t1_animateSetNavigationBarHidden:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_t1_setContainerNavigationBarHidden:(_Bool)arg1 duration:(double)arg2;
- (void)_t1_animateSetChromeHidden:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_t1_setChromeHidden:(_Bool)arg1 duration:(double)arg2;
- (void)_t1_syncAnimateChromeAndNavigationBarHidden:(_Bool)arg1 duration:(double)arg2;
- (void)_t1_setNavigationBarHidden:(_Bool)arg1 duration:(double)arg2;
- (void)_t1_fadeTimerDidFire:(id)arg1;
- (void)_t1_invalidateFadeTimer;
- (void)_t1_configureFadeTimer;
- (void)_t1_updateNavigationBarVisibilityWithPercentage:(double)arg1;
- (void)_t1_dismissSlideshowViewController:(id)arg1 andPresentViewController:(id)arg2;
- (void)_t1_setUserSelectedHeaderEntry:(id)arg1;
- (void)_t1_undockCurrentHeaderItemIfNeeded;
- (void)_t1_undockOrDismissCurrentDockedViewAnimated:(_Bool)arg1;
- (_Bool)_t1_isDockable;
- (_Bool)_t1_externalDockExists;
- (_Bool)_t1_dockedViewDoesExist;
- (_Bool)_t1_isSelfCurrentlyDocked;
- (void)_t1_showTransitionToNextEntry:(id)arg1 allowReplayOfCurrentItem:(_Bool)arg2 transitionCompletion:(CDUnknownBlockType)arg3;
- (void)_t1_logPageImpressionScribe;
- (void)_t1_logCarouselImpressionScribe;
- (_Bool)_t1_shouldUpdateMultiVideoCarousel;
- (void)_t1_updateCarousel:(id)arg1;
- (unsigned long long)_t1_indexOfCarouselEntry:(id)arg1 inCarousel:(id)arg2;
- (_Bool)_t1_shouldScrollViewControllerToTop;
- (_Bool)_t1_dockViewControllerDueToUserAction:(long long)arg1;
- (void)_t1_displayBlockedEmptyContentViewControllerWithUsernameString:(id)arg1;
- (void)_t1_updateTimelineViewControllerWithPullToLoadTopEnabled:(_Bool)arg1;
- (void)_t1_updateInsets;
- (void)_t1_updateLoadingTop;
- (unsigned long long)_t1_indexOfPreselectedCarouselEntry;
- (void)_t1_preselectCarouselEntry;
- (void)_t1_createCarouselTransitionHandlerWithCarousel:(id)arg1 account:(id)arg2;
- (void)_t1_updateCarouselSubheaderViewController:(id)arg1 account:(id)arg2;
- (void)_t1_updateScoreSubheaderViewControllerWithTopModule:(id)arg1;
- (void)_t1_updateMetadataSubheaderViewController;
- (_Bool)_t1_shouldDisplayMetadata;
@property(readonly, nonatomic, getter=_t1_carouselEntryContentViewController) T1LiveEventMediaViewController *carouselEntryContentViewController;
@property(readonly, nonatomic, getter=_t1_carouselEntryViewController) T1LiveEventHeaderCarouselEntryViewController *carouselEntryViewController;
- (id)_t1_dockableViewControllerRespondingToSelector:(SEL)arg1;
- (void)_t1_layoutPullToLoadTopControl;
- (void)_t1_moreButtonTappedWithSourceView:(id)arg1;
- (void)_t1_moreButtonTapped:(id)arg1;
- (id)_t1_selectedTimelineVariant;
- (void)_t1_disposeHeaderViewController;
- (void)_t1_addContentNotificationForUpdateIndicator:(id)arg1;
- (void)_t1_setupTimelineViewControllers;
- (void)_t1_didTapErrorLoadingView;
- (void)_t1_presentStatusInSlideshow:(id)arg1 previewImage:(id)arg2 mediaInfo:(id)arg3;
- (id)_t1_newTimerEventSource;
- (id)_t1_newLiveEventTimelineWithTimelineVariant:(id)arg1;
- (double)_t1_contentNavigationBarHeight;
- (_Bool)_t1_shouldAutoHideContentNavigationBar;
- (void)_t1_updateNavigationBarTitle;
- (void)_t1_updateNavigationBarSeparatorLineVisibility;
- (void)_t1_updateNavigationBar;
- (void)_t1_updateStatusBarStyleIfNeeded;
- (void)_t1_configureHeaderExpansion;
- (void)_t1_configureUI;
- (void)handleComposeTweetKeyCommand;
- (id)keyCommands;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_t1_didTapExpandButton;
- (void)scrollToTop;
@property(readonly, nonatomic) TFNTwitterLiveEventCarouselEntry *currentCarouselEntry;
@property(readonly, nonatomic) T1LiveEventHeaderViewController *liveEventHeaderViewController;
- (void)setSelectedTimelineID:(id)arg1;
- (_Bool)tfn_prefersTabBarShadowHidden;
- (long long)t1_dockingPresentationOption;
- (_Bool)tfn_isContentScrolledToBottom;
- (_Bool)tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (_Bool)tfn_prefersNavigationBarHidden;
- (double)_yOffsetForAccessibilityScrollDirection:(long long)arg1 forScrollView:(id)arg2;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)tfn_previewingStateDidChange;
- (void)tfn_contentScrollViewDidScrollToTop:(id)arg1;
- (void)tfn_contentScrollViewWillScrollToTop:(id)arg1;
- (void)tfn_contentScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tfn_contentScrollViewDidEndDecelerating:(id)arg1;
- (void)tfn_contentScrollViewDidScroll:(id)arg1 animate:(_Bool)arg2;
- (id)tfs_debugStrings;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHeaderViewController:(id)arg1 contentDelegate:(id)arg2 account:(id)arg3;
- (id)initWithLiveEvent:(id)arg1 status:(id)arg2 account:(id)arg3 muted:(_Bool)arg4 sourceID:(id)arg5;
- (id)initWithLiveEventID:(id)arg1 account:(id)arg2 muted:(_Bool)arg3 sourceID:(id)arg4;
- (id)initWithLiveEventID:(id)arg1 account:(id)arg2 sourceID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

