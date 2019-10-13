//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1AddPhoneNumberDelegate-Protocol.h>
#import <T1Twitter/T1SettingsAccountInitializable-Protocol.h>
#import <T1Twitter/T1SettingsAuthorizationInstructionsAdapterDelegate-Protocol.h>

@class NSString, TFNBooleanItem, TFNTwitterAccount;

@interface T1SecuritySettings2FAViewController : TFNItemsDataViewController <T1SettingsAuthorizationInstructionsAdapterDelegate, T1AddPhoneNumberDelegate, T1SettingsAccountInitializable>
{
    _Bool _isSMS2faEnabled;
    _Bool _isTOTPGeneratorEnabled;
    _Bool _hasFetchedAuthorizationStatus;
    CDUnknownBlockType _didUpdatePhoneNumberCallback;
    TFNTwitterAccount *_account;
    TFNBooleanItem *_loginVerificationEnabledItem;
    long long _authorizationStatus;
}

@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) _Bool hasFetchedAuthorizationStatus; // @synthesize hasFetchedAuthorizationStatus=_hasFetchedAuthorizationStatus;
@property(retain, nonatomic) TFNBooleanItem *loginVerificationEnabledItem; // @synthesize loginVerificationEnabledItem=_loginVerificationEnabledItem;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType didUpdatePhoneNumberCallback; // @synthesize didUpdatePhoneNumberCallback=_didUpdatePhoneNumberCallback;
- (void).cxx_destruct;
- (void)authorizationInstructionsAdapterDidOpenSettings:(id)arg1;
- (void)didCompleteAddPhoneNumberFlow:(id)arg1 phoneNumber:(id)arg2 updatePhone:(_Bool)arg3;
- (void)didSkipAddPhoneNumberFlow:(id)arg1;
- (void)_t1_show_network_error;
- (id)_t1_alertAddPhoneErrorActionWithTitle:(id)arg1;
- (id)_t1_alertOpenURLActionWithTitle:(id)arg1 url:(id)arg2 dismissible:(_Bool)arg3;
- (id)_t1_alertDismissActionWithTitle:(id)arg1 dismissible:(_Bool)arg2;
- (void)_t1_showAlertForError:(id)arg1 dismissWhenCancel:(_Bool)arg2;
- (void)_t1_promptToModifyLoginVerification:(id)arg1;
- (void)_t1_promptToUnenrollLoginVerificationAfterRemovingMethodWithType:(unsigned long long)arg1 view:(id)arg2;
- (void)_t1_unenrollLoginVerification;
- (void)_t1_enrollLoginVerification;
- (void)_t1_changeLoginVerificationMethodStatusWithEnabled:(_Bool)arg1 methodType:(unsigned long long)arg2 method:(id)arg3;
- (void)_t1_changeLoginVerificationEnrollmentStatus;
- (void)_scribeRateLimitForError:(id)arg1 withComponent:(id)arg2;
- (void)_t1_scribeLoginVerification:(id)arg1 withElement:(id)arg2;
- (void)_t1_scribeModifyLoginVerification;
- (void)_t1_scribeResultForEnroll:(_Bool)arg1 withSuccess:(_Bool)arg2 forStep:(long long)arg3;
- (_Bool)_t1_showLoginVerificationEnabled;
- (id)_t1_notificationInstructionsHeaderItem;
- (id)_t1_notificationInstructionsItem;
- (id)_t1_descriptionItem;
- (id)_t1_viewLoginRequestsItem;
- (id)_t1_totpCodeGeneratorItem;
- (id)_t1_temporaryPasswordItem;
- (id)_t1_generatePasscodeItem;
- (id)_t1_loginVerificationMethodItemsDescriptionForType:(unsigned long long)arg1;
- (id)_t1_loginVerificationMethodItemsTitleForType:(unsigned long long)arg1;
- (void)_t1_populateLoginVerificationMethodItemsIntoSection:(id)arg1 methodType:(unsigned long long)arg2;
- (id)_t1_loginVerificationItemWithValue:(_Bool)arg1;
- (id)_t1_loginVerificationAdditionalMethodsSection;
- (id)_t1_loginVerificationMethodsSection;
- (id)_t1_loginVerificationToggleSection:(_Bool)arg1;
- (void)_t1_updateSectionsShowing2faWithoutPhone;
- (void)_t1_updateSectionsShowing2faWithPhone;
- (void)_t1_legacy_updateSections;
- (void)_t1_updateSections;
- (void)_scribeWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_t1_updateLoginVerificationStatus;
- (void)_t1_refresh;
- (void)applicationWillEnterForegroundFromBackground:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

