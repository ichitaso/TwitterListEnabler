//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNPickerViewController.h>

#import <T1Twitter/T1AccountAdder-Protocol.h>
#import <T1Twitter/T1AccountChooser-Protocol.h>
#import <T1Twitter/T1AccountListEntryBadgingDataSource-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerLayoutDelegate-Protocol.h>
#import <T1Twitter/TFNPickerViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNValuePickerDataSource-Protocol.h>

@class NSArray, NSDictionary, NSMutableSet, NSString, T1AccountListEntry, T1AccountsViewControllerKeepAliveCallbacks, T1PickableAccountEntryAdapter, TFNTwitterAccount;

@interface T1AccountsViewController : TFNPickerViewController <TFNPickerViewControllerDelegate, TFNValuePickerDataSource, TFNLayoutMetricsEnvironment, T1AccountListEntryBadgingDataSource, T1AccountAdder, T1AccountChooser, TFNModalSheetViewControllerLayoutDelegate>
{
    _Bool _editing;
    _Bool _compactStyle;
    _Bool _includeTeamsAccount;
    TFNTwitterAccount *_currentAccount;
    CDUnknownBlockType _didChooseAccountBlock;
    NSString *_referringScribeComponent;
    TFNTwitterAccount *_account;
    NSArray *_accountEntries;
    T1AccountListEntry *_currentEntry;
    NSMutableSet *_expandedOwnerAccountIDs;
    T1PickableAccountEntryAdapter *_adapter;
    T1AccountsViewControllerKeepAliveCallbacks *_keepAliveCallbacks;
    NSDictionary *_badgeCountForUserID;
}

+ (_Bool)isShowing;
@property(retain, nonatomic) NSDictionary *badgeCountForUserID; // @synthesize badgeCountForUserID=_badgeCountForUserID;
@property(retain, nonatomic) T1AccountsViewControllerKeepAliveCallbacks *keepAliveCallbacks; // @synthesize keepAliveCallbacks=_keepAliveCallbacks;
@property(readonly, nonatomic) T1PickableAccountEntryAdapter *adapter; // @synthesize adapter=_adapter;
@property(nonatomic) _Bool includeTeamsAccount; // @synthesize includeTeamsAccount=_includeTeamsAccount;
@property(nonatomic) _Bool compactStyle; // @synthesize compactStyle=_compactStyle;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSMutableSet *expandedOwnerAccountIDs; // @synthesize expandedOwnerAccountIDs=_expandedOwnerAccountIDs;
@property(retain, nonatomic) T1AccountListEntry *currentEntry; // @synthesize currentEntry=_currentEntry;
@property(retain, nonatomic) NSArray *accountEntries; // @synthesize accountEntries=_accountEntries;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *referringScribeComponent; // @synthesize referringScribeComponent=_referringScribeComponent;
@property(copy, nonatomic) CDUnknownBlockType didChooseAccountBlock; // @synthesize didChooseAccountBlock=_didChooseAccountBlock;
@property(retain, nonatomic) TFNTwitterAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
- (void).cxx_destruct;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)showMoreValuesMessageForPicker:(id)arg1;
- (id)addValueMessagesForPicker:(id)arg1;
- (id)initiallyPickedValueForPicker:(id)arg1;
- (id)valuesForPicker:(id)arg1;
- (void)pickerViewControllerWillShowMoreValues:(id)arg1;
- (void)pickerViewController:(id)arg1 didReorderValue:(id)arg2 fromPosition:(unsigned long long)arg3 toPosition:(unsigned long long)arg4 inSectionAtIndex:(unsigned long long)arg5;
- (_Bool)pickerViewController:(id)arg1 shouldRemoveValue:(id)arg2 fromSectionAtIndex:(unsigned long long)arg3;
- (void)pickerViewController:(id)arg1 willAddValueToSectionAtIndex:(unsigned long long)arg2 withAddValueMessage:(id)arg3 index:(unsigned long long)arg4 sender:(id)arg5;
- (void)pickerViewController:(id)arg1 didConfirmWithSections:(id)arg2;
- (void)pickerViewControllerDidCancel:(id)arg1;
- (void)pickerViewController:(id)arg1 didPickValue:(id)arg2 inSectionAtIndex:(unsigned long long)arg3 willConfirm:(_Bool)arg4 willDismiss:(_Bool)arg5;
- (double)preferredHeightForModalSheetViewController:(id)arg1 modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets)arg2;
- (id)populateItemsWithMessages:(id)arg1 items:(id)arg2 sectionIndex:(unsigned long long)arg3;
- (double)maxContentHeight;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType didAddAccountBlock;
- (void)moveItem:(id)arg1 atIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)titleForDeleteConfirmationButtonForItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_showTeamsAccountForAccountID:(id)arg1;
- (id)_showAccountSeparator;
- (id)_showMultiAccountHelperText;
- (id)_showTeamsAccountMessageForAccountID:(id)arg1;
- (id)_filterTeamsAccount:(id)arg1;
- (void)private_startSignUpFlow;
- (unsigned long long)badgeCountForEntry:(id)arg1;
- (void)t1_accountBadgingDidChange:(id)arg1;
- (void)_addAccount:(_Bool)arg1 sender:(id)arg2;
- (void)_chooseAccount:(id)arg1;
- (void)_pickAccountEntry:(id)arg1 willDismiss:(_Bool)arg2;
- (void)_accountsDidChange;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateAccountEntries:(_Bool)arg1;
- (void)_updateButtons;
- (void)_update;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithAccount:(id)arg1 editable:(_Bool)arg2 includeTeamsAccount:(_Bool)arg3;
- (id)initWithAccount:(id)arg1 editable:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

