//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>
#import <T1Twitter/T1VerifyPhoneNumberDelegateProtocol-Protocol.h>

@class NSString, TFNTwitterAccount;

@interface T1VerifyPhoneNumberDelegate : NSObject <T1VerifyPhoneNumberDelegateProtocol, T1TwitterAuthenticated>
{
    _Bool _implicitSMSOptInAllowed;
    TFNTwitterAccount *_account;
    CDUnknownBlockType _navigationCompletion;
    NSString *_scribePage;
    CDUnknownBlockType _phoneVerificationCompletion;
    unsigned long long _mode;
    NSString *_suppressRestartToken;
}

@property(copy, nonatomic) NSString *suppressRestartToken; // @synthesize suppressRestartToken=_suppressRestartToken;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) CDUnknownBlockType phoneVerificationCompletion; // @synthesize phoneVerificationCompletion=_phoneVerificationCompletion;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(nonatomic) _Bool implicitSMSOptInAllowed; // @synthesize implicitSMSOptInAllowed=_implicitSMSOptInAllowed;
@property(copy, nonatomic) CDUnknownBlockType navigationCompletion; // @synthesize navigationCompletion=_navigationCompletion;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_resendFailure:(id)arg1 sender:(id)arg2;
- (void)_resendSuccessAndHideHUD:(id)arg1;
- (void)_resendSMS:(id)arg1 sender:(id)arg2;
- (void)verifyPhoneNumberViewController:(id)arg1 didTapResendSender:(id)arg2;
- (void)verifyPhoneNumberViewController:(id)arg1 verifyPhoneNumberWithForm:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

