//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

@protocol T1VideoMonetizationSettingsViewControllerDelegate;

@interface T1VideoMonetizationSettingsViewController : TFNItemsDataViewController
{
    // Error parsing type: , name: monetizationEnabled
    // Error parsing type: , name: allMonetizationCategories
    // Error parsing type: , name: allAdsCategories
    // Error parsing type: , name: pickedMonetizationCategories
    // Error parsing type: , name: excludedMonetizationCategories
    // Error parsing type: , name: pickedAdsCategories
    // Error parsing type: , name: excludedAdsCategories
    // Error parsing type: , name: pendingInitialExcludedUserReferences
    // Error parsing type: , name: excludedUserReferences
    // Error parsing type: , name: maxAllowedCategories
    // Error parsing type: , name: originalSettings
    // Error parsing type: , name: account
    // Error parsing type: , name: doneButton
    // Error parsing type: , name: currentSubRoute
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)pickerViewController:(id)arg1 didDeselectValue:(id)arg2 inSectionAtIndex:(unsigned long long)arg3 willConfirm:(_Bool)arg4 willDismiss:(_Bool)arg5;
- (void)pickerViewController:(id)arg1 didPickValue:(id)arg2 inSectionAtIndex:(unsigned long long)arg3 willConfirm:(_Bool)arg4 willDismiss:(_Bool)arg5;
- (id)initiallyPickedValuesForPicker:(id)arg1;
- (id)valuesForPicker:(id)arg1;
- (void)didTapDoneButton;
- (void)update:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVideoMonetizationSettings:(id)arg1 account:(id)arg2;
@property(nonatomic, retain) id <T1VideoMonetizationSettingsViewControllerDelegate> delegate; // @synthesize delegate;

@end

