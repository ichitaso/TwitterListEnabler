//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

#import <T1Twitter/T1UserViewDelegate-Protocol.h>

@class NSString, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterScribeContext;
@protocol T1UserOrRecommendationTableRowAdapterDelegate, T1UserViewActionControlProvider, TFNTwitterScribeImpressionCache;

@interface T1UserOrRecommendationTableRowAdapter : TFNItemsTableRowAdapter <T1UserViewDelegate>
{
    _Bool _showFollowControl;
    _Bool _showFollowsYou;
    _Bool _showCheckmark;
    _Bool _showMuteBadge;
    _Bool _showUnblocked;
    _Bool _showUnmuted;
    _Bool _confirmBlock;
    _Bool _showSocialBadge;
    _Bool _showAdminTextLabel;
    _Bool _showCaret;
    _Bool _showUserBlocked;
    _Bool _disableAvatarLongPress;
    _Bool _disableCellSelection;
    _Bool _enableAvatarSelection;
    _Bool _enableDisplayInModal;
    _Bool _enableUserInfoSelection;
    _Bool _scribeLingers;
    TFNTwitterAccount *_account;
    long long _cellStyle;
    id <T1UserOrRecommendationTableRowAdapterDelegate> _delegate;
    id <T1UserViewActionControlProvider> _actionControlProvider;
    unsigned long long _followControlType;
    unsigned long long _followControlVariant;
    unsigned long long _actionSheetOptions;
    unsigned long long _bioInclusionMode;
    TFNTwitterStatus *_sourceStatus;
    TFSTwitterScribeContext *_scribeContext;
    id <TFNTwitterScribeImpressionCache> _scribeImpressionCache;
}

@property(retain, nonatomic) id <TFNTwitterScribeImpressionCache> scribeImpressionCache; // @synthesize scribeImpressionCache=_scribeImpressionCache;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic) _Bool scribeLingers; // @synthesize scribeLingers=_scribeLingers;
@property(retain, nonatomic) TFNTwitterStatus *sourceStatus; // @synthesize sourceStatus=_sourceStatus;
@property(nonatomic) _Bool enableUserInfoSelection; // @synthesize enableUserInfoSelection=_enableUserInfoSelection;
@property(nonatomic) _Bool enableDisplayInModal; // @synthesize enableDisplayInModal=_enableDisplayInModal;
@property(nonatomic) _Bool enableAvatarSelection; // @synthesize enableAvatarSelection=_enableAvatarSelection;
@property(nonatomic) _Bool disableCellSelection; // @synthesize disableCellSelection=_disableCellSelection;
@property(nonatomic) _Bool disableAvatarLongPress; // @synthesize disableAvatarLongPress=_disableAvatarLongPress;
@property(nonatomic) unsigned long long bioInclusionMode; // @synthesize bioInclusionMode=_bioInclusionMode;
@property(nonatomic) _Bool showUserBlocked; // @synthesize showUserBlocked=_showUserBlocked;
@property(nonatomic) _Bool showCaret; // @synthesize showCaret=_showCaret;
@property(nonatomic) _Bool showAdminTextLabel; // @synthesize showAdminTextLabel=_showAdminTextLabel;
@property(nonatomic) _Bool showSocialBadge; // @synthesize showSocialBadge=_showSocialBadge;
@property(nonatomic) _Bool confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(nonatomic) _Bool showUnmuted; // @synthesize showUnmuted=_showUnmuted;
@property(nonatomic) _Bool showUnblocked; // @synthesize showUnblocked=_showUnblocked;
@property(nonatomic) _Bool showMuteBadge; // @synthesize showMuteBadge=_showMuteBadge;
@property(nonatomic) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(nonatomic) _Bool showFollowsYou; // @synthesize showFollowsYou=_showFollowsYou;
@property(nonatomic) _Bool showFollowControl; // @synthesize showFollowControl=_showFollowControl;
@property(nonatomic) unsigned long long actionSheetOptions; // @synthesize actionSheetOptions=_actionSheetOptions;
@property(nonatomic) unsigned long long followControlVariant; // @synthesize followControlVariant=_followControlVariant;
@property(nonatomic) unsigned long long followControlType; // @synthesize followControlType=_followControlType;
@property(retain, nonatomic) id <T1UserViewActionControlProvider> actionControlProvider; // @synthesize actionControlProvider=_actionControlProvider;
@property(nonatomic) __weak id <T1UserOrRecommendationTableRowAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_setupUserView:(id)arg1 forDataViewController:(id)arg2 item:(id)arg3 withOptions:(id)arg4 indexPath:(id)arg5;
- (void)_t1_setupActionControlForUserView:(id)arg1 forDataViewController:(id)arg2 item:(id)arg3;
- (void)_t1_userDesignatorBadgeIsTapped:(id)arg1 indexPath:(id)arg2 forItem:(id)arg3;
- (void)_t1_navigateToUserProfile:(id)arg1 indexPath:(id)arg2 forItem:(id)arg3 displayInModal:(_Bool)arg4 sourceView:(id)arg5 sourceRect:(struct CGRect)arg6;
- (id)_t1_baseScribeContextForUserViewModel:(id)arg1 atIndexPath:(id)arg2 controller:(id)arg3 item:(id)arg4;
- (void)_t1_setupLingerScriberForItem:(id)arg1 withDataViewController:(id)arg2 cell:(id)arg3 atIndexPath:(id)arg4;
- (id)_t1_cellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_t1_viewModelDataFromUserRepresentation:(id)arg1 account:(id)arg2;
- (void)_t1_setupCheckableCell:(id)arg1 forDataViewController:(id)arg2 item:(id)arg3 withOptions:(id)arg4 indexPath:(id)arg5;
- (long long)_t1_checkmarkStyle;
- (unsigned long long)_t1_followControlVariantForAccount:(id)arg1 userViewModel:(id)arg2;
- (unsigned long long)_t1_followControlTypeForAccount:(id)arg1 userViewModel:(id)arg2;
- (_Bool)_t1_bioShownForRecord:(id)arg1;
- (unsigned long long)_bioMaxLinesForRecord:(id)arg1;
- (_Bool)userViewShouldUpdateHomeTimelineOnUnfollow:(id)arg1;
- (void)userView:(id)arg1 didPerformAction:(unsigned long long)arg2 success:(_Bool)arg3 error:(id)arg4;
- (id)dataViewController:(id)arg1 calculatedLayoutMetricsForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 previewConfigurationForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 scribeImpressionContextForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 scribeItemForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)dataViewController:(id)arg1 scribeContextForItem:(id)arg2 atIndexPath:(id)arg3;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithAccount:(id)arg1 scribeImpressionCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

