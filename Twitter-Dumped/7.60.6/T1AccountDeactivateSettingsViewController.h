//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class TFNTwitterAccount;

@interface T1AccountDeactivateSettingsViewController : TFNItemsDataViewController
{
    TFNTwitterAccount *_account;
    unsigned long long _timespan;
}

@property(nonatomic) unsigned long long timespan; // @synthesize timespan=_timespan;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_presentDataRetentionModeActionSheetWithSource:(id)arg1;
- (void)_t1_presentPasswordConfirmationController;
- (id)_t1_displayStringForTimespan;
- (void)update:(_Bool)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

