//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class TFNAuthorizationManagerSystemSettingsHelper, TFNBooleanItem, TFNTwitterAccount;

@interface T1LocationSettingsViewController : TFNItemsDataViewController
{
    TFNTwitterAccount *_account;
    TFNAuthorizationManagerSystemSettingsHelper *_settingsHelper;
    long long _inAppStatus;
    long long _systemStatus;
    TFNBooleanItem *_inAppItem;
    id _systemItem;
    id _systemItemWithSettingsLink;
}

@property(retain, nonatomic) id systemItemWithSettingsLink; // @synthesize systemItemWithSettingsLink=_systemItemWithSettingsLink;
@property(retain, nonatomic) id systemItem; // @synthesize systemItem=_systemItem;
@property(retain, nonatomic) TFNBooleanItem *inAppItem; // @synthesize inAppItem=_inAppItem;
@property(nonatomic) long long systemStatus; // @synthesize systemStatus=_systemStatus;
@property(nonatomic) long long inAppStatus; // @synthesize inAppStatus=_inAppStatus;
@property(retain, nonatomic) TFNAuthorizationManagerSystemSettingsHelper *settingsHelper; // @synthesize settingsHelper=_settingsHelper;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_setPreciseLocationEnabled:(_Bool)arg1;
- (void)_t1_refreshIfNecessary;
- (void)update:(_Bool)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;

@end

