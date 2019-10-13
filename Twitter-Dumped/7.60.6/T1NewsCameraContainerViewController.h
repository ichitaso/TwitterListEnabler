//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1AmbientNotificationCenterDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraContainerCellViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNPresented-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSString, T1FullscreenMediaTransition, T1NewsCameraContainerCellViewController, TFNPaddedButton, TFNTwitterAccount, UIView;
@protocol T1AutoplayFullscreenCoordinator, T1NewsCameraImageTransitionDataSource><T1ImageTransitionDelegate, T1StatusViewModel;

@interface T1NewsCameraContainerViewController : TFNViewController <UIScrollViewDelegate, T1NewsCameraContainerCellViewControllerDelegate, T1AmbientNotificationCenterDelegate, TFNPresented>
{
    _Bool _shouldAutoplayVideo;
    _Bool _showingChrome;
    _Bool _performedInitialChromeAnimation;
    _Bool _shouldStartVideoFromBeginning;
    _Bool _mediaLoaded;
    _Bool _transitionFinished;
    id <T1NewsCameraImageTransitionDataSource><T1ImageTransitionDelegate> _transitionDelegate;
    id <T1AutoplayFullscreenCoordinator> _autoplayCoordinator;
    TFNTwitterAccount *_account;
    id <T1StatusViewModel> _statusViewModel;
    T1NewsCameraContainerCellViewController *_currentCellViewController;
    TFNPaddedButton *_backButton;
    UIView *_backdropForDismissal;
    T1FullscreenMediaTransition *_transition;
    CDUnknownBlockType _exitBlock;
}

@property(copy, nonatomic) CDUnknownBlockType exitBlock; // @synthesize exitBlock=_exitBlock;
@property(retain, nonatomic) T1FullscreenMediaTransition *transition; // @synthesize transition=_transition;
@property(nonatomic, getter=isTransitionFinished) _Bool transitionFinished; // @synthesize transitionFinished=_transitionFinished;
@property(nonatomic, getter=isMediaLoaded) _Bool mediaLoaded; // @synthesize mediaLoaded=_mediaLoaded;
@property(nonatomic) _Bool shouldStartVideoFromBeginning; // @synthesize shouldStartVideoFromBeginning=_shouldStartVideoFromBeginning;
@property(nonatomic) _Bool performedInitialChromeAnimation; // @synthesize performedInitialChromeAnimation=_performedInitialChromeAnimation;
@property(nonatomic) _Bool showingChrome; // @synthesize showingChrome=_showingChrome;
@property(retain, nonatomic) UIView *backdropForDismissal; // @synthesize backdropForDismissal=_backdropForDismissal;
@property(retain, nonatomic) TFNPaddedButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) T1NewsCameraContainerCellViewController *currentCellViewController; // @synthesize currentCellViewController=_currentCellViewController;
@property(nonatomic) _Bool shouldAutoplayVideo; // @synthesize shouldAutoplayVideo=_shouldAutoplayVideo;
@property(retain, nonatomic) id <T1StatusViewModel> statusViewModel; // @synthesize statusViewModel=_statusViewModel;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) id <T1AutoplayFullscreenCoordinator> autoplayCoordinator; // @synthesize autoplayCoordinator=_autoplayCoordinator;
@property(nonatomic) __weak id <T1NewsCameraImageTransitionDataSource><T1ImageTransitionDelegate> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
- (void).cxx_destruct;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)scribeContext;
- (_Bool)ambientNotificationCenterShouldNotify:(id)arg1;
- (void)containerCellViewControllerDidRequestHideChrome:(id)arg1;
- (void)containerCellViewControllerDidRequestShowChrome:(id)arg1;
- (void)containerCellViewControllerDidRequestOpenWebSettings:(id)arg1;
- (void)containerCellViewControllerDidRequestContentRefresh:(id)arg1;
- (void)containerCellViewControllerDidLoadCapsuleView:(id)arg1;
- (void)containerCellViewController:(id)arg1 didSwipeDownAnimated:(_Bool)arg2;
- (void)containerCellViewController:(id)arg1 didSwipeDownToOffset:(struct CGPoint)arg2;
- (void)containerCellViewController:(id)arg1 didReceiveTapAtPoint:(struct CGPoint)arg2;
- (void)containerCellViewController:(id)arg1 willDismissAnimated:(_Bool)arg2;
- (void)containerCellViewController:(id)arg1 didScrollToChyronOffset:(struct CGPoint)arg2 scrollOffset:(struct CGPoint)arg3 topInset:(double)arg4;
- (_Bool)t1_actionButtonShouldShowEarlyUponDismissal;
- (_Bool)t1_actionButtonShouldAnimatePresentation;
- (void)_t1_setBackButtonAlphaIfVisible:(double)arg1;
- (void)_t1_toggleChrome;
- (void)_t1_openWebSettings;
- (void)_t1_setupTransition;
- (void)_t1_fetchStatusIfNeeded;
- (void)_t1_backButtonTapped:(id)arg1;
- (void)_t1_setUpBackButton;
- (void)_t1_setUpCellViewController:(id)arg1;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_prefersNavigationBarHidden;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)tfnPresentedCustomPresentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_t1_performInitialChromeAnimationIfNeeded;
- (id)_t1_transitionTAVPlayerViewWithGravity:(long long)arg1;
- (id)_t1_createTransitionBackgroundBlurView;
- (id)_t1_transitionObject;
- (id)_t1_animationBackgroundColorForContentMode:(long long)arg1;
- (struct CGRect)_t1_targetFrameWithSourceViewController:(id)arg1;
- (id)_t1_snapshotFromPreviousController;
- (void)_t1_removeTransitionViewIfNeeded;
- (void)viewControllerDidDismissAnimated:(_Bool)arg1;
- (void)viewControllerWillDismissAnimated:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_t1_setupExitBlock;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStatusViewModel:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

