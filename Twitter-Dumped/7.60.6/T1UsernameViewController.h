//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString, T1ChangeUsernameForm, TFNAttributedTextView, TFNDataViewItem, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1UsernameViewControllerDelegate;

@interface T1UsernameViewController : TFNFormViewController <TFNAttributedTextViewDelegate>
{
    TFSTwitterScribeContext *_scribeContext;
    _Bool _isPresentingChangeUsernameAlert;
    _Bool _shouldShowLogoTitleView;
    id <T1UsernameViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    T1ChangeUsernameForm *_changeUsernameForm;
    TFNDataViewItem *_headerItem;
    NSString *_submitButtonTitle;
    NSString *_nextLinkLabel;
    NSString *_skipLinkLabel;
    TFNAttributedTextView *_detailTextView;
    long long _options;
}

@property(nonatomic) _Bool shouldShowLogoTitleView; // @synthesize shouldShowLogoTitleView=_shouldShowLogoTitleView;
@property(nonatomic) _Bool isPresentingChangeUsernameAlert; // @synthesize isPresentingChangeUsernameAlert=_isPresentingChangeUsernameAlert;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(copy, nonatomic) TFNAttributedTextView *detailTextView; // @synthesize detailTextView=_detailTextView;
@property(copy, nonatomic) NSString *skipLinkLabel; // @synthesize skipLinkLabel=_skipLinkLabel;
@property(copy, nonatomic) NSString *nextLinkLabel; // @synthesize nextLinkLabel=_nextLinkLabel;
@property(copy, nonatomic) NSString *submitButtonTitle; // @synthesize submitButtonTitle=_submitButtonTitle;
@property(copy, nonatomic) TFNDataViewItem *headerItem; // @synthesize headerItem=_headerItem;
@property(copy, nonatomic) T1ChangeUsernameForm *changeUsernameForm; // @synthesize changeUsernameForm=_changeUsernameForm;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1UsernameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tfn_keyboardDismissModalAction;
- (_Bool)tfn_canKeyboardDismissModal;
- (id)scribeAssociations;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribeContext;
- (id)scribe;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)changeUsernameForm:(id)arg1 didChangeAvailability:(id)arg2;
- (void)changeUsernameForm:(id)arg1 didTapSuggestion:(id)arg2;
- (void)setSections:(id)arg1;
- (void)didTapSuggestionAction:(id)arg1;
- (void)cancelAction;
- (void)submitForm;
- (void)formFieldDidBeginEditingUserInput:(id)arg1 withStopEditingAction:(CDUnknownBlockType)arg2;
- (id)doneBarButtonItem;
- (_Bool)addsDoneBarButtonButtonItemToNavigationBar;
- (_Bool)includesSubmitButtonAsItem;
- (unsigned long long)inputRequiredBehavior;
- (void)_t1_skipTapped:(id)arg1;
- (void)_t1_nextTapped:(id)arg1;
- (id)_t1_toolbarItemsWithNextLabel:(id)arg1 skipLabel:(id)arg2;
- (_Bool)_t1_presentChangeUsernameAlertWithAcceptAction:(CDUnknownBlockType)arg1;
- (void)_t1_lookupSuggestions;
- (_Bool)_t1_isUsernameUnchanged;
- (long long)_t1_formOptionsForOptions:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *username;
- (void)setDetailText:(id)arg1 activeRanges:(id)arg2;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_logoTitleViewShown;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 prefillUsername:(id)arg2 title:(id)arg3 subtitle:(id)arg4 submitButtonTitle:(id)arg5 nextLinkLabel:(id)arg6 skipLinkLabel:(id)arg7 detailText:(id)arg8 activeRanges:(id)arg9 options:(long long)arg10 shouldShowLogoTitleView:(_Bool)arg11 showsCancelButton:(_Bool)arg12 scribeContext:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

