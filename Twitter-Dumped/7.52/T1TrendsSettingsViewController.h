//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1TrendsLocationPickerViewControllerDelegate-Protocol.h>

@class NSString, TFNBooleanItem, TFNTwitterAccount;

@interface T1TrendsSettingsViewController : TFNItemsDataViewController <T1TrendsLocationPickerViewControllerDelegate>
{
    TFNTwitterAccount *_account;
    TFNBooleanItem *_personalizedTrendsItem;
}

@property(retain, nonatomic) TFNBooleanItem *personalizedTrendsItem; // @synthesize personalizedTrendsItem=_personalizedTrendsItem;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)presentLocationPicker;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)_didTapLocation:(id)arg1;
- (void)_dismiss;
- (void)_didTapDoneButton:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)trendsLocationPickerViewController:(id)arg1 didSelectLocation:(id)arg2;
- (void)tfn_keyboardDismissModalAction;
- (_Bool)tfn_canKeyboardDismissModal;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

