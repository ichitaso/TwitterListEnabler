//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNPreviewable-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter9TrendView : UIView <TFNPreviewable>
{
    // Error parsing type: , name: cardEventHandler
    // Error parsing type: , name: statusEventHandler
    // Error parsing type: , name: feedbackHandler
    // Error parsing type: , name: imagePipeline
    // Error parsing type: , name: contentStackView
    // Error parsing type: , name: domainContextView
    // Error parsing type: , name: titleView
    // Error parsing type: , name: descriptionView
    // Error parsing type: , name: cardTopMarginView
    // Error parsing type: , name: cardBottomMarginView
    // Error parsing type: , name: $__lazy_storage_$_cardView
    // Error parsing type: , name: $__lazy_storage_$_secondaryCardView
    // Error parsing type: , name: $__lazy_storage_$_quoteStatusView
    // Error parsing type: , name: $__lazy_storage_$_quoteStatusViewHeight
    // Error parsing type: , name: socialProofView
    // Error parsing type: , name: promotedView
    // Error parsing type: , name: caretView
    // Error parsing type: , name: $__lazy_storage_$_caretCenterOnDomainContextConstraint
    // Error parsing type: , name: $__lazy_storage_$_caretCenterOnTitleConstraint
    // Error parsing type: , name: $__lazy_storage_$_caretTrailingConstraint
    // Error parsing type: , name: $__lazy_storage_$_minimumHeightConstraint
    // Error parsing type: , name: $__lazy_storage_$_rankingWidthConstraint
    // Error parsing type: , name: rankAndContentStackView
    // Error parsing type: , name: rankStackView
    // Error parsing type: , name: rankLabel
    // Error parsing type: , name: rankSpacingView
    // Error parsing type: , name: minimumNumberOfRankDigits
    // Error parsing type: , name: shouldShowDomainContext
    // Error parsing type: , name: trendAccessibility
    // Error parsing type: , name: viewModel
}

- (void).cxx_destruct;
- (void)feedbackCaretTapped;
- (id)autoplayable;
- (void)voiceOverStatusChanged;
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) _Bool accessibilityElementsHidden;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (id)calculatedLayoutMetrics;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

