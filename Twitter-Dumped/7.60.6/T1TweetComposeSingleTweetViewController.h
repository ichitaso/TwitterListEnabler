//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/NSLayoutManagerDelegate-Protocol.h>
#import <T1Twitter/T1ComposeCardPreviewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ComposePollingCardPreviewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ComposeTagLocationViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ComposeTextViewDelegate-Protocol.h>
#import <T1Twitter/T1MediaAttachmentsViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1TaggingViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1TweetComposeLocatorDelegate-Protocol.h>
#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>
#import <T1Twitter/T1VideoMonetizationSettingsViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNCircularCountProgressDataSource-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, T1ComposeAccountAvatarImageView, T1ComposeCardPreviewController, T1ComposePollingCardPreviewController, T1ComposeRTLTextViewDelegate, T1ComposeTagLocationViewController, T1ComposeTextView, T1ConversationConnectorView, T1MediaAttachmentsViewController, T1QuotedStatusView, T1TaggingPromptButton, T1TweetComposeLocator, TFNButton, TFNTwitterAccount, TFNTwitterComposePlaceStore, TFNTwitterComposition, TFSMainThreadRunLoopDeferredTask, TFSTwitterLocation, TFSTwitterPlace, TFSTwitterScribeContext, UIButton, UIColor, UIFont, UIImage, UIView, UIViewController;
@protocol T1TweetComposeSingleTweetViewControllerDelegate, UITextInput;

@interface T1TweetComposeSingleTweetViewController : TFNViewController <NSLayoutManagerDelegate, T1ComposeCardPreviewControllerDelegate, T1ComposePollingCardPreviewControllerDelegate, T1ComposeTagLocationViewControllerDelegate, T1ComposeTextViewDelegate, T1MediaAttachmentsViewControllerDelegate, T1TaggingViewControllerDelegate, T1TweetComposeLocatorDelegate, T1VideoMonetizationSettingsViewControllerDelegate, TFNLayoutMetricsEnvironment, UIGestureRecognizerDelegate, T1TwitterAuthenticated, TFNCircularCountProgressDataSource>
{
    _Bool _shouldShowConnectingLine;
    _Bool _partOfTweetstorm;
    _Bool _headOfTweetstorm;
    _Bool _needsLayout;
    _Bool _deleting;
    int _displayStyle;
    TFNTwitterAccount *_account;
    T1ComposeTextView *_tweetTextView;
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterComposition *_composition;
    TFSTwitterLocation *_assetLocation;
    id <T1TweetComposeSingleTweetViewControllerDelegate> _delegate;
    T1TweetComposeLocator *_locator;
    T1ComposeAccountAvatarImageView *_avatarImageView;
    T1ConversationConnectorView *_connectorView;
    T1MediaAttachmentsViewController *_attachmentsViewController;
    T1ComposePollingCardPreviewController *_pollingCardPreviewController;
    T1ComposeTagLocationViewController *_tagLocationViewController;
    T1TaggingPromptButton *_peopleInAttachmentsButton;
    TFNButton *_deleteButton;
    UIButton *_monetizationPromptButton;
    T1QuotedStatusView *_quotedStatusView;
    T1ComposeCardPreviewController *_cardPreviewController;
    UIView *_fadeOverlayView;
    T1ComposeRTLTextViewDelegate *_composeRTLTextViewDelegate;
    long long _writingDirection;
    UIFont *_defaultTextFont;
    UIColor *_defaultTextForegroundColor;
    NSArray *_overflowViewsArray;
    TFSMainThreadRunLoopDeferredTask *_currentOverflowViewsLayoutTask;
}

