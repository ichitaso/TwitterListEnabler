//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ComposeCustomAction-Protocol.h>
#import <T1Twitter/T1ComposeViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1DataViewControllerRenderPerformanceLoggerDataSource-Protocol.h>
#import <T1Twitter/T1DisplayTweetTranslationDelegate-Protocol.h>
#import <T1Twitter/T1ErrorDataViewAdapterDelegate-Protocol.h>
#import <T1Twitter/T1FeedbackActionProvider-Protocol.h>
#import <T1Twitter/T1HiddenRepliesConsumptionEducationPromptViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ImageTransitionDelegate-Protocol.h>
#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1NewsCameraImageTransitionDataSource-Protocol.h>
#import <T1Twitter/T1PersistentComposeAccountProvider-Protocol.h>
#import <T1Twitter/T1PersistentComposeViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1SlideshowBuilder-Protocol.h>
#import <T1Twitter/T1SlideshowViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1SpotlightUserActivityInfoProvider-Protocol.h>
#import <T1Twitter/T1TweetDetailsTweetBodyItemsDelegate-Protocol.h>
#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>
#import <T1Twitter/T1URTConversationTimelineObserver-Protocol.h>
#import <T1Twitter/T1URTTimelineTombstoneItemViewModelDelegate-Protocol.h>
#import <T1Twitter/T1VideoMonetizationSettingsViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNDataViewKeyboardSelectionDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>

@class NSDate, NSMutableSet, NSString, T1AppNavigationContext, T1CardItem, T1CardItemTableRowAdapter, T1ConversationSubscriptionManager, T1DataViewControllerRenderPerformanceLogger, T1PersistentComposeViewController, T1PushLandingHelper, T1PushLandingItem, T1QuotedStatusItem, T1ShowStatusNavigationContext, T1StatusLiveEngagementManager, T1StatusMediaHandler, T1StatusTableSlideshowManager, T1TweetDetailsActionContextItem, T1TweetDetailsActionView, T1TweetDetailsEmbeddedCarouselItem, T1TweetDetailsFetcher, T1TweetDetailsFocalStatusTableRowAdapter, T1TweetDetailsMultiPhotoItem, T1TweetDetailsNativeVideoItem, T1TweetDetailsNewsCameraMediaStatusItem, T1TweetDetailsTweetBodyItems, T1TweetDetailsUserRecommendationItem, T1URTConversationTimeline, T1URTTimelineCursorTableRowAdapter, T1UnifiedCardItem, T1UnifiedCardItemTableRowAdapter, TFNBarButtonItem, TFNGenericItem, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterScribeContext, TFSTwitterVideoMonetizationSettings, TIPImagePipeline, UIPopoverPresentationController, UIView;
@protocol T1StatusViewInlineActions, T1StatusViewModel, T1TweetDetailsViewControllerDelegate;

