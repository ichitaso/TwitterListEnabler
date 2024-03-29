//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1SettingsAccountInitializable-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>

@class NSString, T1StatusTableRowAdapter, TFNBarButtonItem, TFNBooleanItem, TFNDataViewItem, TFNTwitterAccount;

@interface T1DisplayAndSoundSettingsViewController : TFNItemsDataViewController <T1SettingsAccountInitializable, TFNModalSheetViewControllerDelegate, TFNModalSheetViewControllerLayoutDelegate>
{
    _Bool _onlyShowDarkModeSettings;
    TFNTwitterAccount *_account;
    T1StatusTableRowAdapter *_statusAdapter;
    TFNBooleanItem *_darkModeItem;
    TFNBooleanItem *_lighterItem;
    TFNBooleanItem *_darkerItem;
    TFNDataViewItem *_darkModeSettingsItem;
    TFNDataViewItem *_onItem;
    TFNDataViewItem *_offItem;
    TFNBarButtonItem *_closeButton;
}

@property(readonly, nonatomic) TFNBarButtonItem *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) _Bool onlyShowDarkModeSettings; // @synthesize onlyShowDarkModeSettings=_onlyShowDarkModeSettings;
@property(retain, nonatomic) TFNDataViewItem *offItem; // @synthesize offItem=_offItem;
@property(retain, nonatomic) TFNDataViewItem *onItem; // @synthesize onItem=_onItem;
@property(retain, nonatomic) TFNDataViewItem *darkModeSettingsItem; // @synthesize darkModeSettingsItem=_darkModeSettingsItem;
@property(retain, nonatomic) TFNBooleanItem *darkerItem; // @synthesize darkerItem=_darkerItem;
@property(retain, nonatomic) TFNBooleanItem *lighterItem; // @synthesize lighterItem=_lighterItem;
@property(retain, nonatomic) TFNBooleanItem *darkModeItem; // @synthesize darkModeItem=_darkModeItem;
@property(retain, nonatomic) T1StatusTableRowAdapter *statusAdapter; // @synthesize statusAdapter=_statusAdapter;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)modalSheetViewController:(id)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)_t1_userDefaultsDidChange;
- (void)_t1_updateDarkModeSettingsItem;
- (void)_t1_addDarkModeItemsToArray:(id)arg1;
- (void)_t1_addInlineDarkModeItemsToArray:(id)arg1;
- (void)_t1_insertOrDeleteLighterDarkerItems;
- (void)_t1_addAutomaticDarkModeItemsToArray:(id)arg1;
- (void)_t1_addImagePreviewsItemToArray:(id)arg1;
- (void)_t1_addSFVCSectionToArray:(id)arg1;
- (void)_t1_addSettingsSectionToArray:(id)arg1;
- (void)_t1_addStatusAndTextSizeSliderSectionsToArray:(id)arg1;
- (void)dataViewDidUpdate:(_Bool)arg1;
- (void)update:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 onlyShowDarkModeSettings:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