@property(retain, nonatomic) TFSMainThreadRunLoopDeferredTask *currentOverflowViewsLayoutTask; // @synthesize currentOverflowViewsLayoutTask=_currentOverflowViewsLayoutTask;
@property(copy, nonatomic) NSArray *overflowViewsArray; // @synthesize overflowViewsArray=_overflowViewsArray;
@property(readonly, nonatomic) UIColor *defaultTextForegroundColor; // @synthesize defaultTextForegroundColor=_defaultTextForegroundColor;
@property(readonly, nonatomic) UIFont *defaultTextFont; // @synthesize defaultTextFont=_defaultTextFont;
@property(nonatomic, getter=isDeleting) _Bool deleting; // @synthesize deleting=_deleting;
@property(nonatomic) _Bool needsLayout; // @synthesize needsLayout=_needsLayout;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection=_writingDirection;
@property(retain, nonatomic) T1ComposeRTLTextViewDelegate *composeRTLTextViewDelegate; // @synthesize composeRTLTextViewDelegate=_composeRTLTextViewDelegate;
@property(retain, nonatomic) UIView *fadeOverlayView; // @synthesize fadeOverlayView=_fadeOverlayView;
@property(retain, nonatomic) T1ComposeCardPreviewController *cardPreviewController; // @synthesize cardPreviewController=_cardPreviewController;
@property(retain, nonatomic) T1QuotedStatusView *quotedStatusView; // @synthesize quotedStatusView=_quotedStatusView;
@property(retain, nonatomic) UIButton *monetizationPromptButton; // @synthesize monetizationPromptButton=_monetizationPromptButton;
@property(retain, nonatomic) TFNButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) T1TaggingPromptButton *peopleInAttachmentsButton; // @synthesize peopleInAttachmentsButton=_peopleInAttachmentsButton;
@property(retain, nonatomic) T1ComposeTagLocationViewController *tagLocationViewController; // @synthesize tagLocationViewController=_tagLocationViewController;
@property(retain, nonatomic) T1ComposePollingCardPreviewController *pollingCardPreviewController; // @synthesize pollingCardPreviewController=_pollingCardPreviewController;
@property(retain, nonatomic) T1MediaAttachmentsViewController *attachmentsViewController; // @synthesize attachmentsViewController=_attachmentsViewController;
@property(retain, nonatomic) T1ConversationConnectorView *connectorView; // @synthesize connectorView=_connectorView;
@property(retain, nonatomic) T1ComposeAccountAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) T1TweetComposeLocator *locator; // @synthesize locator=_locator;
@property(nonatomic) __weak id <T1TweetComposeSingleTweetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFSTwitterLocation *assetLocation; // @synthesize assetLocation=_assetLocation;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) T1ComposeTextView *tweetTextView; // @synthesize tweetTextView=_tweetTextView;
@property(nonatomic, getter=isHeadOfTweetstorm) _Bool headOfTweetstorm; // @synthesize headOfTweetstorm=_headOfTweetstorm;
@property(nonatomic, getter=isPartOfTweetstorm) _Bool partOfTweetstorm; // @synthesize partOfTweetstorm=_partOfTweetstorm;
@property(nonatomic) _Bool shouldShowConnectingLine; // @synthesize shouldShowConnectingLine=_shouldShowConnectingLine;
@property(nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_hideOverflowViews;
- (void)_t1_deferred_showOverflowViewsFromIndex:(long long)arg1;
- (void)_t1_showOverflowViewsFromIndex:(long long)arg1;
- (void)_t1_layoutOverflowHighlight;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (id)calculatedLayoutMetrics;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_t1_replyPlaceholderText;
- (id)_t1_placeholderText;
- (void)updatePlaceholderText;
- (void)_t1_selectComposeAccountFromView:(id)arg1;
- (void)_t1_didTapAvatarImageButton:(id)arg1;
- (_Bool)areMultipleCardURLsAllowed;
- (long long)cardPreviewDisplayMode:(id)arg1;
- (void)cardPreviewController:(id)arg1 didRemoveCardPreviewForReason:(unsigned long long)arg2 withCardData:(id)arg3;
- (void)cardPreviewController:(id)arg1 didShowCardPreviewWithCardData:(id)arg2;
- (void)cardPreviewControllerDidStartFetching:(id)arg1;
- (_Bool)isCardPreviewAllowed;
- (void)_t1_updateCardPreviewWithComposition:(id)arg1;
- (void)_t1_setupCardPreview;
- (void)_t1_updateQuotedStatusViewWithQuotedStatus:(id)arg1;
- (void)_t1_animateQuotedStatus;
- (void)_t1_updateQuotedStatus;
- (void)videoMonetizationSettingsViewController:(id)arg1 didUpdateSettings:(id)arg2;
- (void)_t1_updateVideoMonetizationSetting;
- (_Bool)shouldPromptVideoMonetization;
- (void)_t1_presentModalViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 preferredPresentationStyle:(long long)arg4 delegate:(id)arg5 layoutDelegate:(id)arg6;
- (void)_t1_presentModalSheetViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 preferredPresentationStyle:(long long)arg4 layoutDelegate:(id)arg5 delegate:(id)arg6;
- (void)_t1_presentDefaultStyleModalSheetWithContentViewController:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 layoutDelegate:(id)arg4 delegate:(id)arg5;
- (void)_t1_presentFloatingStyleModalSheetWithContentViewController:(id)arg1 layoutDelegate:(id)arg2 delegate:(id)arg3;
- (void)_t1_presentFullScreenStyleModalSheetWithContentViewController:(id)arg1 delegate:(id)arg2;
- (void)_t1_didTapMonetizationPrompt:(id)arg1;
- (void)taggingViewControllerDidComplete:(id)arg1;
- (void)taggingViewControllerDidCancel:(id)arg1;
- (void)_t1_didTapPeopleInAttachmentsButtonInRect:(struct CGRect)arg1 ofView:(id)arg2;
- (void)_t1_didTapPeopleInAttachmentsButton:(id)arg1;
- (void)tweetComposeLocator:(id)arg1 didUpdateGeoSupportStatus:(_Bool)arg2;
- (void)tweetComposeLocatorDidCompleteGeoLookup:(id)arg1;
- (void)tweetComposeLocatorWillPerformGeoLookup:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentation;
@property(retain, nonatomic) NSArray *suggestedPlaces;
@property(retain, nonatomic) TFSTwitterPlace *selectedPlace;
- (void)showAdditionalPOISuggestions:(_Bool)arg1;
- (void)updateLocationView;
- (void)composeTagLocationViewController:(id)arg1 didTapButtonWithPlace:(id)arg2 index:(unsigned long long)arg3;
- (void)composeTagLocationViewControllerDidTapSearchButton:(id)arg1;
- (void)composeTagLocationViewControllerDidTapGeoButton:(id)arg1;
- (void)pollingCardPreviewController:(id)arg1 didTapAddAltTextForAsset:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didHideDurationPicker:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 willHideDurationPicker:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didShowDurationPicker:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 willShowDurationPicker:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didChangeCompositionPollingCard:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didAddChoiceToPollComposeView:(id)arg2;
- (void)pollingCardPreviewController:(id)arg1 didRemovePollComposeView:(id)arg2;
- (void)pollingCardPreviewControllerDidBeginEditing:(id)arg1;
- (void)pollingCardPreviewController:(id)arg1 didShowPollComposeView:(id)arg2;
- (void)setQuotedStatus:(id)arg1;
- (void)activatePlacePickerFromButton:(id)arg1;
- (void)focusPollCard;
- (void)setPollCard:(id)arg1;
- (void)_t1_updatePollComposeWithComposition:(id)arg1;
- (void)_t1_resetBaseTypingAttributes:(id)arg1;
- (void)_t1_highlightEntities:(id)arg1;
- (_Bool)_t1_areAttachmentsAllowed;
- (void)_t1_scribeRemovedAttachment:(id)arg1;
- (void)_t1_scribeAddedAttachment:(id)arg1;
- (void)_t1_updateAssetLocationWhenRemovingAttachment;
- (void)_t1_updateAssetLocationWithAttachment:(id)arg1;
- (void)_t1_saveLocalBackupForAttachment:(id)arg1;
- (void)_t1_updateAssetSavedToLibraryForAttachment:(id)arg1;
- (void)_t1_updateAssetLocationsFromOldAttachments:(id)arg1;
- (void)removeAttachment:(id)arg1 animated:(_Bool)arg2;
- (void)addOrReplaceAttachment:(id)arg1 animated:(_Bool)arg2;
- (void)setAttachments:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *attachments;
- (id)scribe;
- (long long)remainingCountForWarningDisplayInProgressView:(id)arg1;
- (long long)remainingCountForProgressView:(id)arg1;
- (long long)currentCountForProgressView:(id)arg1;
- (long long)remainingCharacterCount;
- (_Bool)shouldCardPreviewTombstoneIfNotDisplayed;
- (void)prepareForDeletion;
- (void)prepareForActivation;
- (_Bool)isGeoSupportPossible;
- (_Bool)isLoadingGeoLocation;
- (_Bool)canAddPoll;
- (_Bool)isWorthSending;
- (_Bool)isWorthSaving;
- (_Bool)hasAnimatedImageAttachments;
- (_Bool)hasVideoAttachments;
- (_Bool)hasImageAttachments;
- (_Bool)hasCardPreview;
- (_Bool)isReply;
- (_Bool)isEmptyQuoteTweetRestricted;
- (_Bool)hasQuotedStatus;
- (_Bool)hasPoll;
- (_Bool)hasAtLeastOneAttachment;
- (_Bool)hasText;
- (void)textView:(id)arg1 didChangeBaseWritingDirection:(long long)arg2;
- (_Bool)_t1_canPerformPasteAsAttachment;
- (_Bool)performPasteWithSender:(id)arg1;
- (_Bool)canPerformPasteWithSender:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)canTrimVideoMediaAsset:(id)arg1;
- (_Bool)canEditPhotoMediaAsset:(id)arg1;
- (void)attachmentsViewController:(id)arg1 presentTooltipAtFirstAttachmentView:(id)arg2;
- (void)attachmentsViewControllerDidScroll:(id)arg1;
- (void)attachmentsViewController:(id)arg1 registerView:(id)arg2 forTooltipIdentifier:(id)arg3;
- (void)attachmentsViewController:(id)arg1 didTapLivePhotoToggleButton:(id)arg2;
- (void)attachmentsViewController:(id)arg1 didTapAltTextForAttachment:(id)arg2;
- (void)attachmentsViewController:(id)arg1 didTapStickerForAttachment:(id)arg2;
- (void)attachmentsViewControllerDidTapBackground:(id)arg1;
- (void)attachmentsViewController:(id)arg1 didTapRemoveAttachment:(id)arg2;
- (void)attachmentsViewController:(id)arg1 didTapAttachment:(id)arg2;
- (void)attachmentsViewController:(id)arg1 didReorderAttachments:(id)arg2;
- (void)attachmentsViewControllerDragStateDidChange:(id)arg1;
- (double)maximumPreferredAttachmentsViewHeight:(id)arg1;
- (double)visibleLowerBoundForAttachmentsViewController:(id)arg1;
- (_Bool)attachmentsViewController:(id)arg1 shouldDragToReorderAttachment:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowLivePhotoToggleButtonForAttachment:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowAltTextBadgeForAttachment:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowAltTextButtonForAttachment:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowStickerButtonForAttachment:(id)arg2;
- (_Bool)attachmentsViewController:(id)arg1 shouldShowEditButtonForAttachment:(id)arg2;
- (void)_t1_updateDeleteButtonAppearance;
- (void)_t1_updatePeopleInAttachmentsButtonAppearance;
- (void)_t1_updateTagLocationViewControllerAppearance;
- (void)_t1_updateTweetTextView;
- (_Bool)_t1_shouldShowTagLocationController;
- (_Bool)_t1_shouldShowPeopleInAttachments;
- (void)_t1_animatePeopleTagger;
- (void)_t1_animateLocationView;
- (void)_t1_updateAccessibilityViews;
- (void)_t1_updateViewState;
@property(readonly, nonatomic) UIView<UITextInput> *currentInputView;
@property(readonly, nonatomic) UIImage *avatarImage;
@property(readonly, nonatomic) struct CGRect caretRect;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
- (_Bool)isInactiveDisplayStyle;
- (_Bool)isEditingDisplayStyle;
- (_Bool)isPreviewDisplayStyle;
@property(readonly, nonatomic) TFNTwitterComposePlaceStore *placeStore;
- (void)handleSingleTapOutsideBounds;
- (void)showMenu;
- (id)geotaggedCompositionForActiveGeoButton:(_Bool)arg1;
- (void)resetComposition:(id)arg1;
- (void)_t1_compositionDidUpdate;
- (void)setComposition:(id)arg1;
- (void)_t1_didTapOnSingleTweetController;
- (void)_t1_didTapRemoveTweetButton;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_t1_layoutDeleteButton;
- (double)preferredHeightFittingWidth:(double)arg1;
- (void)_t1_updatePreferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)layoutIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithComposition:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 delegate:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

