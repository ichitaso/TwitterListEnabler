//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1SecurityTemporaryPasswordViewDelegate-Protocol.h>

@class NSString, T1SecurityTemporaryPasswordView, TFNTwitterAccount;

@interface T1SecurityTemporaryPasswordViewController : TFNViewController <T1SecurityTemporaryPasswordViewDelegate>
{
    TFNTwitterAccount *_account;
    T1SecurityTemporaryPasswordView *_passwordView;
}

@property(retain, nonatomic) T1SecurityTemporaryPasswordView *passwordView; // @synthesize passwordView=_passwordView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_generateTemporaryPassword;
- (void)_copyToClipboard:(id)arg1;
- (void)temporaryPasswordView:(id)arg1 didTapTemporaryPasswordLabel:(id)arg2;
- (void)temporaryPasswordView:(id)arg1 didTapGenerateButton:(id)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

