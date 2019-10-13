//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1PromptView-Protocol.h>

@class NSArray, NSString, T1PromptImageSpec, T1PromptTextSpec, TFNAttributedTextView, UIButton, UIImage, UIImageView, UIScrollView, UIStackView;

@interface T1OnboardingScrollingPromptView : UIView <T1PromptView>
{
    UIScrollView *_scrollView;
    UIStackView *_contentStackView;
    UIStackView *_buttonStackView;
    T1PromptTextSpec *_primaryTextSpec;
    T1PromptTextSpec *_secondaryTextSpec;
    T1PromptTextSpec *_detailTextSpec;
    NSArray *_buttonSpecs;
    NSArray *_buttons;
    T1PromptImageSpec *_imageSpec;
    TFNAttributedTextView *_primaryTextView;
    TFNAttributedTextView *_secondaryTextView;
    TFNAttributedTextView *_detailTextView;
    UIImageView *_headerImageView;
}

@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) TFNAttributedTextView *detailTextView; // @synthesize detailTextView=_detailTextView;
@property(retain, nonatomic) TFNAttributedTextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(retain, nonatomic) TFNAttributedTextView *primaryTextView; // @synthesize primaryTextView=_primaryTextView;
@property(retain, nonatomic) T1PromptImageSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
@property(readonly, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *buttonSpecs; // @synthesize buttonSpecs=_buttonSpecs;
@property(retain, nonatomic) T1PromptTextSpec *detailTextSpec; // @synthesize detailTextSpec=_detailTextSpec;
@property(retain, nonatomic) T1PromptTextSpec *secondaryTextSpec; // @synthesize secondaryTextSpec=_secondaryTextSpec;
@property(retain, nonatomic) T1PromptTextSpec *primaryTextSpec; // @synthesize primaryTextSpec=_primaryTextSpec;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIButton *dismissButton;
@property(readonly, copy, nonatomic) CDUnknownBlockType dismissOptionAction;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) _Bool showDismissOption;
@property(readonly, nonatomic) _Bool showLogo;
@property(readonly) Class superclass;

@end

