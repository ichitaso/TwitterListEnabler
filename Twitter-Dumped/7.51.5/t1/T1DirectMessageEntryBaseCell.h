//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageAbstractConversationEntryCell.h>

@class T1DirectMessageAbstractConversationEntryViewModel, T1DirectMessageEntryViewModel, UIImage;
@protocol T1DirectMessageAbstractEntryCellDelegate;

@interface T1DirectMessageEntryBaseCell : T1DirectMessageAbstractConversationEntryCell
{
    // Error parsing type: , name: needsInitialization
    // Error parsing type: , name: voiceOverCustomActions
    // Error parsing type: , name: messageDelegate
    // Error parsing type: , name: contentContainer
    // Error parsing type: , name: contentContainerWithErrorButton
    // Error parsing type: , name: avatarImageView
    // Error parsing type: , name: attachmentContainer
    // Error parsing type: , name: errorButton
    // Error parsing type: , name: actionButtonsContainer
    // Error parsing type: , name: spamOptionsView
    // Error parsing type: , name: attachmentInterstitialView
    // Error parsing type: , name: interstitialBubbleView
    // Error parsing type: , name: messageTextView
    // Error parsing type: , name: messageTextViewDelegate.storage
    // Error parsing type: , name: messageTextBubbleView
    // Error parsing type: , name: messageTextContainer
    // Error parsing type: , name: ctaButtons
    // Error parsing type: , name: entryStateView
    // Error parsing type: , name: messageStatusContainer
    // Error parsing type: , name: seenByParticipantNamesTextView
    // Error parsing type: , name: seenByParticipantNamesTextViewDelegate.storage
    // Error parsing type: , name: seenByParticipantNamesContainer
    // Error parsing type: , name: messageTextHeightConstraint
    // Error parsing type: , name: messageTextWidthConstraint
    // Error parsing type: , name: contentWidthConstraint
    // Error parsing type: , name: avatarVerticalConstraint
    // Error parsing type: , name: bubbleGapHeightConstraint
    // Error parsing type: , name: interstitialHeightConstraint
    // Error parsing type: , name: accessibilityItems
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)didTapUnmarkAsSpam:(id)arg1;
- (void)didTapMarkAsSpam:(id)arg1;
- (void)messageBubblePressedStateDidChange:(id)arg1;
- (void)didLongPressMessageBubble:(id)arg1;
- (void)didTapMessageBubble:(id)arg1;
- (void)retrySend:(id)arg1;
- (void)avatarImageViewTapped:(id)arg1;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void)layoutMetricsDidChange:(id)arg1;
@property(nonatomic) __weak id <T1DirectMessageAbstractEntryCellDelegate> delegate;
- (void)performEntranceAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateMessageStatusViewsAlpha:(double)arg1;
- (void)animateEntryStateLabelIsSlideDirectionUp:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)draftDidScrollIntoView;
- (void)draftWillScrollIntoView;
@property(nonatomic, readonly) T1DirectMessageEntryViewModel *messageEntryViewModel;
- (void)updateMessageBubbleHighlighted:(_Bool)arg1;
@property(nonatomic, readonly) UIImage *profileImage;
@property(nonatomic, retain) T1DirectMessageAbstractConversationEntryViewModel *entryViewModel;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

