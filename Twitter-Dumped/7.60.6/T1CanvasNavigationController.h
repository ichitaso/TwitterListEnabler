//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <T1Twitter/TFNCanvasTransitionAnimatorDelegate-Protocol.h>

@class NSString, T1CanvasViewController, TFNCanvasTransitionAnimator, TFNCustomHitTestView, TFNToolbar;

@interface T1CanvasNavigationController : UINavigationController <TFNCanvasTransitionAnimatorDelegate>
{
    TFNToolbar *_toolbar;
    double _navigationBarHeight;
    double _toolbarHeight;
    long long _lastKnownOrientation;
    _Bool _shouldDeferOrientationUpdate;
    _Bool _rotating;
    TFNCustomHitTestView *_chromeContainerView;
    TFNCanvasTransitionAnimator *_animator;
}

@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic) _Bool shouldDeferOrientationUpdate; // @synthesize shouldDeferOrientationUpdate=_shouldDeferOrientationUpdate;
@property(retain, nonatomic) TFNCanvasTransitionAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) TFNCustomHitTestView *chromeContainerView; // @synthesize chromeContainerView=_chromeContainerView;
- (void).cxx_destruct;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfnPresentedCustomPresentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)animator:(id)arg1 shouldHideChromeAfterDelay:(id)arg2;
- (_Bool)animator:(id)arg1 shouldAnimateChrome:(id)arg2;
- (_Bool)animator:(id)arg1 shouldAnimateContainedView:(id)arg2;
- (id)animator:(id)arg1 transitionViewForPurpose:(unsigned long long)arg2;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)toolbar;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)awakeFromNib;
- (void)_canvasOrientationDidChange:(id)arg1;
- (void)_canvasOrientationWillChange:(id)arg1;
- (void)_deviceOrientationDidChange;
- (void)_setupContainedToolbar;
- (void)_setupToolbar;
- (void)_setupNavigationBar;
@property(readonly, nonatomic) unsigned long long chromeAnimationPurpose;
@property(readonly, nonatomic) T1CanvasViewController *canvasViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

