//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/T1OnboardingWaitable-Protocol.h>
#import <T1Twitter/T1VerifyPINFormDelegate-Protocol.h>
#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSDate, NSString, NSTimer, T1VerifyPINForm, TFNActivityIndicatorButton, TFNAttributedTextView;
@protocol T1EnterVerificationCodeViewControllerDelegate;

@interface T1EnterVerificationCodeViewController : TFNFormViewController <TFNAttributedTextViewDelegate, T1VerifyPINFormDelegate, T1OnboardingWaitable>
{
    id _headerItem;
    T1VerifyPINForm *_form;
    TFNActivityIndicatorButton *_verifyButton;
    TFNAttributedTextView *_detailTextView;
    NSTimer *_currentTimer;
    NSDate *_timerStartDate;
    _Bool _viewVisible;
    _Bool _appInBackground;
    id <T1EnterVerificationCodeViewControllerDelegate> _delegate;
}

@property(nonatomic, getter=isAppInBackground) _Bool appInBackground; // @synthesize appInBackground=_appInBackground;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic) __weak id <T1EnterVerificationCodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)verifyPINFormShouldSubmit:(id)arg1;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (void)applicationWillEnterForegroundFromBackground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (_Bool)tfn_logoTitleViewShown;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)submitForm;
- (_Bool)includesSubmitButtonAsItem;
- (id)submitButton;
- (void)setSections:(id)arg1;
- (_Bool)addsDoneBarButtonButtonItemToNavigationBar;
- (void)updateWithCode:(id)arg1;
- (void)private_updatePollingTimer;
- (void)private_updateTimerStartDate;
- (_Bool)private_isPollingTimerRunning;
- (double)private_maxTimeoutInterval;
- (double)private_pollingTimeInterval;
- (_Bool)private_shouldStartPollingTimer;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 codeHint:(id)arg3 verifyButtonTitle:(id)arg4 detailText:(id)arg5 activeRanges:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

