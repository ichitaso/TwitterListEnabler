//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1AltTextInputViewDelegate-Protocol.h>
#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString, T1AltTextInputView, TFNAttributedTextView, TFNFormFieldCounterView, TFNFormFieldErrorView, TFNTwitterAccount, TFNTwitterMediaAssetImage, UIImage, UIImageView, UIScrollView;
@protocol T1AltTextViewControllerDelegate;

@interface T1AltTextViewController : TFNViewController <T1AltTextInputViewDelegate, TFNAttributedTextViewDelegate>
{
    _Bool _shouldShowErrorView;
    _Bool _isCounterEnabled;
    _Bool _ubiquitousAltTextEnabled;
    id <T1AltTextViewControllerDelegate> _delegate;
    TFNTwitterMediaAssetImage *_imageAsset;
    UIImage *_previewImage;
    UIScrollView *_scrollView;
    T1AltTextInputView *_textView;
    UIImageView *_imageView;
    TFNFormFieldErrorView *_errorView;
    TFNFormFieldCounterView *_counterView;
    TFNAttributedTextView *_educationTextView;
    double _keyboardHeight;
    TFNTwitterAccount *_account;
    NSString *_initialAltText;
}

@property(retain, nonatomic) NSString *initialAltText; // @synthesize initialAltText=_initialAltText;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic, getter=isUbiquitousAltTextEnabled) _Bool ubiquitousAltTextEnabled; // @synthesize ubiquitousAltTextEnabled=_ubiquitousAltTextEnabled;
@property(nonatomic) _Bool isCounterEnabled; // @synthesize isCounterEnabled=_isCounterEnabled;
@property(nonatomic) _Bool shouldShowErrorView; // @synthesize shouldShowErrorView=_shouldShowErrorView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) TFNAttributedTextView *educationTextView; // @synthesize educationTextView=_educationTextView;
@property(retain, nonatomic) TFNFormFieldCounterView *counterView; // @synthesize counterView=_counterView;
@property(retain, nonatomic) TFNFormFieldErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) T1AltTextInputView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) TFNTwitterMediaAssetImage *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(nonatomic) __weak id <T1AltTextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)_t1_keyboardChangedVisibility:(id)arg1;
- (void)_t1_didTapImage:(id)arg1;
- (void)_t1_didTapApply:(id)arg1;
- (void)_t1_didTapCancel:(id)arg1;
- (void)_t1_scrollTextViewToVisible;
- (void)_t1_initializeSubviews;
- (void)altTextInputViewDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_t1_altTextViewController_initialize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccount:(id)arg1 imageAsset:(id)arg2;
- (id)initWithAccount:(id)arg1 previewImage:(id)arg2 initialAltText:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

