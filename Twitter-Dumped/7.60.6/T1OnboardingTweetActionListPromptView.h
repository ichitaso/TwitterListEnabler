//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1PromptView-Protocol.h>

@class NSArray, NSString, T1FlexibleLayoutView, T1OnboardingExampleStatusView, T1PromptImageSpec, T1PromptTextSpec, T1StatusRowAdapterViewEventHandler, TFNAttributedTextView, TFNTwitterAccount, TFNTwitterStatus, UIActivityIndicatorView, UIButton, UIImage, UILabel;

@interface T1OnboardingTweetActionListPromptView : UIView <T1PromptView>
{
    T1FlexibleLayoutView *_contentView;
    T1FlexibleLayoutView *_buttonWrapper;
    T1FlexibleLayoutView *_statusWrapper;
    T1OnboardingExampleStatusView *_statusView;
    unsigned long long _options;
    T1StatusRowAdapterViewEventHandler *_eventHandler;
    TFNTwitterAccount *_account;
    TFNTwitterStatus *_tweet;
    UIView *_loadingBackground;
    UILabel *_loadingTextLabel;
    UIActivityIndicatorView *_loadingIndicator;
    NSArray *_buttons;
    NSArray *_buttonSpecs;
    T1PromptTextSpec *_primaryTextSpec;
    TFNAttributedTextView *_primaryTextView;
    T1PromptTextSpec *_secondaryTextSpec;
    TFNAttributedTextView *_secondaryTextView;
}

@property(readonly, nonatomic) TFNAttributedTextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *secondaryTextSpec; // @synthesize secondaryTextSpec=_secondaryTextSpec;
@property(readonly, nonatomic) TFNAttributedTextView *primaryTextView; // @synthesize primaryTextView=_primaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *primaryTextSpec; // @synthesize primaryTextSpec=_primaryTextSpec;
@property(retain, nonatomic) NSArray *buttonSpecs; // @synthesize buttonSpecs=_buttonSpecs;
@property(readonly, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)private_updateStatusView;
- (id)private_generateWrapperLayoutView;
- (id)private_subtitleFont;
- (id)private_titleFont;
- (id)private_updatedButtonForButtonSpec:(id)arg1 addedToItems:(id)arg2 withIndex:(long long)arg3;
- (id)private_updatedTextViewForTextSpec:(id)arg1 addedToItems:(id)arg2 withContentSpacing:(struct UIEdgeInsets)arg3 fontBlock:(CDUnknownBlockType)arg4;
- (void)private_updateArrangedSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLoading:(_Bool)arg1;
- (void)updatePrimaryTextSpec:(id)arg1 secondaryTextSpec:(id)arg2 buttonSpecs:(id)arg3 options:(unsigned long long)arg4;
- (void)hideWithText:(id)arg1 animation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithTweet:(id)arg1;
- (void)show;
- (id)initWithAccount:(id)arg1 primaryTextSpec:(id)arg2 secondaryTextSpec:(id)arg3 buttonSpecs:(id)arg4 options:(unsigned long long)arg5 eventHandler:(id)arg6;

// Remaining properties
@property(readonly, nonatomic) unsigned long long buttonLayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) T1PromptTextSpec *detailTextSpec;
@property(readonly, nonatomic) TFNAttributedTextView *detailTextView;
@property(readonly, nonatomic) UIButton *dismissButton;
@property(readonly, copy, nonatomic) CDUnknownBlockType dismissOptionAction;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) T1PromptImageSpec *imageSpec;
@property(readonly, nonatomic) _Bool showDismissOption;
@property(readonly, nonatomic) _Bool showLogo;
@property(readonly) Class superclass;

@end

