//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter9TrendView : UIView
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
    // Error parsing type: , name: cardView.storage
    // Error parsing type: , name: secondaryCardView.storage
    // Error parsing type: , name: quoteStatusView.storage
    // Error parsing type: , name: quoteStatusViewHeight.storage
    // Error parsing type: , name: socialProofView
    // Error parsing type: , name: promotedView
    // Error parsing type: , name: caretView
    // Error parsing type: , name: caretCenterOnDomainContextConstraint.storage
    // Error parsing type: , name: caretCenterOnTitleConstraint.storage
    // Error parsing type: , name: caretTrailingConstraint.storage
    // Error parsing type: , name: minimumHeightConstraint.storage
    // Error parsing type: , name: rankingWidthConstraint.storage
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
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 outSourceRect:(struct CGRect *)arg2;
- (void)layoutMetricsDidChange:(id)arg1;
- (id)calculatedLayoutMetrics;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

