//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class T1URTViewController, TFNTwitterAccount;

@interface T1TrendsLandingViewController : TFNViewController
{
    TFNTwitterAccount *_account;
    T1URTViewController *_trendsURTChildViewController;
}

@property(retain, nonatomic) T1URTViewController *trendsURTChildViewController; // @synthesize trendsURTChildViewController=_trendsURTChildViewController;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)_showSettings:(id)arg1;
- (id)_settingsButton;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)_t1_accountSettingsUpdated:(id)arg1;
- (id)tfn_contentScrollView;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

