//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, T1DirectMessageAvatarImageView, T1DismissButton, TFNAttributedTextView, UIButton, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface T1DirectMessageInboxSummaryView : UIView
{
    // Error parsing type: , name: thumbnailImageView
    // Error parsing type: , name: defaultTrashVectorFillColor
    // Error parsing type: , name: accessoryTrashButton
    // Error parsing type: , name: accessoryTrashImageName
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: titleBadgeView
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: timestampLabel
    // Error parsing type: , name: bodyLabel
    // Error parsing type: , name: caretButton
    // Error parsing type: , name: accessoryImageView
    // Error parsing type: , name: columns
    // Error parsing type: , name: leadingBodyConstraint
    // Error parsing type: , name: topBodyConstraint
    // Error parsing type: , name: bodyColumnsLeadingAnchor
    // Error parsing type: , name: bodyColumnsTopAnchor
}

+ (_Bool)requiresConstraintBasedLayout;
+ (long long)defaultBodyNumberOfLines;
- (void).cxx_destruct;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) UIImageView *accessoryImageView; // @synthesize accessoryImageView;
@property(nonatomic, readonly) T1DismissButton *caretButton; // @synthesize caretButton;
@property(nonatomic, readonly) TFNAttributedTextView *bodyLabel; // @synthesize bodyLabel;
@property(nonatomic, readonly) UILabel *timestampLabel; // @synthesize timestampLabel;
@property(nonatomic, readonly) UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, readonly) UIImageView *titleBadgeView; // @synthesize titleBadgeView;
@property(nonatomic, readonly) UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, readonly) NSString *accessoryTrashImageName;
@property(nonatomic, readonly) UIButton *accessoryTrashButton; // @synthesize accessoryTrashButton;
@property(nonatomic, readonly) UIColor *defaultTrashVectorFillColor; // @synthesize defaultTrashVectorFillColor;
@property(nonatomic, readonly) T1DirectMessageAvatarImageView *thumbnailImageView; // @synthesize thumbnailImageView;

@end

