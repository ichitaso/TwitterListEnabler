//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1AutoplayViewContainer-Protocol.h>
#import <T1Twitter/T1AutoplayableContainer-Protocol.h>
#import <T1Twitter/T1InlineMediaViewDelegate-Protocol.h>

@class NSString, T1InlineMediaView, UIImage;
@protocol T1PlayerCardPlayerContainerViewDelegate, TFNTwitterAVPlayerSessionSource;

@interface T1PlayerCardPlayerContainerView : UIView <T1InlineMediaViewDelegate, T1AutoplayableContainer, T1AutoplayViewContainer>
{
    id <T1PlayerCardPlayerContainerViewDelegate> _delegate;
    T1InlineMediaView *_inlineMediaView;
}

@property(readonly, nonatomic) T1InlineMediaView *inlineMediaView; // @synthesize inlineMediaView=_inlineMediaView;
@property(nonatomic) __weak id <T1PlayerCardPlayerContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *playerPreviewImage;
@property(readonly, nonatomic) UIView *playerContainerView;
- (id)autoplayable;
- (void)inlineMediaView:(id)arg1 wasLongPressedWithGestureRecognizer:(id)arg2;
- (void)inlineMediaViewWasTapped:(id)arg1 withEvent:(id)arg2;
- (_Bool)inlineMediaViewShouldShowVideoDetailsInOverlay:(id)arg1;
- (void)prepareForReuse;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (void)playFullscreen;
- (void)setHidden:(_Bool)arg1 inlineMediaViewModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

