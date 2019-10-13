//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/T1AutoplayViewContainer-Protocol.h>
#import <T1Twitter/T1AutoplayableContainer-Protocol.h>
#import <T1Twitter/T1StatusViewEventHandler-Protocol.h>
#import <T1Twitter/T1TimelineStatusViewContainer-Protocol.h>

@class NSString, UIImage, UIView;
@protocol T1LayoutableStatusView, TFNTwitterAVPlayerSessionSource;

@interface T1StatusCell : TFNTableViewCell <T1StatusViewEventHandler, T1TimelineStatusViewContainer, T1AutoplayViewContainer, T1AutoplayableContainer>
{
    UIView<T1LayoutableStatusView> *_statusView;
    unsigned long long _appearanceTime;
    char _loadedStates[4];
    long long _loadedSources[4];
    CDUnknownBlockType _eventHandlerBlock;
}

+ (double)estimatedHeightForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 layoutMetrics:(id)arg4;
+ (id)cellLayoutForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 layoutMetrics:(id)arg4 withPreviousLayout:(id)arg5;
+ (Class)statusViewClass;
@property(copy, nonatomic) CDUnknownBlockType eventHandlerBlock; // @synthesize eventHandlerBlock=_eventHandlerBlock;
@property(readonly, nonatomic) UIView<T1LayoutableStatusView> *statusView; // @synthesize statusView=_statusView;
- (void).cxx_destruct;
- (void)_t1_presentUndoWithheldRetweetActionSheet;
- (void)handleViewUserKeyCommand;
- (void)handleBookmarkKeyCommand;
- (_Bool)_t1_canHandleBookmarkKeyCommand;
- (void)_t1_handleInlineActionType:(unsigned long long)arg1;
- (void)handleUndoRetweetKeyCommand;
- (void)handleRetweetKeyCommand;
- (void)handleUndoLikeKeyCommand;
- (void)handleLikeKeyCommand;
- (_Bool)_t1_canHandleInlineActionType:(unsigned long long)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setReusableViewCache:(id)arg1;
@property(readonly, nonatomic) UIImage *playerPreviewImage;
@property(readonly, nonatomic) UIView *playerContainerView;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (id)autoplayable;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)handleStatusViewEvent:(id)arg1;
- (id)_interceptStatusViewEvent:(id)arg1 withOriginalReturnValue:(id)arg2;
- (void)_handlePhotoLoadedEvent:(unsigned long long)arg1 imageIndex:(id)arg2 source:(long long)arg3 error:(id)arg4;
- (void)didEndDisplayingInDataViewController:(id)arg1 reason:(unsigned long long)arg2;
- (void)didDisplayInDataViewController:(id)arg1 atIndexPath:(id)arg2 visibleIntersection:(struct CGRect)arg3;
- (void)_imageLostVisibilityBeforeLoad:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)_imageDidLoad:(unsigned long long)arg1 source:(long long)arg2 index:(unsigned long long)arg3;
- (void)_imageFailedToLoad:(unsigned long long)arg1 error:(id)arg2 source:(long long)arg3 index:(unsigned long long)arg4;
- (void)_imageDurationFinished:(unsigned long long)arg1 error:(id)arg2 source:(long long)arg3 index:(unsigned long long)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCellLayout:(id)arg1;
- (id)statusViewWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

