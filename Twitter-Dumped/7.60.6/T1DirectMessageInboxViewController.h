//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1DirectMessageConversationCellActions-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationHost-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationHostViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageConversationParticipantsListViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1DirectMessageInboxConversationActions-Protocol.h>
#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/TFNPushedSplitViewControllerDelegate-Protocol.h>

@class NSString, T1DirectMessageConversation, T1DirectMessageConversationHostViewController, T1DirectMessageInboxTimelineViewController, T1EmptyContentViewController, TFNExpandingButtonItem, TFNItemsDataViewController, TFNTwitterAccount, UIBarButtonItem, UIViewController;
@protocol TFNDirectMessageInbox;

@interface T1DirectMessageInboxViewController : TFNViewController <T1DirectMessageInboxConversationActions, T1DirectMessageConversationCellActions, T1DirectMessageConversationParticipantsListViewControllerDelegate, T1DirectMessageConversationHostViewControllerDelegate, T1JumpBackToHomeTimelineBehavior, TFNPushedSplitViewControllerDelegate, T1DirectMessageConversationHost>
{
    _Bool _didShowAddressBookFollowAmbientNotification;
    _Bool _clearsSelectionOnViewWillAppear;
    _Bool _showComposeNewDMActionButtonItem;
    TFNTwitterAccount *_account;
    UIBarButtonItem *_composeBarButtonItem;
    id <TFNDirectMessageInbox> _messageInbox;
    T1DirectMessageConversation *_selectedConversation;
    unsigned long long _inboxType;
    T1DirectMessageInboxTimelineViewController *_conversationsViewController;
    T1EmptyContentViewController *_emptyInboxViewController;
    TFNItemsDataViewController *_loadingViewController;
    T1EmptyContentViewController *_emptyDetailViewController;
    UIViewController *_currentContentViewController;
    T1DirectMessageInboxViewController *_secondaryInboxViewController;
    TFNExpandingButtonItem *_composeNewDMActionButtonItem;
    CDUnknownBlockType _executeAfterViewAppears;
}

