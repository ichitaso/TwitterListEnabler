//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewAccessible.h>

#import <T1Twitter/T1BroadcastCardBroadcastDetailViewDelegate-Protocol.h>
#import <T1Twitter/T1BroadcastCardViewModelDelegate-Protocol.h>
#import <T1Twitter/T1BroadcastContainerViewDelegate-Protocol.h>
#import <T1Twitter/T1VideoBitRateManagerDelegate-Protocol.h>

@class CALayer, NSError, NSString, T1BroadcastCardBroadcastDetailView, T1BroadcastCardErrorView, T1BroadcastCardViewModel, T1BroadcastContainerView, T1LiveEventRoundedPaddedView, T1VideoBitRateManager, TFNLiveEventCardViewLifecycleObserver, TFNSolidColorView, TFNTappableHighlightView, TFNTwitterUser, UIImageView, UIView;

@interface T1BroadcastCardView : T1CardViewAccessible <T1BroadcastContainerViewDelegate, T1VideoBitRateManagerDelegate, T1BroadcastCardViewModelDelegate, T1BroadcastCardBroadcastDetailViewDelegate>
{
    T1BroadcastCardViewModel *_viewModel;
    TFNLiveEventCardViewLifecycleObserver *_lifecycleObserver;
    T1VideoBitRateManager *_videoBitrateManager;
    NSError *_playbackError;
    TFNTwitterUser *_attributedUser;
    TFNSolidColorView *_backgroundView;
    T1BroadcastContainerView *_broadcastContainerView;
    UIImageView *_thumbnailImageView;
    T1LiveEventRoundedPaddedView *_scheduledTimeView;
    TFNTappableHighlightView *_highlightView;
    T1BroadcastCardErrorView *_errorView;
    T1BroadcastCardBroadcastDetailView *_detailsView;
    CALayer *_detailsSeparator;
    UIView *_broadcastContentView;
}

@property(readonly, nonatomic) UIView *broadcastContentView; // @synthesize broadcastContentView=_broadcastContentView;
@property(readonly, nonatomic) CALayer *detailsSeparator; // @synthesize detailsSeparator=_detailsSeparator;
@property(readonly, nonatomic) T1BroadcastCardBroadcastDetailView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) T1BroadcastCardErrorView *errorView; // @synthesize errorView=_errorView;
@property(readonly, nonatomic) TFNTappableHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) T1LiveEventRoundedPaddedView *scheduledTimeView; // @synthesize scheduledTimeView=_scheduledTimeView;
@property(readonly, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(readonly, nonatomic) T1BroadcastContainerView *broadcastContainerView; // @synthesize broadcastContainerView=_broadcastContainerView;
@property(readonly, nonatomic) TFNSolidColorView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) TFNTwitterUser *attributedUser; // @synthesize attributedUser=_attributedUser;
@property(retain, nonatomic) NSError *playbackError; // @synthesize playbackError=_playbackError;
@property(retain, nonatomic) T1VideoBitRateManager *videoBitrateManager; // @synthesize videoBitrateManager=_videoBitrateManager;
@property(retain, nonatomic) TFNLiveEventCardViewLifecycleObserver *lifecycleObserver; // @synthesize lifecycleObserver=_lifecycleObserver;
@property(retain, nonatomic) T1BroadcastCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)accessibilityStringForStatusText:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)dealloc;
- (id)_t1_playerViewConfiguration;
- (void)_t1_cleanup;
- (void)_t1_cleanupBroadcastContainerView;
- (void)_t1_showBroadcast;
- (void)_t1_addLifecycleObserverToPlayer:(id)arg1;
- (void)_t1_highlightViewLongPressed:(id)arg1;
- (void)_t1_highlightViewPressed:(id)arg1;
- (void)_t1_updateSubviews;
- (id)_t1_adOverrideStringForVideoContext:(id)arg1;
- (void)_t1_updateDetailsViewDisplayWithVideoContext:(id)arg1 displayName:(id)arg2;
- (void)_t1_updateDetailsViewDisplayWithVideoContext:(id)arg1 user:(id)arg2;
- (void)_t1_loadAndDisplayBroadcastDetailsIfNecessaryWithContext:(id)arg1;
- (void)_t1_setupBroadcastContainerViewIfNeeded;
- (void)_t1_updateBroadcastContentView;
- (_Bool)_t1_inErrorState;
- (_Bool)_t1_shouldFetchImages;
- (void)didTapBroadcastCardBroadcastDetailView:(id)arg1;
- (void)broadcastContainerView:(id)arg1 didEndAdPlaybackWithContext:(id)arg2;
- (void)broadcastContainerView:(id)arg1 didStartAdPlaybackWithContext:(id)arg2;
- (void)broadcastContainerView:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)broadcastContainerView:(id)arg1 didStartPlayback:(id)arg2;
- (void)broadcastContainerView:(id)arg1 didSetPlayer:(id)arg2;
- (void)broadcastCardViewModelDidUpdate:(id)arg1;
- (id)autoplayable;
- (void)updatePreferredPeakBitRate:(id)arg1;
- (void)fetchImages;
- (void)setImagePipeline:(id)arg1;
- (id)imageFetchingViews;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (void)prepareForReuse;
- (void)cardContextDidUpdate;
- (void)setScribeContext:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

