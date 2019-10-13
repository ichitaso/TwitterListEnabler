//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1AutoplayFullscreenCoordinator-Protocol.h>

@class NSMapTable, NSString, T1VideoBitRateManager, TFNDataViewController, TFNTwitterAccount, TFSTimer;

@interface T1StatusMediaHandler : NSObject <T1AutoplayFullscreenCoordinator>
{
    _Bool _autoplayEnabled;
    _Bool _autoplayUpdateTimerRunning;
    TFNTwitterAccount *_account;
    double _autoplayStartPlayerViewVisibleYFraction;
    double _autoplaySuspendUpdateSpeed;
    TFSTimer *_autoplayUpdateTimer;
    NSMapTable *_viewControllerToSlideshowPresenterMap;
    T1VideoBitRateManager *_videoBitRateManager;
    TFNDataViewController *_dataViewController;
    id _presentedSlideshow;
    double _lastVerticalScrollSpeedUpdateTime;
    double _verticalScrollSpeed;
    struct CGPoint _lastAutoplayUpdateContentOffset;
    struct CGPoint _lastVerticalScrollSpeedUpdateContentOffset;
}

+ (id)statusMediaHandlerForDataViewController:(id)arg1 account:(id)arg2;
@property(nonatomic) double verticalScrollSpeed; // @synthesize verticalScrollSpeed=_verticalScrollSpeed;
@property(nonatomic) double lastVerticalScrollSpeedUpdateTime; // @synthesize lastVerticalScrollSpeedUpdateTime=_lastVerticalScrollSpeedUpdateTime;
@property(nonatomic) struct CGPoint lastVerticalScrollSpeedUpdateContentOffset; // @synthesize lastVerticalScrollSpeedUpdateContentOffset=_lastVerticalScrollSpeedUpdateContentOffset;
@property(nonatomic) struct CGPoint lastAutoplayUpdateContentOffset; // @synthesize lastAutoplayUpdateContentOffset=_lastAutoplayUpdateContentOffset;
@property(nonatomic) __weak id presentedSlideshow; // @synthesize presentedSlideshow=_presentedSlideshow;
@property(readonly, nonatomic) __weak TFNDataViewController *dataViewController; // @synthesize dataViewController=_dataViewController;
@property(nonatomic) _Bool autoplayUpdateTimerRunning; // @synthesize autoplayUpdateTimerRunning=_autoplayUpdateTimerRunning;
@property(retain, nonatomic) T1VideoBitRateManager *videoBitRateManager; // @synthesize videoBitRateManager=_videoBitRateManager;
@property(retain, nonatomic) NSMapTable *viewControllerToSlideshowPresenterMap; // @synthesize viewControllerToSlideshowPresenterMap=_viewControllerToSlideshowPresenterMap;
@property(retain, nonatomic) TFSTimer *autoplayUpdateTimer; // @synthesize autoplayUpdateTimer=_autoplayUpdateTimer;
@property(readonly, nonatomic) double autoplaySuspendUpdateSpeed; // @synthesize autoplaySuspendUpdateSpeed=_autoplaySuspendUpdateSpeed;
@property(readonly, nonatomic) double autoplayStartPlayerViewVisibleYFraction; // @synthesize autoplayStartPlayerViewVisibleYFraction=_autoplayStartPlayerViewVisibleYFraction;
@property(readonly, nonatomic) _Bool autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)viewController:(id)arg1 didEndFullscreenPresentationWithPlayerSession:(id)arg2;
- (long long)t1_autoplayManagerMode;
- (void)viewController:(id)arg1 willBeginFullscreenPresentationWithPlayerSession:(id)arg2;
- (void)_t1_dockingControllerDidDismissCurrentDockedView;
- (void)_updateAutoplayIfNeededOnVideoChangeInSource:(id)arg1;
- (void)_liveEventCardViewModelDidUpdateBroadcast:(id)arg1;
- (id)_buildScribeContextWithController:(id)arg1 withSource:(id)arg2;
- (_Bool)_shouldUpdateAutoplay;
- (void)_updateVerticalScrollSpeed;
- (void)_autoplayTimerTick;
- (_Bool)private_dataViewControllerIsInvisible;
- (void)_startAutoplayUpdateTimer;
- (void)_pauseAutoplayUpdateTimer;
- (void)_disposeAutoplayUpdateTimer;
- (void)_autoplaySettingsDidChange;
- (void)_autoplayResetScrollStates;
- (void)didDisplayPlayerViewContainerCell:(struct UIView *)arg1;
- (id)_t1_autoplayableViewInCell:(struct UIView *)arg1;
- (id)_t1_inlineMediaViewInCell:(struct UIView *)arg1;
- (void)willDisplayPlayerViewContainerCell:(struct UIView *)arg1;
- (void)addSlideshowPresenter:(id)arg1 forViewController:(id)arg2;
- (id)slideshowPresenterForViewController:(id)arg1;
- (id)presentPlayerFromPlayerViewContainerCell:(struct UIView *)arg1 status:(id)arg2 previewing:(_Bool)arg3;
- (void)dealloc;
- (void)addSubDataViewController:(id)arg1;
- (void)_updateFeatureSwitches;
- (void)_t1_setupAutoplayManager;
- (id)initWithMainDataViewController:(id)arg1 account:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

