//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@class TFNTwitterAccount;

@interface T1DirectMessageSettingsViewController : TFNItemsDataViewController
{
    // Error parsing type: , name: account
    // Error parsing type: , name: queue
    // Error parsing type: , name: viewModel
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)accountSettingsDidUpdate:(id)arg1;
- (void)update:(_Bool)arg1;
- (id)scribePage;
- (void)viewWillFullyDisappear:(_Bool)arg1;
- (void)viewWillFullyAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;
@property(nonatomic, readonly) TFNTwitterAccount *account; // @synthesize account;

@end

