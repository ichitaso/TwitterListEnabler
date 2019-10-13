//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>
#import <T1Twitter/T1StatusViewModelCardAdditions-Protocol.h>
#import <T1Twitter/T1StatusViewModelExperimentAdditions-Protocol.h>
#import <T1Twitter/T1StatusViewModelPromotedLoggingAdditions-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceProvider-Protocol.h>
#import <T1Twitter/TFNTwitterDismissibleItem-Protocol.h>
#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, TFNAttributedTextModel, TFNTwitterAccount, TFNTwitterCardData, TFNTwitterFeedbackInfo, TFNTwitterGeotag, TFNTwitterMediaInfo, TFNTwitterStatus, TFNTwitterStatusConversationContext, TFSTwitterCameraMoment, TFSTwitterEntitySet, TFSTwitterVideoMonetizationSettings, TFSURTRichText, UIColor, UIFont;
@protocol T1PlayerFactoryIdentifiable, T1StatusViewModel, TFNTwitterAVPlayerSessionSource, TFNTwitterStatusConversationTreeContext;

@protocol T1StatusViewModel <NSObject, TFSTwitterScribableItem, TFNTwitterDismissibleItem, T1StatusViewModelExperimentAdditions, T1StatusViewModelCardAdditions, T1StatusViewModelPromotedLoggingAdditions, TFNTwitterCardDataSourceProvider>
@property(nonatomic, readonly) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings;
@property(nonatomic, readonly) _Bool shouldOmitCardLink;
@property(nonatomic, readonly) _Bool shouldOmitCollectionLink;
@property(nonatomic, readonly) _Bool shouldShowCollectionCarousel;
- (NSDictionary *)updatedScribeParameters:(NSDictionary *)arg1;
- (_Bool)hasTwitterMediaIncludingPartners:(unsigned long long)arg1 forAccount:(TFNTwitterAccount *)arg2;
- (_Bool)isFillerTweet;
@property(nonatomic, readonly) long long draftTweetID;
- (_Bool)isAdPreviewTweet;
@property(nonatomic, readonly) NSString *designatorUrl;
@property(nonatomic, readonly) unsigned long long designatorLabelType;
@property(nonatomic, readonly) unsigned long long designatorIconType;
@property(nonatomic, readonly) NSString *designatorImageUrl;
@property(nonatomic, readonly) NSString *designatorString;
@property(nonatomic, readonly) double score;
@property(nonatomic, readonly) id <T1PlayerFactoryIdentifiable> playerFactoryIdentifiable;
@property(nonatomic, readonly) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (_Bool)isAttachmentTypePhotoOrVideo:(unsigned long long)arg1;
@property(nonatomic, readonly) _Bool isTweetedByAuthenticatedAccount;
@property(nonatomic, readonly) _Bool isFromUserUsernameless;
@property(nonatomic, readonly) _Bool isFromUserAffiliated;
@property(nonatomic, readonly) _Bool isFromUserVerified;
@property(nonatomic, readonly) _Bool isFromUserProtected;
- (TFNAttributedTextModel *)attributedTextModelForOptions:(unsigned long long)arg1 withFont:(UIFont *)arg2 boldFont:(UIFont *)arg3 lineHeight:(double)arg4 lineSpacing:(double)arg5 emptyLineMaxHeight:(double)arg6 darkBackground:(_Bool)arg7 defaultTextColor:(UIColor *)arg8 linkTextColor:(UIColor *)arg9 highlighted:(_Bool)arg10 truncationString:(NSString *)arg11 cachingEnabled:(_Bool)arg12;
- (long long)attributedDisplayTextHeightForOptions:(unsigned long long)arg1 withWidth:(double)arg2 font:(UIFont *)arg3 boldFont:(UIFont *)arg4 lineHeight:(double)arg5 lineSpacing:(double)arg6 emptyLineMaxHeight:(double)arg7 darkBackground:(_Bool)arg8 defaultTextColor:(UIColor *)arg9 linkTextColor:(UIColor *)arg10 truncationString:(NSString *)arg11 cachingEnabled:(_Bool)arg12;
- (NSArray *)displayTextPlaceRangesForOptions:(unsigned long long)arg1;
- (_Bool)displayTextMayHaveUndetectedHashflagsForOptions:(unsigned long long)arg1;
- (NSArray *)displayTextHashflagsForOptions:(unsigned long long)arg1;
- (NSArray *)displayTextURLRangesForOptions:(unsigned long long)arg1;
- (NSArray *)displayTextRangesForOptions:(unsigned long long)arg1;
- (NSString *)displayTextForOptions:(unsigned long long)arg1;
- (NSString *)accessibilityTextForOptions:(unsigned long long)arg1;
@property(nonatomic, readonly) _Bool isIncompleteQuotedStatus;
@property(nonatomic, readonly) TFSURTRichText *outerTombstoneRichRevealText;
@property(nonatomic, readonly) TFSURTRichText *outerTombstoneRichText;
- (_Bool)isOuterTombstoneDismissed;
@property(nonatomic, readonly) TFSURTRichText *innerTombstoneRichRevealText;
@property(nonatomic, readonly) TFSURTRichText *innerTombstoneRichText;
- (_Bool)isInnerTombstoneDismissed;
@property(nonatomic, readonly) _Bool isConversationMuted;
@property(nonatomic, readonly) NSString *conversationSection;
@property(nonatomic, readonly) _Bool isConversationSingleBranchedReplyStatus;
@property(nonatomic, readonly) long long selfThreadID;
@property(nonatomic, readonly) _Bool isSelfThreadStatus;
- (_Bool)displayAsSelfThreadTweet;
@property(nonatomic, readonly) _Bool isConversationPrecededByAncestor;
@property(nonatomic, readonly) _Bool isConversationRoot;
@property(nonatomic, readonly) _Bool isConversationAncestor;
@property(nonatomic, readonly) _Bool isConversationStatus;
@property(nonatomic, readonly) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;
@property(nonatomic, readonly) TFNTwitterStatusConversationContext *conversationContext;
@property(nonatomic, readonly) id <T1StatusViewModel> outerCollectionStatus;
@property(nonatomic, readonly) _Bool hasCollectionItems;
@property(nonatomic, readonly) NSArray *collectionCardDataItems;
@property(nonatomic, readonly) NSArray *collectionStatuses;
@property(nonatomic, readonly) NSString *collectionURL;
@property(nonatomic, readonly) long long collectionID;
@property(nonatomic, readonly) _Bool displayAsFavorited;
@property(nonatomic, readonly) _Bool displayAsRetweeted;
@property(nonatomic, readonly) NSDictionary *scribeParameters;
@property(nonatomic, readonly) NSString *scribeComponent;
@property(nonatomic, readonly) NSString *scribeElement;
@property(nonatomic, readonly) unsigned long long autoExpandMode;
@property(nonatomic, readonly) _Bool displayAsFollowForwardTweet;
@property(nonatomic, readonly) _Bool displayAsMomentTimelineTweet;
@property(nonatomic, readonly) _Bool displayAsMomentTweet;
@property(nonatomic, readonly) _Bool isRTBCreative;
@property(nonatomic, readonly) _Bool isIssueAd;
@property(nonatomic, readonly) _Bool isPoliticalAd;
@property(nonatomic, readonly) NSString *advertiserName;
@property(nonatomic, readonly) _Bool isPromoted;
- (NSString *)socialContextURL;
- (NSString *)socialBadgeName;
- (NSString *)socialText;
@property(nonatomic, readonly) TFSTwitterCameraMoment *cameraMoment;
@property(nonatomic, readonly) NSString *composerSource;
@property(nonatomic, readonly) TFNTwitterGeotag *geotag;
@property(nonatomic, readonly) TFNTwitterGeotag *representedGeotag;
@property(nonatomic, readonly) _Bool primaryMediaRequiresAttribution;
@property(nonatomic, readonly) _Bool isMediaEntityVideo;
@property(nonatomic, readonly) _Bool isAudio;
@property(nonatomic, readonly) _Bool isReply;
@property(nonatomic, readonly) long long primaryCardType;
@property(nonatomic, readonly) unsigned long long primaryMediaType;
@property(nonatomic, readonly) TFNTwitterMediaInfo *primaryMediaInfo;
@property(nonatomic, readonly) NSArray *inlineMediaInfos;
@property(nonatomic, readonly) TFNTwitterFeedbackInfo *feedbackInfo;
@property(nonatomic, readonly) TFNTwitterCardData *representedCardData;
@property(nonatomic, readonly) TFNTwitterCardData *cardData;
@property(nonatomic, readonly) _Bool isQuoted;
@property(nonatomic, readonly) _Bool isQuoteStatus;
@property(nonatomic, readonly) id <T1StatusViewModel> mediaForwardViewModel;
@property(nonatomic, readonly) id <T1StatusViewModel> quotedStatusViewModel;
@property(nonatomic, readonly) NSString *retweetedByAccessibilityLabel;
@property(nonatomic, readonly) _Bool isRetweet;
- (void)syncLastDisplayCounts;
@property(nonatomic, readonly) NSString *limitedActionsPolicy;
@property(nonatomic, readonly) long long lastDisplayReplyCount;
@property(nonatomic, readonly) long long lastDisplayRetweetCount;
@property(nonatomic, readonly) long long lastDisplayFavoriteCount;
@property(nonatomic, readonly) long long displayReplyCount;
@property(nonatomic, readonly) long long displayRetweetCount;
@property(nonatomic, readonly) long long displayFavoriteCount;
@property(nonatomic, readonly) NSString *withheldScope;
@property(nonatomic, readonly) _Bool displayAsNewsCameraTweet;
@property(nonatomic, readonly) _Bool displayAsWithheld;
@property(nonatomic, readonly) _Bool hasModeratedReplies;
@property(nonatomic, readonly) _Bool hasReplyBadgeIcon;
@property(nonatomic, readonly) unsigned long long replyBadgeType;
@property(nonatomic, readonly) UIColor *replyBadgeBackgroundColor;
@property(nonatomic, readonly) NSString *replyBadgeText;
@property(nonatomic, readonly) _Bool hasReplyBadge;
@property(nonatomic, readonly) _Bool isPinned;
@property(nonatomic, readonly) _Bool isNonPolicyCompliantTweetViewModel;
@property(nonatomic, readonly) _Bool isPossiblySensitiveViewModel;
@property(nonatomic, readonly) NSArray *hiddenURLEntities;
@property(nonatomic, readonly) NSArray *hiddenMentionEntities;
@property(nonatomic, readonly) TFSTwitterEntitySet *entities;
@property(nonatomic, readonly) NSString *momentID;
@property(nonatomic, readonly) NSString *supplementalLanguage;
@property(nonatomic, readonly) NSString *language;
@property(nonatomic, readonly) NSString *text;
@property(nonatomic, readonly) long long representedStatusID;
@property(nonatomic, readonly) long long representedFromUserID;
@property(nonatomic, readonly) NSString *representedFromUserName;
@property(nonatomic, readonly) long long fromUserID;
@property(nonatomic, readonly) NSString *fromUserName;
@property(nonatomic, readonly) NSString *fromUserFullName;
@property(nonatomic, readonly) NSDate *displayDate;
@property(nonatomic, readonly) long long statusID;
@property(nonatomic, readonly) NSString *unifiedID;
@property(nonatomic, readonly) NSString *statusItemViewModelDidUpdateNotificationName;
@property(nonatomic, readonly) TFNTwitterStatus *legacyStatus;

// Remaining properties
@property(nonatomic, readonly) _Bool adPreviewTweet;
@property(nonatomic, readonly) _Bool fillerTweet;
@property(nonatomic, readonly) _Bool innerTombstoneDismissed;
@property(nonatomic, readonly) _Bool outerTombstoneDismissed;
@property(nonatomic, readonly) _Bool selfThreadTweet;
@end

