//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1NewsCameraCapsuleViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1TweetDetailsViewControllerDelegate-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSString, T1NewsCameraCapsuleViewController, T1NewsCameraContainerDimView, T1TweetDetailsViewController, TFNTwitterAccount, TFSTwitterScribeContext, UIPanGestureRecognizer, UIScrollView, UIView;
@protocol T1NewsCameraContainerCellViewControllerDelegate, T1StatusViewModel;

@interface T1NewsCameraContainerCellViewController : TFNViewController <UIScrollViewDelegate, T1NewsCameraCapsuleViewControllerDelegate, T1TweetDetailsViewControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _shouldAutoplayVideo;
    _Bool _shouldStartVideoFromBeginning;
    _Bool _shouldForceCallbackOnMediaLoadTimeout;
    _Bool _alreadyDismissing;
    _Bool _swipedDown;
    id <T1StatusViewModel> _statusViewModel;
    UIView *_backdropForDismissal;
    T1NewsCameraCapsuleViewController *_capsuleViewController;
    id <T1NewsCameraContainerCellViewControllerDelegate> _delegate;
    T1TweetDetailsViewController *_tweetDetailsViewController;
    UIScrollView *_overlayScrollView;
    UIPanGestureRecognizer *_panRecognizer;
    UIPanGestureRecognizer *_swipeDownPanRecognizer;
    T1NewsCameraContainerDimView *_dimView;
    long long _bottomBarState;
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
}

@property(nonatomic, getter=isSwipedDown) _Bool swipedDown; // @synthesize swipedDown=_swipedDown;
@property(nonatomic) _Bool alreadyDismissing; // @synthesize alreadyDismissing=_alreadyDismissing;
@property(retain, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) long long bottomBarState; // @synthesize bottomBarState=_bottomBarState;
@property(retain, nonatomic) T1NewsCameraContainerDimView *dimView; // @synthesize dimView=_dimView;
@property(retain, nonatomic) UIPanGestureRecognizer *swipeDownPanRecognizer; // @synthesize swipeDownPanRecognizer=_swipeDownPanRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain, nonatomic) UIScrollView *overlayScrollView; // @synthesize overlayScrollView=_overlayScrollView;
@property(retain, nonatomic) T1TweetDetailsViewController *tweetDetailsViewController; // @synthesize tweetDetailsViewController=_tweetDetailsViewController;
@property(nonatomic) __weak id <T1NewsCameraContainerCellViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldForceCallbackOnMediaLoadTimeout; // @synthesize shouldForceCallbackOnMediaLoadTimeout=_shouldForceCallbackOnMediaLoadTimeout;
@property(nonatomic) _Bool shouldStartVideoFromBeginning; // @synthesize shouldStartVideoFromBeginning=_shouldStartVideoFromBeginning;
@property(retain, nonatomic) T1NewsCameraCapsuleViewController *capsuleViewController; // @synthesize capsuleViewController=_capsuleViewController;
@property(retain, nonatomic) UIView *backdropForDismissal; // @synthesize backdropForDismissal=_backdropForDismissal;
@property(nonatomic) _Bool shouldAutoplayVideo; // @synthesize shouldAutoplayVideo=_shouldAutoplayVideo;
@property(readonly, nonatomic) id <T1StatusViewModel> statusViewModel; // @synthesize statusViewModel=_statusViewModel;
- (void).cxx_destruct;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)capsuleViewControllerDidRequestHideChrome:(id)arg1;
- (void)capsuleViewControllerDidRequestShowChrome:(id)arg1;
- (void)capsuleViewControllerDidRequestOpenWebSettings:(id)arg1;
- (void)capsuleViewControllerDidRequestContentRefresh:(id)arg1;
- (void)capsuleViewControllerDidLoadCapsuleMedia:(id)arg1;
- (void)capsuleViewControllerAccessibilityElementDidBecomeFocused:(id)arg1;
- (void)capsuleViewControllerChyronContentSizeChanged:(id)arg1;
- (void)capsuleViewControllerDidReceiveTapOnDragIndicator:(id)arg1;
- (void)capsuleViewController:(id)arg1 didReceiveTapAtPoint:(struct CGPoint)arg2;
- (void)_t1_updateViewsForCurrentStatus;
- (void)_t1_removeCapsuleAndTweetDetailViewControllers;
- (void)_t1_scrollToTopAndResetViewAlpha:(_Bool)arg1;
- (void)_t1_setupBackgroundTransition;
- (void)_t1_dismissDownAnimatedWithInitialVelocity:(double)arg1;
- (struct CGPoint)_t1_adjustedContentOffset;
- (void)tweetDetailsViewControllerDidUpdateContent:(id)arg1;
- (void)tweetDetailsViewControllerDidScrollToNewlyInsertedRow:(id)arg1;
- (void)_t1_updateTAVVisibilityScrollIndicatorInsets;
- (void)_t1_hideBottomBars:(_Bool)arg1;
- (void)_t1_showBottomBars;
- (void)_t1_updateOverlayScrollViewContentSize;
- (void)_t1_setUpTweetDetailsViewController:(id)arg1;
- (void)_t1_setUpCapsuleViewController;
- (void)_t1_updateViewSizes;
@property(readonly, nonatomic) long long expectedBottomBarState;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect)_t1_computedCapsuleFrame;
@property(readonly, nonatomic) double dragIndicatorBottomInset;
- (void)scribeViewImpressionWithParameters:(id)arg1;
- (void)_t1_voiceOverStatusChanged;
- (_Bool)_t1_isSwipeDownDismissalEnabled;
- (void)_t1_updateTweetDetailsViewWithOffset:(double)arg1;
- (void)_t1_updateDimViewWithOffset:(double)arg1;
- (void)_t1_updateCapsuleViewWithOffset:(double)arg1;
- (void)_t1_updateContainerCellWithOffset:(double)arg1;
- (void)_t1_swipeDown:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStatusViewModel:(id)arg1 account:(id)arg2 scribeContext:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

