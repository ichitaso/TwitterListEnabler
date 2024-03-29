//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageAbstractConversationEntryViewModel.h>

@class DirectMessageEntryInterstitialSource, NSArray, NSAttributedString, NSString, T1DirectMessageEntryMetrics, T1DirectMessageEntryViewModelVariant, T1UnifiedCardComponentViewRegistry, T1UnifiedCardViewLayoutDelegate, TFNAttributedTextModel, TFNLayoutMetrics, TFNTwitterCardContext, TFNTwitterStatus, TFSFlavoredRange, UIFont;
@protocol TFNDirectMessageEntry, TFNDirectMessageMediaAttachment, TFNDirectMessageStickerAttachment, TFNDirectMessageUser;

@interface T1DirectMessageEntryViewModel : T1DirectMessageAbstractConversationEntryViewModel
{
    _Bool _lastEntryInGroup;
    _Bool _firstEntryInGroup;
    _Bool _showDetails;
    _Bool _isEstablished;
    _Bool _hasError;
    _Bool _showsSpamFilteringOptions;
    _Bool _mediaForward;
    _Bool _shouldRenderCard;
    _Bool _isOutgoingMessage;
    NSString *_accessibilityAnnouncement;
    NSString *_displayText;
    double _roundedCornerRadius;
    T1DirectMessageEntryViewModelVariant *_variant;
    id <TFNDirectMessageUser> _sender;
    TFNAttributedTextModel *_attributedTextModel;
    NSArray *_displayRanges;
    id _quotedStatusViewLayoutState;
    TFNTwitterCardContext *_cardContext;
    T1UnifiedCardComponentViewRegistry *_unifiedCardComponentRegistry;
    T1UnifiedCardViewLayoutDelegate *_ucLayoutDelegate;
    unsigned long long _readReceiptDisplayMode;
    NSAttributedString *_messageTimestampLabelAttributedText;
    NSAttributedString *_messageStatusLabelAttributedText;
    NSAttributedString *_messageSenderLabelAttributedText;
    TFSFlavoredRange *_seenByParticipantNamesExpandRange;
    T1DirectMessageEntryMetrics *_entryLayoutMetrics;
    unsigned long long _supersizedEmojiState;
    TFNAttributedTextModel *_sensitiveMediaInterstitialAttributedTextModel;
    TFNAttributedTextModel *_seenByParticipantNamesTextModel;
    struct CGSize _spamOptionsViewSize;
}

