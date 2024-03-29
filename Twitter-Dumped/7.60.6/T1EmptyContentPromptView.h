//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1PromptView-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsSizing-Protocol.h>

@class NSArray, NSString, T1PromptButtonSpec, T1PromptImageSpec, T1PromptTextSpec, TFNAttributedTextView, UIButton, UIImage;

@interface T1EmptyContentPromptView : UIView <TFNLayoutMetricsSizing, T1PromptView>
{
    T1PromptTextSpec *_primaryTextSpec;
    TFNAttributedTextView *_primaryTextView;
    T1PromptTextSpec *_secondaryTextSpec;
    TFNAttributedTextView *_secondaryTextView;
    T1PromptButtonSpec *_buttonSpec;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) T1PromptButtonSpec *buttonSpec; // @synthesize buttonSpec=_buttonSpec;
@property(retain, nonatomic) TFNAttributedTextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *secondaryTextSpec; // @synthesize secondaryTextSpec=_secondaryTextSpec;
@property(retain, nonatomic) TFNAttributedTextView *primaryTextView; // @synthesize primaryTextView=_primaryTextView;
@property(retain, nonatomic) T1PromptTextSpec *primaryTextSpec; // @synthesize primaryTextSpec=_primaryTextSpec;
- (void).cxx_destruct;
- (struct CGSize)sizeWithLayoutMetrics:(id)arg1;
- (id)accessibilityElements;
- (double)private_layoutWithMetrics:(id)arg1 atWidth:(double)arg2 apply:(_Bool)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) NSArray *buttonSpecs;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long buttonLayout;
@property(readonly, nonatomic) NSArray *buttons;
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

