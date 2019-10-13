//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1AmbientNotificationDelegate-Protocol.h>
#import <T1Twitter/T1TagSetViewDelegate-Protocol.h>

@class NSString, T1AmplifyAdControlBar, T1AmplifyContentControlBar, T1AmplifyControlBar, T1DefaultSlideshowStatusViewActionsDataSource, T1SlideshowViewController, T1StatusSlideshowViewEventHandler, T1TagSetView, T1TweetDetailsActionView, TAVPlayer, TFNPaddedButton, TFNSolidColorView, TFNTappableHighlightView, TFNTwitterAccount, TFSTwitterEntityMedia;
@protocol T1BasicStatusView, T1StatusViewEventHandler, T1StatusViewModel;

@interface T1SlideshowStatusView : UIView <T1TagSetViewDelegate, T1AmbientNotificationDelegate>
{
    TFNSolidColorView *_backgroundView;
    UIView<T1BasicStatusView> *_statusView;
    T1StatusSlideshowViewEventHandler *_statusViewEventHandler;
    TFNTappableHighlightView *_statusHighlightView;
    T1TweetDetailsActionView *_actionsView;
    UIView *_contentContainerView;
    _Bool _statusViewNeedsResize;
    struct CGSize _sizeForStatusView;
    _Bool _shouldShowStatus;
    _Bool _shouldShowActionsView;
    _Bool _shouldShowQuickReplyView;
    _Bool _statusAndMediaChangePending;
    _Bool _ambientNotificationVisible;
    T1AmplifyAdControlBar *_adControlBar;
    T1AmplifyContentControlBar *_contentControlBar;
    long long _controlBarStyle;
    T1TagSetView *_taggingView;
    CDUnknownBlockType _tagTapBlock;
    TAVPlayer *_tavPlayer;
    UIView *_ambientNotificationView;
    id <T1StatusViewEventHandler> _eventHandler;
    CDUnknownBlockType _statusSelectedAction;
    CDUnknownBlockType _statusDeletedAction;
    CDUnknownBlockType _userSelectedAction;
    CDUnknownBlockType _activeRangeSelectedAction;
    CDUnknownBlockType _replySelectedAction;
    CDUnknownBlockType _quickReplyTappedAction;
    id <T1StatusViewModel> _viewModel;
    TFSTwitterEntityMedia *_media;
    id <T1StatusViewModel> _pendingViewModel;
    TFSTwitterEntityMedia *_pendingMedia;
    T1SlideshowViewController *_viewController;
    T1DefaultSlideshowStatusViewActionsDataSource *_dataSource;
    TFNPaddedButton *_quickReplyButton;
}