+ (id)createAccessoryButtonWithTitle:(id)arg1;
+ (struct CGSize)accessoryButtonSizeWithTitle:(id)arg1;
+ (id)accessoryButtonTintColor;
+ (unsigned long long)accessoryButtonPresentation;
+ (unsigned long long)accessoryButtonVariant;
+ (unsigned long long)accessoryButtonStrength;
+ (unsigned long long)accessoryButtonSize;
+ (_Bool)_shouldRenderCardAttachment:(id)arg1 forCardContext:(id)arg2 registry:(id)arg3;
+ (id)readReceiptTextColor;
+ (id)readReceiptFont;
+ (_Bool)_canMakePhoneCalls;
+ (id)_stripPunctuationFromStringTemplateIfNeeded:(id)arg1;
+ (id)_accessibilityTextForStatus:(id)arg1;
+ (double)feedbackCardTopMargin;
+ (double)bubbleGapHeight;
+ (struct UIEdgeInsets)contentEdgeInsets;
+ (double)avatarMargin;
+ (id)cellReuseIdentifier;
@property(retain, nonatomic) TFNAttributedTextModel *seenByParticipantNamesTextModel; // @synthesize seenByParticipantNamesTextModel=_seenByParticipantNamesTextModel;
@property(retain, nonatomic) TFNAttributedTextModel *sensitiveMediaInterstitialAttributedTextModel; // @synthesize sensitiveMediaInterstitialAttributedTextModel=_sensitiveMediaInterstitialAttributedTextModel;
@property(nonatomic) unsigned long long supersizedEmojiState; // @synthesize supersizedEmojiState=_supersizedEmojiState;
@property(readonly, nonatomic) T1DirectMessageEntryMetrics *entryLayoutMetrics; // @synthesize entryLayoutMetrics=_entryLayoutMetrics;
@property(nonatomic) _Bool isOutgoingMessage; // @synthesize isOutgoingMessage=_isOutgoingMessage;
@property(readonly, nonatomic) _Bool shouldRenderCard; // @synthesize shouldRenderCard=_shouldRenderCard;
@property(readonly, nonatomic) _Bool mediaForward; // @synthesize mediaForward=_mediaForward;
@property(readonly, nonatomic) TFSFlavoredRange *seenByParticipantNamesExpandRange; // @synthesize seenByParticipantNamesExpandRange=_seenByParticipantNamesExpandRange;
@property(copy, nonatomic) NSAttributedString *messageSenderLabelAttributedText; // @synthesize messageSenderLabelAttributedText=_messageSenderLabelAttributedText;
@property(copy, nonatomic) NSAttributedString *messageStatusLabelAttributedText; // @synthesize messageStatusLabelAttributedText=_messageStatusLabelAttributedText;
@property(copy, nonatomic) NSAttributedString *messageTimestampLabelAttributedText; // @synthesize messageTimestampLabelAttributedText=_messageTimestampLabelAttributedText;
@property(readonly, nonatomic) unsigned long long readReceiptDisplayMode; // @synthesize readReceiptDisplayMode=_readReceiptDisplayMode;
@property(nonatomic) struct CGSize spamOptionsViewSize; // @synthesize spamOptionsViewSize=_spamOptionsViewSize;
@property(nonatomic) _Bool showsSpamFilteringOptions; // @synthesize showsSpamFilteringOptions=_showsSpamFilteringOptions;
@property(readonly, nonatomic) T1UnifiedCardViewLayoutDelegate *ucLayoutDelegate; // @synthesize ucLayoutDelegate=_ucLayoutDelegate;
@property(readonly, nonatomic) T1UnifiedCardComponentViewRegistry *unifiedCardComponentRegistry; // @synthesize unifiedCardComponentRegistry=_unifiedCardComponentRegistry;
@property(readonly, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
@property(readonly, nonatomic) id quotedStatusViewLayoutState; // @synthesize quotedStatusViewLayoutState=_quotedStatusViewLayoutState;
@property(readonly, nonatomic) NSArray *displayRanges; // @synthesize displayRanges=_displayRanges;
@property(retain, nonatomic) TFNAttributedTextModel *attributedTextModel; // @synthesize attributedTextModel=_attributedTextModel;
@property(readonly, nonatomic) id <TFNDirectMessageUser> sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(readonly, nonatomic) _Bool isEstablished; // @synthesize isEstablished=_isEstablished;
@property(readonly, nonatomic) T1DirectMessageEntryViewModelVariant *variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (_Bool)showDetails;
- (_Bool)isFirstEntryInGroup;
- (_Bool)isLastEntryInGroup;
- (id)accessibilityAnnouncement;
- (void).cxx_destruct;
- (_Bool)isEqualToEntryViewModel:(id)arg1;
- (id)viewModelBySettingReadReceiptDisplayMode:(unsigned long long)arg1;
- (id)viewModelBySettingShowDetails:(_Bool)arg1;
- (id)viewModelBySettingFirstEntryInGroup:(_Bool)arg1 lastEntryInGroup:(_Bool)arg2;
- (id)cellReuseIdentifier;
- (void)saveProgressIndicatorDisplayProgress:(id)arg1;
- (id)progressIndicatorDisplayProgress;
@property(readonly, copy, nonatomic) NSString *mediaAssetID;
@property(readonly, nonatomic) double mediaUploadProgress;
@property(readonly, nonatomic) UIFont *statusLabelFont;
- (double)_messageLineSpacing;
- (id)_messageTextFont;
- (id)_messageSenderText;
- (id)_messageStatusTimestampText;
- (id)_messageStatusReadReceiptText;
- (id)_messageStatusNotEstablishedText;
- (void)_initializeMessageStatusLabelAttributedText;
- (void)_initializeSenderLabelAttributedText;
- (void)_initializeTimestampLabelAttributedText;
- (void)_t1_computeEntryLayoutMetrics;
- (void)_initializeEntryLayoutMetrics;
- (void)_t1_statusDidUpdate:(id)arg1;
- (void)_t1_initializeObservers;
- (id)_computeSeenByParticipantNamesTextModelAndExpandReceiptRange:(id *)arg1;
- (id)_attributedMessageString;
- (id)_attributedTextModel;
- (void)_configureAccessibility;
- (id)_accessibleAttributedMessageText;
@property(readonly, nonatomic) NSString *accessibilityReadStateText;
- (id)accessibilityTimestampText;
@property(readonly, nonatomic) double roundedCornerRadius; // @synthesize roundedCornerRadius=_roundedCornerRadius;
@property(readonly, nonatomic) unsigned long long attachmentRoundedCorners;
@property(readonly, nonatomic) unsigned long long messageRoundedCorners;
@property(readonly, nonatomic) struct CGSize seenByParticipantNamesTextSize;
@property(readonly, nonatomic) double contentWidth;
@property(readonly, nonatomic) struct UIEdgeInsets actionButtonInsets;
@property(readonly, nonatomic) struct UIEdgeInsets stickerViewInsets;
@property(readonly, nonatomic) struct UIEdgeInsets interstitialInsets;
@property(readonly, nonatomic) DirectMessageEntryInterstitialSource *interstitialSource;
@property(readonly, nonatomic) struct CGSize cardViewSize;
@property(readonly, nonatomic) TFNLayoutMetrics *cardViewLayoutMetrics;
@property(readonly, nonatomic) struct CGSize statusViewSize;
@property(readonly, nonatomic) struct CGSize interstitialSize;
@property(readonly, nonatomic) double bubbleGapHeight;
@property(readonly, nonatomic) struct CGSize textSize;
@property(readonly, nonatomic) struct UIEdgeInsets cardInsets;
@property(readonly, nonatomic) struct CGSize stickerSize;
@property(readonly, nonatomic) struct UIEdgeInsets messageStatusInsets;
@property(readonly, nonatomic) struct UIEdgeInsets messageTextInsets;
@property(readonly, nonatomic) struct UIEdgeInsets mediaPreviewInsets;
@property(readonly, nonatomic) struct CGSize mediaSize;
@property(readonly, nonatomic) struct CGSize messageTextBubbleSize;
- (struct CGSize)avatarSize;
@property(readonly, nonatomic, getter=isShowingAttachmentInterstitial) _Bool showingAttachmentInterstitial;
@property(readonly, nonatomic) _Bool hasUntrustedAttachmentInterstitial;
@property(readonly, nonatomic) _Bool hasSensitiveMediaInterstitial;
@property(readonly, nonatomic, getter=isCustomerFeedbackCardPresent) _Bool customerFeedbackCardPresent;
@property(readonly, nonatomic) TFNTwitterStatus *status;
@property(readonly, nonatomic) NSArray *ctas;
@property(readonly, nonatomic) _Bool hasCTAButtons;
@property(readonly, nonatomic) _Bool hasRenderableCard;
@property(readonly, nonatomic) _Bool hasSticker;
@property(readonly, nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasMedia;
@property(readonly, nonatomic) _Bool hasAttachment;
@property(readonly, nonatomic) id <TFNDirectMessageStickerAttachment> messageEntryStickerAttachment;
@property(readonly, nonatomic) id <TFNDirectMessageMediaAttachment> messageEntryMediaAttachment;
@property(readonly, nonatomic) id <TFNDirectMessageEntry> messageEntry;
@property(readonly, nonatomic) _Bool shouldShowAltTextView;
@property(readonly, nonatomic) _Bool shouldDimMediaBubbleView;
@property(readonly, nonatomic) _Bool shouldShowEntranceAnimation;
@property(readonly, nonatomic) _Bool shouldShowSupersizedEmoji;
@property(readonly, nonatomic) double avatarYOffset;
@property(readonly, nonatomic) _Bool shouldShowAvatarImage;
@property(readonly, nonatomic) _Bool shouldShowCustomProfile;
- (_Bool)shouldShowFullnameInTimestamp;
@property(readonly, nonatomic) _Bool supportsHighlightingMessageBubble;
- (void)logImpressionWithScribe:(id)arg1 scribePage:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4;
@property(readonly, nonatomic) long long mediaContentMode;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithEntry:(id)arg1 firstInGroup:(_Bool)arg2 lastInGroup:(_Bool)arg3 displayState:(id)arg4;
@property(nonatomic, readonly) _Bool shouldShowEntryStateView;

// Remaining properties
@property(readonly, nonatomic) id <TFNDirectMessageEntry> entry; // @dynamic entry;

@end

