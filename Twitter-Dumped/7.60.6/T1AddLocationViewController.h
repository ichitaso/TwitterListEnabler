//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1OnboardingSearchViewDelegate-Protocol.h>
#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSArray, NSString, T1OnboardingHeaderViewModel, T1OnboardingSearchView, TFNBarButtonItem, TFNTwitterAccount, TFNTwitterProfilePlaceStore;
@protocol T1AddLocationViewControllerDelegate;

@interface T1AddLocationViewController : TFNItemsDataViewController <T1OnboardingSearchViewDelegate, TFNLayoutMetricsEnvironment, T1TwitterAuthenticated>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_hintText;
    NSString *_defaultText;
    NSString *_defaultPlaceID;
    NSString *_nextLabel;
    NSString *_skipLabel;
    long long _maxLength;
    _Bool _headerVisible;
    TFNTwitterAccount *_account;
    T1OnboardingHeaderViewModel *_headerItem;
    T1OnboardingSearchView *_searchView;
    TFNTwitterProfilePlaceStore *_placeStore;
    NSArray *_placeMatches;
    id _selectedPlace;
    TFNBarButtonItem *_nextBarButtonItem;
    id <T1AddLocationViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <T1AddLocationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNBarButtonItem *nextBarButtonItem; // @synthesize nextBarButtonItem=_nextBarButtonItem;
@property(retain, nonatomic) id selectedPlace; // @synthesize selectedPlace=_selectedPlace;
@property(retain, nonatomic) NSArray *placeMatches; // @synthesize placeMatches=_placeMatches;
@property(retain, nonatomic) TFNTwitterProfilePlaceStore *placeStore; // @synthesize placeStore=_placeStore;
@property(retain, nonatomic) T1OnboardingSearchView *searchView; // @synthesize searchView=_searchView;
@property(nonatomic) _Bool headerVisible; // @synthesize headerVisible=_headerVisible;
@property(retain, nonatomic) T1OnboardingHeaderViewModel *headerItem; // @synthesize headerItem=_headerItem;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribePage;
- (void)_nextTapped;
- (void)_skipTapped;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)searchViewDidEndEditing:(id)arg1;
- (void)searchView:(id)arg1 didReturn:(id)arg2;
- (void)searchView:(id)arg1 didChangeText:(id)arg2;
- (void)searchViewDidStartEditing:(id)arg1;
- (void)_hideHeaderViewAnimated:(_Bool)arg1;
- (void)_showHeaderViewAnimated:(_Bool)arg1;
- (struct UIEdgeInsets)private_searchViewContentEdgeInsets:(id)arg1;
- (void)_updateNextButton;
- (void)_updateWithSearch:(id)arg1;
- (void)_updateSections;
- (void)_placesDidUpdate:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)tfn_logoTitleViewShown;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (long long)tfn_preferredToolbarVisibility;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2 title:(id)arg3 subtitle:(id)arg4 hintText:(id)arg5 defaultText:(id)arg6 defaultPlaceID:(id)arg7 nextLabel:(id)arg8 skipLabel:(id)arg9 maxLength:(long long)arg10;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