@property(nonatomic, getter=isAmbientNotificationVisible) _Bool ambientNotificationVisible; // @synthesize ambientNotificationVisible=_ambientNotificationVisible;
@property(retain, nonatomic) TFNPaddedButton *quickReplyButton; // @synthesize quickReplyButton=_quickReplyButton;
@property(retain, nonatomic) T1DefaultSlideshowStatusViewActionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak T1SlideshowViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, getter=isStatusAndMediaChangePending) _Bool statusAndMediaChangePending; // @synthesize statusAndMediaChangePending=_statusAndMediaChangePending;
@property(retain, nonatomic) TFSTwitterEntityMedia *pendingMedia; // @synthesize pendingMedia=_pendingMedia;
@property(retain, nonatomic) id <T1StatusViewModel> pendingViewModel; // @synthesize pendingViewModel=_pendingViewModel;
@property(retain, nonatomic) TFSTwitterEntityMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType quickReplyTappedAction; // @synthesize quickReplyTappedAction=_quickReplyTappedAction;
@property(copy, nonatomic) CDUnknownBlockType replySelectedAction; // @synthesize replySelectedAction=_replySelectedAction;
@property(copy, nonatomic) CDUnknownBlockType activeRangeSelectedAction; // @synthesize activeRangeSelectedAction=_activeRangeSelectedAction;
@property(copy, nonatomic) CDUnknownBlockType userSelectedAction; // @synthesize userSelectedAction=_userSelectedAction;
@property(copy, nonatomic) CDUnknownBlockType statusDeletedAction; // @synthesize statusDeletedAction=_statusDeletedAction;
@property(copy, nonatomic) CDUnknownBlockType statusSelectedAction; // @synthesize statusSelectedAction=_statusSelectedAction;
@property(nonatomic) __weak id <T1StatusViewEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) UIView *ambientNotificationView; // @synthesize ambientNotificationView=_ambientNotificationView;
@property(nonatomic) __weak TAVPlayer *tavPlayer; // @synthesize tavPlayer=_tavPlayer;
@property(copy, nonatomic) CDUnknownBlockType tagTapBlock; // @synthesize tagTapBlock=_tagTapBlock;
@property(readonly, nonatomic) T1TagSetView *taggingView; // @synthesize taggingView=_taggingView;
@property(nonatomic) _Bool shouldShowQuickReplyView; // @synthesize shouldShowQuickReplyView=_shouldShowQuickReplyView;
@property(nonatomic) _Bool shouldShowActionsView; // @synthesize shouldShowActionsView=_shouldShowActionsView;
@property(nonatomic) _Bool shouldShowStatus; // @synthesize shouldShowStatus=_shouldShowStatus;
@property(nonatomic) long long controlBarStyle; // @synthesize controlBarStyle=_controlBarStyle;
@property(readonly, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) T1AmplifyContentControlBar *contentControlBar; // @synthesize contentControlBar=_contentControlBar;
@property(retain, nonatomic) T1AmplifyAdControlBar *adControlBar; // @synthesize adControlBar=_adControlBar;
- (void).cxx_destruct;
- (void)ambientNotificationDidHide:(id)arg1;
- (void)ambientNotificationWillShow:(id)arg1;
- (id)currentViewController;
- (struct CGRect)tabBarFrame;
- (id)_possibleTappedTag;
- (void)tagSetViewDidTap:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)_t1_estimatedOneLineQuickReplyButtonHeight;
- (double)_t1_heightForQuickReplyView;
- (double)_heightForActionView;
- (_Bool)_showTaggingView;
- (struct UIEdgeInsets)_contentEdgeInsets;
- (double)_contentWidth;
- (double)_optionalViewsPaddingBottom;
- (double)_optionalViewsPaddingTop;
- (void)_resizeStatusViewIfNeeded;
- (double)_optionalViewsPaddingLeft;
- (double)_optionalViewsWidth;
- (void)_animateControlBarFrom:(id)arg1 to:(id)arg2;
- (void)_updateControlBarFrame:(id)arg1 withPreferredHeight:(double)arg2 totalHeight:(double)arg3;
- (void)_layoutControlBarWithPreferredHeight:(double)arg1 totalHeight:(double)arg2;
- (void)layoutSubviews;
- (void)_t1_didTapQuickReplyButton:(id)arg1;
- (void)_statusDeleted:(id)arg1;
- (void)_statusUpdated:(id)arg1;
- (void)_didSelectStatus:(id)arg1;
- (void)_moreAction:(id)arg1;
- (void)_shareAction:(id)arg1;
- (void)_favoriteAction:(id)arg1;
- (void)_t1_presentMenuSheet:(id)arg1 fromView:(id)arg2;
- (void)_presentActionSheet:(id)arg1 fromView:(id)arg2;
- (void)_retweetAction:(id)arg1 confirmUndo:(_Bool)arg2;
- (void)_replyAction:(id)arg1;
- (void)_showComposer:(id)arg1;
- (void)_showNativeVideoTweetDetails;
- (void)_scribeAction:(id)arg1 element:(id)arg2 status:(id)arg3;
@property(readonly, nonatomic) _Bool canPerformBookmarkAction;
- (void)bookmarkAction;
@property(readonly, nonatomic) _Bool canPerformFavoriteAction;
- (void)favoriteAction;
@property(readonly, nonatomic) _Bool canPerformRetweetAction;
- (void)retweetAction;
@property(readonly, nonatomic) _Bool canPerformReplyAction;
- (void)replyAction;
@property(readonly, nonatomic) _Bool canPerformSelectUserAction;
- (void)selectUserAction;
- (void)_t1_removeControlBars;
- (void)_t1_updateQuickReplyView;
- (void)_updateActionsView;
- (void)_updateTaggingViewForMedia:(id)arg1;
- (void)_updateStatusViewForViewModel:(id)arg1;
- (void)updateQuickReplyForComposition:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)contentFrame;
- (void)_removeObserversForStatus;
- (void)_addObserversForStatus;
- (void)_updateSubviewForViewModel:(id)arg1 media:(id)arg2 animated:(_Bool)arg3;
- (void)setViewModel:(id)arg1 media:(id)arg2 animated:(_Bool)arg3;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
@property(readonly, nonatomic) TFNTwitterAccount *account;
@property(nonatomic, getter=isSelectable) _Bool selectable;
@property(readonly, nonatomic) T1AmplifyControlBar *currentControlBar;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

