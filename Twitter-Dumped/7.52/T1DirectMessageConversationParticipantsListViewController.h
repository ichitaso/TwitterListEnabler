//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsersViewController.h>

#import <T1Twitter/T1DirectMessageConversationAddPeopleBehaviorDelegate-Protocol.h>
#import <T1Twitter/TFNModalSheetViewControllerDelegate-Protocol.h>

@class NSString, T1DirectMessageConversation, T1DirectMessageConversationAddPeopleBehavior, T1DirectMessageConversationRemovePeopleBehavior, TFNGenericItem, UIBarButtonItem;
@protocol T1UsersViewControllerDelegate><T1DirectMessageConversationParticipantsListViewControllerDelegate;

@interface T1DirectMessageConversationParticipantsListViewController : T1UsersViewController <T1DirectMessageConversationAddPeopleBehaviorDelegate, TFNModalSheetViewControllerDelegate>
{
    _Bool _showEditItemActions;
    _Bool _showEditNavigationActions;
    _Bool _showBio;
    _Bool _excludePerspectivalUser;
    _Bool _showRemoveButtons;
    T1DirectMessageConversation *_conversation;
    TFNGenericItem *_addPeopleItem;
    T1DirectMessageConversationAddPeopleBehavior *_addPeopleBehavior;
    T1DirectMessageConversationRemovePeopleBehavior *_removePeopleBehavior;
    UIBarButtonItem *_doneButton;
}

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) T1DirectMessageConversationRemovePeopleBehavior *removePeopleBehavior; // @synthesize removePeopleBehavior=_removePeopleBehavior;
@property(retain, nonatomic) T1DirectMessageConversationAddPeopleBehavior *addPeopleBehavior; // @synthesize addPeopleBehavior=_addPeopleBehavior;
@property(retain, nonatomic) TFNGenericItem *addPeopleItem; // @synthesize addPeopleItem=_addPeopleItem;
@property(retain, nonatomic) T1DirectMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) _Bool showRemoveButtons; // @synthesize showRemoveButtons=_showRemoveButtons;
@property(nonatomic) _Bool excludePerspectivalUser; // @synthesize excludePerspectivalUser=_excludePerspectivalUser;
@property(nonatomic) _Bool showBio; // @synthesize showBio=_showBio;
@property(nonatomic) _Bool showEditNavigationActions; // @synthesize showEditNavigationActions=_showEditNavigationActions;
@property(nonatomic) _Bool showEditItemActions; // @synthesize showEditItemActions=_showEditItemActions;
- (void).cxx_destruct;
- (void)_updateUserIDs;
- (void)_configureUserCellForRoundAvatars:(id)arg1;
- (void)_showAddPeople:(id)arg1;
- (void)_showEditMembersActionSheet;
- (void)_didTapEdit:(id)arg1;
- (void)_didTapRemoveMembers:(id)arg1;
- (void)_didTapAdd:(id)arg1;
- (void)_didSelectUser:(id)arg1;
- (void)_conversationDidUpdateMetadata:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)addPeopleBehaviorDidFinish:(id)arg1;
- (void)modalSheetViewController:(id)arg1 willTransitionToLayoutMode:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (id)customActionItems;
- (_Bool)shouldShowBioForUserOrRecommendation:(id)arg1 atIndexPath:(id)arg2;
- (void)configureUserCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForUserOrRecommendation:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)t1_showsSearchAction;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (id)initWithConversation:(id)arg1 account:(id)arg2;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <T1UsersViewControllerDelegate><T1DirectMessageConversationParticipantsListViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