@interface T1TweetDetailsViewController : TFNItemsDataViewController <TFNTooltipDelegate, T1PersistentComposeViewControllerDelegate, T1ComposeCustomAction, T1ComposeViewControllerDelegate, T1SlideshowBuilder, T1TweetDetailsTweetBodyItemsDelegate, T1ImageTransitionDelegate, T1TwitterAuthenticated, T1DisplayTweetTranslationDelegate, T1ErrorDataViewAdapterDelegate, T1VideoMonetizationSettingsViewControllerDelegate, T1URTConversationTimelineObserver, T1URTTimelineTombstoneItemViewModelDelegate, T1DataViewControllerRenderPerformanceLoggerDataSource, T1NewsCameraImageTransitionDataSource, T1FeedbackActionProvider, T1HiddenRepliesConsumptionEducationPromptViewControllerDelegate, TFNDataViewKeyboardSelectionDelegate, T1JumpBackToHomeTimelineBehavior, TFNLayoutMetricsEnvironment, T1SpotlightUserActivityInfoProvider, T1SlideshowViewControllerDelegate, T1PersistentComposeAccountProvider>
{
    double _allRequiredPartsCompleteDuration;
    double _conversationCompleteDuration;
    T1DataViewControllerRenderPerformanceLogger *_perfLogger;
    NSMutableSet *_conversationItemsAlwaysAllowingMute;
    T1TweetDetailsTweetBodyItems *_bodyItems;
    id _firstBodyItem;
    id _lastBodyItem;
    UIView<T1StatusViewInlineActions> *_tweetDetailsActionView;
    TFNGenericItem *_inReplyToLabelItem;
    struct {
        unsigned int hasScribedTweetCompleteTime:1;
        unsigned int showingAncestorLoader:1;
        unsigned int hasPlayedVideo:1;
        unsigned int inUpdate:1;
        unsigned int sendingInlineReply:1;
        unsigned int shouldScrollToBottomWhenFinishedUpdating:1;
        unsigned int shouldScrollToRepliesWhenFinishedUpdating;
        unsigned int showedSensitiveMedia:1;
        unsigned int hasDragged:1;
        unsigned int didScribeReply:1;
        unsigned int shouldForceScrollToBottomWhenFinishedUpdating:1;
        unsigned int shouldRenderUnifiedCard:1;
        unsigned int shouldSuppressText:1;
        unsigned int shouldSuppressSensitiveContent:1;
        unsigned int focalTweetWasDeleted:1;
        unsigned int shouldScrollToInsertedTweet:1;
        unsigned int shouldShowEmbeddedCarousel:1;
        unsigned int focalTweetWasReported:1;
        unsigned int focalTweetWasRevealed:1;
        unsigned int focalTweetIsRootTweet:1;
    } _tweetDetailsFlags;
    NSString *_scribeSection;
    NSDate *_initialViewConversationDate;
    _Bool _isPresentingBookmark;
    _Bool _showingDescendantsOnly;
    _Bool _shouldShowLandingItem;
    _Bool _holdUpdatesUntilScrollComplete;
    _Bool _intentBlockDidRun;
    _Bool _keyboardDocked;
    _Bool _defaultVideoMonetizationSettingsComplete;
    _Bool _videoMonetizationSettingsComplete;
    _Bool _deferInlineReplyFocus;
    _Bool _shouldDisplayContent;
    _Bool _shouldPreventFetchOnScroll;
    _Bool _isLoadingAncestors;
    _Bool _isLoadingDescendants;
    _Bool _isTranslationImpressionScribed;
    TFNTwitterAccount *_composingAccount;
    TFSTwitterScribeContext *_sourceScribeContext;
    TFNTwitterStatus *_status;
    TFNTwitterAccount *_account;
    T1AppNavigationContext *_navigationContext;
    id <T1TweetDetailsViewControllerDelegate> _delegate;
    TFSTwitterScribeContext *_controllerScribeContext;
    T1TweetDetailsUserRecommendationItem *_userRecommendationItem;
    T1CardItem *_cardItem;
    T1UnifiedCardItem *_unifiedCardItem;
    T1TweetDetailsNativeVideoItem *_nativeVideoItem;
    T1QuotedStatusItem *_quotedStatusItem;
    T1TweetDetailsEmbeddedCarouselItem *_embeddedCarouselItem;
    T1PushLandingHelper *_pushLandingHelper;
    T1PushLandingItem *_landingItem;
    T1CardItemTableRowAdapter *_cardRowAdapter;
    T1UnifiedCardItemTableRowAdapter *_unifiedCardRowAdapter;
    T1TweetDetailsFocalStatusTableRowAdapter *_focalStatusTableRowAdapter;
    T1TweetDetailsActionContextItem *_actionContextItem;
    T1TweetDetailsMultiPhotoItem *_mediaItem;
    T1TweetDetailsNewsCameraMediaStatusItem *_ncMediaItem;
    UIPopoverPresentationController *_autocompletePopoverController;
    T1URTConversationTimeline *_conversationTimeline;
    T1TweetDetailsFetcher *_tweetDetailsFetcher;
    long long _statusID;
    T1PersistentComposeViewController *_replyController;
    CDUnknownBlockType _intentBlock;
    T1StatusMediaHandler *_statusMediaHandler;
    T1StatusTableSlideshowManager *_slideshowManager;
    TIPImagePipeline *_imagePipeline;
    TFSTwitterVideoMonetizationSettings *_defaultVideoMonetizationSettings;
    TFSTwitterVideoMonetizationSettings *_videoMonetizationSettings;
    T1ShowStatusNavigationContext *_statusNavigationContext;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    NSMutableSet *_compositionReplyChainUniqueIDs;
    T1URTTimelineCursorTableRowAdapter *_urtCursorAdapter;
    unsigned long long _translationState;
    T1ConversationSubscriptionManager *_conversationSubscriptionManager;
    id _conversationObserver;
    long long _conversationID;
    id <T1StatusViewModel> _conversationFocalStatus;
    TFNBarButtonItem *_subscribeButton;
    struct CGRect _currentKeyboardFrame;
}

