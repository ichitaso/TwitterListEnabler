//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1SettingsAccountInitializable-Protocol.h>

@class NSString, TFNBooleanItem, TFNTwitterAccount;

@interface T1SecuritySettingsViewController : TFNItemsDataViewController <T1SettingsAccountInitializable>
{
    CDUnknownBlockType _didUpdatePhoneNumberCallback;
    TFNTwitterAccount *_account;
    TFNBooleanItem *_passwordResetProtectEnabledItem;
}

@property(retain, nonatomic) TFNBooleanItem *passwordResetProtectEnabledItem; // @synthesize passwordResetProtectEnabledItem=_passwordResetProtectEnabledItem;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType didUpdatePhoneNumberCallback; // @synthesize didUpdatePhoneNumberCallback=_didUpdatePhoneNumberCallback;
- (void).cxx_destruct;
- (void)_t1_passwordResetProtectPromptForUpdate:(_Bool)arg1;
- (id)_t1_passwordResetProtectItemWithValue:(_Bool)arg1;
- (id)_t1_passwordSecuritySection:(_Bool)arg1;
- (id)_t1_security2FASection;
- (void)_t1_updateSections;
- (void)_t1_refresh;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