@property(copy, nonatomic) CDUnknownBlockType executeAfterViewAppears; // @synthesize executeAfterViewAppears=_executeAfterViewAppears;
@property(nonatomic) _Bool showComposeNewDMActionButtonItem; // @synthesize showComposeNewDMActionButtonItem=_showComposeNewDMActionButtonItem;
@property(retain, nonatomic) TFNExpandingButtonItem *composeNewDMActionButtonItem; // @synthesize composeNewDMActionButtonItem=_composeNewDMActionButtonItem;
@property(retain, nonatomic) T1DirectMessageInboxViewController *secondaryInboxViewController; // @synthesize secondaryInboxViewController=_secondaryInboxViewController;
@property(nonatomic) __weak UIViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
@property(nonatomic) __weak T1EmptyContentViewController *emptyDetailViewController; // @synthesize emptyDetailViewController=_emptyDetailViewController;
@property(nonatomic) __weak TFNItemsDataViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(nonatomic) __weak T1EmptyContentViewController *emptyInboxViewController; // @synthesize emptyInboxViewController=_emptyInboxViewController;
@property(nonatomic) __weak T1DirectMessageInboxTimelineViewController *conversationsViewController; // @synthesize conversationsViewController=_conversationsViewController;
@property(nonatomic) unsigned long long inboxType; // @synthesize inboxType=_inboxType;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(nonatomic) _Bool didShowAddressBookFollowAmbientNotification; // @synthesize didShowAddressBookFollowAmbientNotification=_didShowAddressBookFollowAmbientNotification;
@property(retain, nonatomic) T1DirectMessageConversation *selectedConversation; // @synthesize selectedConversation=_selectedConversation;
@property(retain, nonatomic) id <TFNDirectMessageInbox> messageInbox; // @synthesize messageInbox=_messageInbox;
@property(retain, nonatomic) UIBarButtonItem *composeBarButtonItem; // @synthesize composeBarButtonItem=_composeBarButtonItem;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_presentUserProfile:(id)arg1 conversation:(id)arg2 displayInModal:(_Bool)arg3 sourceView:(id)arg4 sourceRect:(struct CGRect)arg5;
- (id)t1_actionButtonItemsWithAccount:(id)arg1;
- (_Bool)t1_showsActionButton;
- (void)didTapTrashButtonForConversation:(id)arg1 sender:(id)arg2;
- (void)didTapAvatarForConversation:(id)arg1 sender:(id)arg2;
- (void)loadMoreConversationsWithCursor:(id)arg1;
- (void)showContextMenuForConversation:(id)arg1 sender:(id)arg2;
- (void)_showMuteOptions:(id)arg1 sender:(id)arg2;
- (void)markConversationAsSeen:(id)arg1;
- (void)disableNotificationsForConversation:(id)arg1 sender:(id)arg2;
- (void)enableNotificationsForConversation:(id)arg1;
- (void)reportConversation:(id)arg1;
- (void)deleteConversation:(id)arg1;
- (id)previewConversation:(id)arg1;
- (void)viewConversation:(id)arg1;
- (void)dismissCurrentConversationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentConversation:(id)arg1 text:(id)arg2 welcomeMessageID:(id)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 options:(unsigned long long)arg6 animated:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_presentConversation:(id)arg1 text:(id)arg2 welcomeMessageID:(id)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5 options:(unsigned long long)arg6 animated:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)pushedSplitViewController:(id)arg1 didPopDetailViewController:(id)arg2;
- (void)pushedSplitViewController:(id)arg1 didChangeToDisplayMode:(long long)arg2;
- (void)pushedSplitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)scrollToTop;
- (void)_showDetailViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_viewControllerForInboxType:(unsigned long long)arg1;
- (void)_inboxDidUpdateMetadata:(id)arg1;
- (void)_updateButtons;
- (void)_updateContentViewController;
- (_Bool)_shouldShowEmptyDetailViewForDisplayMode:(long long)arg1;
- (void)_showEmptyDetailViewIfNecessaryForDisplayMode:(long long)arg1;
- (void)_hideEmptyDetailViewIfNecessaryForDisplayMode:(long long)arg1;
- (void)_updateEmptyDetailView;
- (void)_refresh;
- (void)_userSelectedLowQualityInbox:(id)arg1;
- (void)_userSelectedRequestsInbox:(id)arg1;
- (void)_presentSecondaryInbox:(unsigned long long)arg1;
- (void)_directMessagesDidReset:(id)arg1;
- (void)_inboxDidUpdateTimeline:(id)arg1;
- (id)_loadLoadingViewController;
- (id)_loadEmptyDetailViewController;
- (id)_loadLowQualityConversationsEmptyViewController;
- (id)_loadUntrustedConversationsEmptyViewController;
- (id)_loadEmptyInboxViewController;
- (id)_loadLowQualityConversationsViewController;
- (id)_loadUntrustedConversationsViewController;
- (id)_loadTrustedConversationsViewController;
- (void)_composeNewDirectMessageWithPrefilledText:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_composeNewDirectMessage:(id)arg1;
- (void)_clearInvalidSelectedConversation;
- (void)_clearSelectedConversation;
- (void)_openSettings;
- (void)handleComposeMessageKeyCommand;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)directMessageConversationParticipantsListViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)conversationHostViewController:(id)arg1 didSelectConversation:(id)arg2;
- (void)conversationHostViewController:(id)arg1 didUpdateCreationState:(long long)arg2;
- (id)scribeParameters:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)tfn_contentScrollViewWillBeginDragging:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillFullyDisappear:(_Bool)arg1;
- (void)viewWillFullyAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
@property(readonly, nonatomic) T1DirectMessageConversationHostViewController *conversationHostViewController;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showDirectMessageComposeWithPrefilledText:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccount:(id)arg1 inboxType:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