+ (void)_t1_logPromotedEvent:(long long)arg1 forStatus:(id)arg2 withAccount:(id)arg3;
+ (id)tweetDetailsViewControllerForStatus:(id)arg1 account:(id)arg2 sourceScribeContext:(id)arg3;
@property(retain, nonatomic) TFNBarButtonItem *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(retain, nonatomic) id <T1StatusViewModel> conversationFocalStatus; // @synthesize conversationFocalStatus=_conversationFocalStatus;
@property(nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) id conversationObserver; // @synthesize conversationObserver=_conversationObserver;
@property(retain, nonatomic) T1ConversationSubscriptionManager *conversationSubscriptionManager; // @synthesize conversationSubscriptionManager=_conversationSubscriptionManager;
@property(nonatomic) unsigned long long translationState; // @synthesize translationState=_translationState;
@property(retain, nonatomic) T1URTTimelineCursorTableRowAdapter *urtCursorAdapter; // @synthesize urtCursorAdapter=_urtCursorAdapter;
@property(nonatomic) _Bool isTranslationImpressionScribed; // @synthesize isTranslationImpressionScribed=_isTranslationImpressionScribed;
@property(nonatomic) _Bool isLoadingDescendants; // @synthesize isLoadingDescendants=_isLoadingDescendants;
@property(nonatomic) _Bool isLoadingAncestors; // @synthesize isLoadingAncestors=_isLoadingAncestors;
@property(nonatomic) _Bool shouldPreventFetchOnScroll; // @synthesize shouldPreventFetchOnScroll=_shouldPreventFetchOnScroll;
@property(nonatomic) _Bool shouldDisplayContent; // @synthesize shouldDisplayContent=_shouldDisplayContent;
@property(retain, nonatomic) NSMutableSet *compositionReplyChainUniqueIDs; // @synthesize compositionReplyChainUniqueIDs=_compositionReplyChainUniqueIDs;
@property(readonly, nonatomic) T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(retain, nonatomic) T1ShowStatusNavigationContext *statusNavigationContext; // @synthesize statusNavigationContext=_statusNavigationContext;
@property(nonatomic) _Bool deferInlineReplyFocus; // @synthesize deferInlineReplyFocus=_deferInlineReplyFocus;
@property(nonatomic) _Bool videoMonetizationSettingsComplete; // @synthesize videoMonetizationSettingsComplete=_videoMonetizationSettingsComplete;
@property(nonatomic) _Bool defaultVideoMonetizationSettingsComplete; // @synthesize defaultVideoMonetizationSettingsComplete=_defaultVideoMonetizationSettingsComplete;
@property(retain, nonatomic) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings; // @synthesize videoMonetizationSettings=_videoMonetizationSettings;
@property(retain, nonatomic) TFSTwitterVideoMonetizationSettings *defaultVideoMonetizationSettings; // @synthesize defaultVideoMonetizationSettings=_defaultVideoMonetizationSettings;
@property(nonatomic, getter=isKeyboardDocked) _Bool keyboardDocked; // @synthesize keyboardDocked=_keyboardDocked;
@property(nonatomic) struct CGRect currentKeyboardFrame; // @synthesize currentKeyboardFrame=_currentKeyboardFrame;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(readonly, nonatomic) T1StatusTableSlideshowManager *slideshowManager; // @synthesize slideshowManager=_slideshowManager;
@property(readonly, nonatomic) T1StatusMediaHandler *statusMediaHandler; // @synthesize statusMediaHandler=_statusMediaHandler;
@property(nonatomic) _Bool intentBlockDidRun; // @synthesize intentBlockDidRun=_intentBlockDidRun;
@property(copy, nonatomic) CDUnknownBlockType intentBlock; // @synthesize intentBlock=_intentBlock;
@property(retain, nonatomic) T1PersistentComposeViewController *replyController; // @synthesize replyController=_replyController;
@property(nonatomic) long long statusID; // @synthesize statusID=_statusID;
@property(retain, nonatomic) T1TweetDetailsFetcher *tweetDetailsFetcher; // @synthesize tweetDetailsFetcher=_tweetDetailsFetcher;
@property(retain, nonatomic) T1URTConversationTimeline *conversationTimeline; // @synthesize conversationTimeline=_conversationTimeline;
@property(nonatomic) __weak UIPopoverPresentationController *autocompletePopoverController; // @synthesize autocompletePopoverController=_autocompletePopoverController;
@property(nonatomic) _Bool holdUpdatesUntilScrollComplete; // @synthesize holdUpdatesUntilScrollComplete=_holdUpdatesUntilScrollComplete;
@property(retain, nonatomic) T1TweetDetailsNewsCameraMediaStatusItem *ncMediaItem; // @synthesize ncMediaItem=_ncMediaItem;
@property(retain, nonatomic) T1TweetDetailsMultiPhotoItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) T1TweetDetailsActionContextItem *actionContextItem; // @synthesize actionContextItem=_actionContextItem;
@property(retain, nonatomic) T1TweetDetailsFocalStatusTableRowAdapter *focalStatusTableRowAdapter; // @synthesize focalStatusTableRowAdapter=_focalStatusTableRowAdapter;
@property(retain, nonatomic) T1UnifiedCardItemTableRowAdapter *unifiedCardRowAdapter; // @synthesize unifiedCardRowAdapter=_unifiedCardRowAdapter;
@property(retain, nonatomic) T1CardItemTableRowAdapter *cardRowAdapter; // @synthesize cardRowAdapter=_cardRowAdapter;
@property(nonatomic) _Bool shouldShowLandingItem; // @synthesize shouldShowLandingItem=_shouldShowLandingItem;
@property(retain, nonatomic) T1PushLandingItem *landingItem; // @synthesize landingItem=_landingItem;
@property(readonly, nonatomic) T1PushLandingHelper *pushLandingHelper; // @synthesize pushLandingHelper=_pushLandingHelper;
@property(retain, nonatomic) T1TweetDetailsEmbeddedCarouselItem *embeddedCarouselItem; // @synthesize embeddedCarouselItem=_embeddedCarouselItem;
@property(retain, nonatomic) T1QuotedStatusItem *quotedStatusItem; // @synthesize quotedStatusItem=_quotedStatusItem;
@property(retain, nonatomic) T1TweetDetailsNativeVideoItem *nativeVideoItem; // @synthesize nativeVideoItem=_nativeVideoItem;
@property(retain, nonatomic) T1UnifiedCardItem *unifiedCardItem; // @synthesize unifiedCardItem=_unifiedCardItem;
@property(retain, nonatomic) T1CardItem *cardItem; // @synthesize cardItem=_cardItem;
@property(retain, nonatomic) T1TweetDetailsUserRecommendationItem *userRecommendationItem; // @synthesize userRecommendationItem=_userRecommendationItem;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *controllerScribeContext; // @synthesize controllerScribeContext=_controllerScribeContext;
@property(nonatomic) __weak id <T1TweetDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isShowingDescendantsOnly) _Bool showingDescendantsOnly; // @synthesize showingDescendantsOnly=_showingDescendantsOnly;
@property(nonatomic) _Bool isPresentingBookmark; // @synthesize isPresentingBookmark=_isPresentingBookmark;
@property(retain, nonatomic) T1AppNavigationContext *navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *sourceScribeContext; // @synthesize sourceScribeContext=_sourceScribeContext;
@property(retain, nonatomic) TFNTwitterAccount *composingAccount; // @synthesize composingAccount=_composingAccount;
- (void).cxx_destruct;
- (id)_t1_canonicalTweetBodyItems;
- (void)keyboardHighlightCell:(id)arg1 highlighted:(_Bool)arg2;
- (id)keyboardHighlightIndexPathsForIndexPath:(id)arg1;
- (long long)isCellKeyboardHighlightableAtIndexPath:(id)arg1;
- (void)_t1_observeConversationID:(long long)arg1;
- (void)_t1_conversationSubscriptionUpdated;
- (void)_t1_setupConversationSubscriptionManager;
- (void)_t1_presentNotificationSettingsRequireChangeAlert:(id)arg1;
- (void)_t1_presentConversationSubscriptionOptions:(id)arg1;
- (void)_t1_didTapSubscribeButton:(id)arg1;
- (CDUnknownBlockType)didProvideModerateFeedbackBlockForStatus:(id)arg1;
- (CDUnknownBlockType)didProvideShowLessOftenFeedbackForStatus:(id)arg1 carousel:(id)arg2;
- (id)negativeFeedbackActionsForStatus:(id)arg1;
- (id)dataViewControllerRenderPerformanceLoggerScribe:(id)arg1;
- (_Bool)dataViewControllereRenderPerformanceLoggerIsReadyToRender:(id)arg1;
- (id)dataViewControllerRenderPerformanceLoggerEventName:(id)arg1;
- (id)activityImagePipeline;
- (id)activityImage;
- (id)activityImageFetchRequest;
- (id)activityKeywords;
- (id)activityDetailDescription;
- (id)activityTitle;
- (id)activityDeeplinkURL;
- (_Bool)activityIsPublic;
- (id)activityDomainIdentifier;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)tfn_fontSizeChanged;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (_Bool)isLayoutMetricsCanvasInheritedByChildViewController;
- (void)configureActionView:(id)arg1;
- (void)configureActivitySummaryView:(id)arg1;
- (_Bool)tfn_prefersTabBarShadowHidden;
- (_Bool)allowsJumpBackToHomeTimeline;
- (void)_t1_initializeStatusMediaHandlerAndDependentRowAdapters;
- (void)_t1_showAuthorCanModerateTooltip;
- (void)_t1_showModeratedRepliesTimelineTooltip;
- (id)_t1_focalStatusView;
- (id)_t1_inlineActionOfType:(unsigned long long)arg1;
- (_Bool)t1_shouldShowSocialContextForFocalStatus;
- (_Bool)_t1_shouldShowQuoteTweetSummary;
- (_Bool)_t1_shouldShowActivitySummary;
- (void)_t1_hideTranslatingIndicatorAndShowTranslatedTweet;
- (void)_t1_hideTranslatingIndicator;
- (void)_t1_showTranslatingIndicator;
- (void)_t1_showTranslatingLogo:(_Bool)arg1 indexPath:(id)arg2;
- (void)_t1_hideTranslatedTweet;
- (void)_t1_showTranslatedTweet;
- (void)_t1_didFinishLoadingTranslatedStatus:(id)arg1;
- (void)toggleTranslatedTweet;
- (void)_t1_keyboardWillHide:(id)arg1;
- (void)_t1_keyboardWillChangeFrame:(id)arg1;
- (void)_t1_keyboardWillShow:(id)arg1;
- (void)_t1_updateKeyboardFrameWithUserInfo:(id)arg1;
- (void)_t1_resetBodyItemsAndUpdateWithAnimation:(_Bool)arg1;
- (void)_t1_accountSettingsDidUpdate:(id)arg1;
- (_Bool)_t1_shouldShowUserRecommendationItem;
- (void)slideshow:(id)arg1 didSelectStatusReply:(id)arg2;
- (void)slideshow:(id)arg1 dismissAndPresentViewController:(id)arg2;
- (void)slideshow:(id)arg1 status:(id)arg2 didSelectActiveRange:(id)arg3;
- (void)slideshow:(id)arg1 didSelectUser:(id)arg2;
- (void)slideshow:(id)arg1 didSelectStatus:(id)arg2;
- (void)slideshow:(id)arg1 didDeleteStatus:(id)arg2;
- (id)slideshowControllerWithDataSource:(id)arg1 index:(long long)arg2 transitionDelegate:(id)arg3;
- (void)toggleRetweetOnCurrentStatusFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)toggleFavorited;
- (id)_t1_imageItemWithURLForEntity:(id)arg1 getIndex:(long long *)arg2;
- (void)_t1_setupSlideshowViewController:(id)arg1;
- (id)_t1_openUrl:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 fromSourceStatus:(id)arg4 sourceUser:(id)arg5;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 fromSourceUser:(id)arg4;
- (id)t1_openURL:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 fromSourceStatus:(id)arg4;
- (id)t1_didSelectActiveRange:(id)arg1 inStatus:(id)arg2 account:(id)arg3;
- (_Bool)_t1_handleNewsCameraTapEvent:(id)arg1;
- (_Bool)newsCameraContainerHasNonPlaceholderImagePreview:(id)arg1 forStatusViewModel:(id)arg2;
- (id)newsCameraContainer:(id)arg1 transitionObjectForStatusViewModel:(id)arg2;
- (id)newsCameraContainer:(id)arg1 mediaInfoForStatusViewModel:(id)arg2;
- (id)newsCameraContainer:(id)arg1 cachedPlayerForStatusViewModel:(id)arg2;
- (id)newsCameraContainer:(id)arg1 previewImageForStatusViewModel:(id)arg2;
- (id)_t1_quotedNewsCameraMediaView;
- (id)_t1_focalNewsCameraMediaCell;
- (_Bool)imageTransitionViewController:(id)arg1 shouldDismissPresentingViewControllerForObject:(id)arg2;
- (void)imageTransitionViewController:(id)arg1 willTransition:(_Bool)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageContentsRectForObject:(id)arg2;
- (_Bool)imageTransitionViewController:(id)arg1 previewImageFrameIsAspectFillForObject:(id)arg2;
- (void)setPreviewImageHidden:(_Bool)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (void)_t1_tweetWasRemovedFromBookmarks:(id)arg1;
- (void)_t1_updateCellHeightIfNeededForItem:(id)arg1;
- (void)_t1_cardLogAppDownloadIfAppropriate:(id)arg1;
- (void)_t1_cardLogAppDownload:(id)arg1;
- (void)_t1_retweetFailed;
- (void)_t1_favoriteFailed;
- (void)_t1_cardViewNeedsLayout:(id)arg1;
@property(readonly, nonatomic, getter=isDisplayingUnifiedCard) _Bool displayingUnifiedCard;
@property(readonly, nonatomic, getter=isDisplayingCard) _Bool displayingCard;
- (_Bool)_shouldShowInnerTombstoneItem;
- (id)innerTombstoneItem;
- (id)_t1_multiPhotoItemForStatus:(id)arg1;
- (_Bool)_t1_hasImageEntity;
- (id)nativeMediaItem;
- (void)_t1_updateMonetizationSettings;
- (void)videoMonetizationSettingsViewController:(id)arg1 didUpdateSettings:(id)arg2;
- (void)_t1_didTapMonetizationSettings;
@property(readonly, nonatomic) id monetizationSettingsItem;
- (void)_t1_monetizationSettingsUpdated;
- (void)_t1_fetchMonetizationSettingsForVideo:(id)arg1;
- (void)_t1_fetchMonetizationSettingsDefaults;
- (void)_t1_fetchMonetizationSettingsIfNeeded;
- (_Bool)_t1_shouldShowMonetizationSettings;
- (void)_t1_animateOutItem:(id)arg1;
- (void)_t1_animateOutActivitySummary;
- (void)_t1_animateInActivitySummary;
- (void)_t1_animateInActivity;
- (void)_t1_didTapViewTweetActivity;
- (id)viewTweetActivityItem;
- (void)scrollViewWillProgrammaticallyScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_t1_compositionSendDidFail:(id)arg1;
- (void)_t1_compositionDidSend:(id)arg1;
- (void)_t1_updateShowReplySocialContext;
- (id)_t1_newReplyTweetComposition;
- (id)_t1_replyTweetComposition;
- (id)_t1_newTweetComposition;
- (id)_t1_tweetCompositionFromCurrentContext;
- (id)tweetCompositionFromCurrentContext;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_t1_adjustReplyBarFrame;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_t1_navigateForStatusNavigationContext;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_t1_setupFromStatus;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tfn_previewingStateDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)_t1_scribeElementForStatus:(id)arg1;
- (id)_t1_scribeComponentForStatus:(id)arg1;
- (void)_t1_scribeSendReply;
- (void)_scribeReply;
- (id)scribeContext;
- (id)scribeImpressionParametersForIndexPath:(id)arg1;
- (void)scribeViewImpressionWithParameters:(id)arg1;
- (id)_t1_scribeParametersWithoutConversationContext:(id)arg1;
- (id)scribeImpressionParameters;
- (id)scribeComponentForIndexPath:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)didReceiveMemoryWarning;
- (id)calculatedLayoutMetrics;
- (_Bool)_t1_cancelEditingIfAppropriateForTraitCollection:(id)arg1;
- (_Bool)_t1_shouldDisplayReplyBarWithTraitCollection:(id)arg1;
- (void)_t1_updateReplyBarForTraitCollection:(id)arg1;
- (void)_t1_updateReplyBar;
- (void)_t1_willSendInLineReply:(id)arg1;
- (void)_t1_removeAutocompleteView;
- (void)_t1_addAutocompleteView;
- (void)hideAutocompleteViewController:(id)arg1 forComposeBarViewController:(id)arg2;
- (void)showAutocompleteViewController:(id)arg1 forComposeBarViewController:(id)arg2;
- (id)autocompleteViewController;
- (id)autocompleteController;
- (void)handleViewUserKeyCommand;
- (_Bool)_t1_canHandleBookmarkKeyCommandForUndo:(_Bool)arg1;
- (void)handleUndoBookmarkKeyCommand;
- (void)handleBookmarkKeyCommand;
- (_Bool)_t1_canHandleLikeKeyCommandForUndo:(_Bool)arg1;
- (void)handleUndoLikeKeyCommand;
- (void)handleLikeKeyCommand;
- (_Bool)_t1_canHandleRetweetKeyCommandForUndo:(_Bool)arg1;
- (void)handleUndoRetweetKeyCommand;
- (void)handleRetweetKeyCommand;
- (_Bool)_t1_canHandleReplyKeyCommand;
- (void)handleReplyKeyCommand;
- (void)handleComposeTweetKeyCommand;
- (_Bool)dataViewControllerCanPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_t1_isReplyControllerInViewControllerHierarchy;
- (void)_t1_removeReplyControllerFromViewControllerHierarchy:(_Bool)arg1;
- (void)_t1_removeReplyControllerFromViewControllerHierarchy;
- (_Bool)_t1_addReplyControllerToViewControllerHierarchy:(_Bool)arg1;
- (_Bool)_t1_isReplyBarVisible;
- (void)_t1_hideReplyBar:(_Bool)arg1;
- (_Bool)_t1_displayReplyBar:(_Bool)arg1;
- (void)composeBarViewControllerTransitionToFullComposer:(id)arg1;
- (void)composeBarViewControllerDidBeginEditing:(id)arg1;
- (void)composeBarViewController:(id)arg1 didSwitchToAccount:(id)arg2;
- (void)_t1_resetReplyControllerComposition;
- (void)composeBarViewController:(id)arg1 didSendComposition:(id)arg2;
- (void)composeBarViewController:(id)arg1 willSendComposition:(id)arg2;
- (void)composeBarViewControllerResetComposition:(id)arg1;
- (void)tombstoneDidTapViewTweetWithTombstoneViewModel:(id)arg1;
- (void)hiddenRepliesEducationTakeoverViewControllerDidDismiss:(id)arg1;
- (void)hiddenRepliesConsumptionEducationTakeoverViewControllerDidDismiss:(id)arg1;
- (void)hideInlineReply:(_Bool)arg1;
- (_Bool)showInlineReply:(_Bool)arg1;
- (void)stopComposingInlineReply;
- (_Bool)startComposingInlineReply;
- (void)_t1_setupReplyControllerIfNecessary;
- (id)scribeSectionForIndexPath:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)_t1_showRetweetsAction:(id)arg1;
- (void)_t1_showFavoritesAction:(id)arg1;
- (void)_t1_conversationCardDidVote:(id)arg1;
- (void)_t1_reloadConversationAfterNotification;
- (void)_t1_blockedAccountsDidChange:(id)arg1;
- (void)_t1_tweetDeleted:(id)arg1;
- (void)_t1_handleTweetDeleted:(id)arg1;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (CDUnknownBlockType)_t1_undoRetweetBlock;
- (id)_t1_undoRetweetModalSheet;
- (id)_t1_retweetMenuSheet;
- (id)_t1_favoriteConfirmMenuSheet;
- (void)_t1_toggleRetweetOnCurrentStatusFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_t1_presentShareTweetSheetFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_t1_toggleFavoriteOnCurrentStatus;
- (void)_t1_replyAction;
- (_Bool)_t1_inlineActionsDisabled;
- (_Bool)shareViaDMDisabled;
- (_Bool)bookmarkDisabled;
- (_Bool)favoriteDisabled;
- (_Bool)shareButtonDisabled;
- (_Bool)retweetDisabled;
@property(readonly, nonatomic) _Bool replyDisabled;
- (void)_t1_showHiddenRepliesEducationPromptIfNecessary;
- (void)_t1_updateHiddenRepliesIconLegacy;
- (void)_t1_updateHiddenRepliesIcon;
- (void)_t1_updateReplyBadge;
- (void)_t1_updateQuotePivot;
- (void)_t1_fetchMoreDescendantsIfNeeded;
- (void)_t1_fetchMoreAncestorsIfNeeded;
- (void)_t1_fetchMoreAncestors;
- (long long)rowTypeForItem:(id)arg1;
- (id)indexPathsForRowType:(long long)arg1;
- (id)_t1_indexPathOfTweetBodyBottom;
- (id)_t1_indexPathOfTweetBodyTop;
- (void)_t1_updateConversation;
- (unsigned long long)_t1_statusOptionsForStatusViewModel:(id)arg1 initialOptions:(unsigned long long)arg2 itemsAlwaysAllowingMute:(id)arg3 account:(id)arg4;
- (id)newsCameraMediaStatusItemAdapterForAccount:(id)arg1 itemsAlwaysAllowingMute:(id)arg2;
- (id)focalStatusAdapterForAccount:(id)arg1 itemsAlwaysAllowingMute:(id)arg2;
- (id)conversationStatusAdapterForAccount:(id)arg1 itemsAlwaysAllowingMute:(id)arg2;
- (void)timelineDidUpdate:(id)arg1;
- (void)_t1_notifyDelegateOfContentChange;
- (double)_t1_peekHeight;
- (void)_t1_updateTableFooter;
- (void)_t1_updateInsets;
- (id)_t1_contructCallToActionErrorItem:(id)arg1;
- (_Bool)_t1_constructErrorSections:(id)arg1;
- (_Bool)t1_cellIsCompletelyVisibleAtIndexPath:(id)arg1;
- (void)_t1_scrollToInsertedTweet;
- (void)_t1_scrollToTopOfReplies;
- (void)_t1_scrollToTopOfBodyAndPeek;
- (void)_t1_scrollToBottom;
- (_Bool)_t1_tableViewIsScrolledToTop;
- (id)_t1_replyPlaceholderTextForStatus:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)_t1_didFinishLoadingRelationship:(id)arg1;
- (void)_t1_didTapTag:(id)arg1 inCell:(id)arg2 itemForImage:(id)arg3 itemForVideo:(id)arg4;
- (id)_t1_itemForTagSet:(id)arg1 itemForImage:(id)arg2 itemForVideo:(id)arg3;
- (id)_t1_itemForTagSet:(id)arg1 withItemForImage:(id)arg2;
- (id)_t1_itemForTagSet:(id)arg1 withItemForVideo:(id)arg2;
- (_Bool)_t1_navigationContextTypeIsMagicRecsNotification;
- (void)errorItemTapped:(id)arg1;
- (_Bool)_t1_shouldDisplayAsNewsCameraFocalStatus;
@property(readonly, nonatomic) unsigned long long displayType;
- (id)_t1_errorItemForStreamError:(id)arg1;
- (id)_t1_tombstoneItemForStreamError:(id)arg1;
- (void)_t1_didFinishLoadingStatus:(id)arg1;
- (void)showRetweetIntentConfirmation;
- (void)showFavoriteIntentConfirmation;
- (void)_t1_runIntentBlockIfStatusFetched;
- (void)_t1_showIntentConfirmationMenuSheet:(id)arg1 buttonType:(unsigned long long)arg2;
- (void)showTweetAnalytics;
- (_Bool)_t1_shouldShowViewAnalyticsItem;
- (void)_t1_checkIfTweetComplete;
- (_Bool)_t1_areAllFetchesComplete;
- (_Bool)_t1_areAllRequiredPartsReady;
- (void)_t1_updateActivitySummaryViewForActivityCellAtIndexPath:(id)arg1;
- (void)_t1_updateActionViewForActivityCellAtIndexPath:(id)arg1;
- (void)_t1_dynamicColorsDidReload:(id)arg1;
- (void)_t1_hashflagsDidChange:(id)arg1;
- (void)_t1_tweetUpdated:(id)arg1;
- (void)_t1_tweetReported:(id)arg1;
- (void)_t1_tweetUnhidden:(id)arg1;
- (void)_t1_tweetHidden:(id)arg1;
- (void)_t1_tweetUpdated;
- (void)_t1_addAttachmentItemsToTweetBodyItems:(id)arg1;
- (id)_t1_legacyTweetBodyItems;
- (id)_t1_tweetBodyItems;
- (void)_t1_handleNavigationContextWithTweetBodyArray:(id)arg1;
- (_Bool)_t1_isConversationOwnedByCurrentUserWithUserID:(long long)arg1;
@property(readonly, nonatomic) T1TweetDetailsActionView *tweetDetailsActionView;
@property(readonly, nonatomic) T1TweetDetailsTweetBodyItems *bodyItems;
- (id)tfs_debugStrings;
- (void)_t1_featureSwitchesDidUpdate:(id)arg1;
- (void)_t1_accountDidUpdate:(id)arg1;
- (void)_t1_updateExperimentFlagsFromAccount;
- (void)dealloc;
- (void)_t1_initializeWithStatusID:(long long)arg1 status:(id)arg2 account:(id)arg3 statusNavigationContext:(id)arg4 sourceScribeContext:(id)arg5;
- (id)initWithStatusID:(long long)arg1 account:(id)arg2 statusNavigationContext:(id)arg3 sourceScribeContext:(id)arg4;
- (id)initWithStatusID:(long long)arg1 account:(id)arg2;
- (id)initWithStatus:(id)arg1 account:(id)arg2 statusNavigationContext:(id)arg3 sourceScribeContext:(id)arg4;
- (id)initWithStatus:(id)arg1 account:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)t1_cleanupTooltips;
- (void)t1_triggerAuthorCanModerateTooltipFromView:(id)arg1;
- (void)t1_triggerModeratedRepliesTimelineTooltipForAuthor:(_Bool)arg1 fromView:(id)arg2;
- (void)_t1_triggerConversationUpdatesTooltip;
- (void)_t1_triggerAffiliateLabelTooltip;
- (void)_t1_triggerConversationContextTooltip;
- (void)_t1_triggerBookmarksTooltip;
- (void)t1_triggerTooltips;
- (void)_t1_initializeConversationUpdatesTooltip;
- (void)_t1_initializeAuthorModeratedRepliesTooltips;
- (void)_t1_initializeAffiliateLabelTooltip;
- (void)_t1_initializeConversationContextTooltip;
- (void)_t1_initializeBookmarksTooltip;
- (void)_t1_initializeTooltipWithText:(id)arg1 forEvent:(id)arg2 permittedArrowDirections:(unsigned long long)arg3;
- (void)t1_initializeTooltips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

