//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNForm.h>

@class NSArray, NSString, TFNDataViewItem, TFNPeopleDiscoveryShowMore;
@protocol T1OnboardingHeaderViewModel, T1OnboardingSettingsListFormDelegate, T1OnboardingSettingsValueViewModel;

@interface T1OnboardingSettingsListForm : TFNForm
{
    id <T1OnboardingSettingsListFormDelegate> _delegate;
    id <T1OnboardingHeaderViewModel> _headerViewModel;
    NSArray<T1OnboardingSettingsValueViewModel> *_settingsViewModels;
    NSArray *_settingsSections;
    NSArray *_detailEntities;
    long long _numberOfSettingsToShow;
    NSString *_detailText;
    TFNDataViewItem *_detailTextItem;
    TFNDataViewItem *_showMoreItem;
    TFNPeopleDiscoveryShowMore *_showMore;
}

- (void).cxx_destruct;
- (id)private_dataViewItemForShowMoreText:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)private_dataViewItemForDetailText:(id)arg1 detailEntities:(id)arg2 navigationLinkActionBlock:(CDUnknownBlockType)arg3;
- (void)private_generateSettingsSectionsWithSettingsViewModels:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSectionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerViewAdaptersForViewController:(id)arg1;
- (id)sections;
- (id)initWithAccount:(id)arg1 mutableSettings:(id)arg2 headerViewModel:(id)arg3 detailText:(id)arg4 detailEntities:(id)arg5 showMore:(id)arg6 shouldDisplayCellBorders:(_Bool)arg7 delegate:(id)arg8;

@end

