//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1PromptView-Protocol.h>

@class NSArray, NSString, T1PromptImageSpec, T1PromptTextSpec, TFNAttributedTextView, TFNToolbar, UIButton, UIImage, UIImageView;

@interface T1HalfPromptView : UIView <T1PromptView>
{
    TFNToolbar *_toolbar;
    UIImageView *_imageView;
    UIView *_toolbarBackgroundView;
    T1PromptImageSpec *_imageSpec;
    T1PromptTextSpec *_primaryTextSpec;
    TFNAttributedTextView *_primaryTextView;
    T1PromptTextSpec *_secondaryTextSpec;
    TFNAttributedTextView *_secondaryTextView;
    NSArray *_buttonSpecs;
    NSArray *_buttons;
    unsigned long long _buttonLayout;
}

@property(nonatomic) unsigned long long buttonLayout; // @synthesize buttonLayout=_buttonLayout;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *buttonSpecs; // @synthesize buttonSpecs=_buttonSpecs;
@property(retain, nonatomic) TFNAttributedTextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *secondaryTextSpec; // @synthesize secondaryTextSpec=_secondaryTextSpec;
@property(retain, nonatomic) TFNAttributedTextView *primaryTextView; // @synthesize primaryTextView=_primaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *primaryTextSpec; // @synthesize primaryTextSpec=_primaryTextSpec;
@property(retain, nonatomic) T1PromptImageSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
- (void).cxx_destruct;
- (void)_t1_updateButtonLayout;
- (double)private_heightForWidth:(double)arg1 performLayout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) T1PromptTextSpec *detailTextSpec;
@property(readonly, nonatomic) TFNAttributedTextView *detailTextView;
@property(readonly, nonatomic) UIButton *dismissButton;
@property(readonly, copy, nonatomic) CDUnknownBlockType dismissOptionAction;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) _Bool showDismissOption;
@property(readonly, nonatomic) _Bool showLogo;
@property(readonly) Class superclass;

@end

