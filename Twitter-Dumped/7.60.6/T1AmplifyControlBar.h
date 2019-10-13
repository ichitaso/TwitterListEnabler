//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@class NSString, TAVPlaybackState, TAVPlayer, TAVTwitterVideoContextCTAInfo, TFNTwitterAccount, UIButton;
@protocol T1AmplifyControlBarDelegate;

@interface T1AmplifyControlBar : UIView <TAVPlaybackObserver>
{
    _Bool _separatorHidden;
    UIButton *_ctaButton;
    UIView *_hairlineSeparator;
    UIButton *_playButton;
    id <T1AmplifyControlBarDelegate> _delegate;
    TFNTwitterAccount *_account;
    TAVPlayer *_tavPlayer;
    TAVTwitterVideoContextCTAInfo *_currentCTAInfo;
    TAVPlaybackState *_playbackState;
}

@property(retain, nonatomic) TAVPlaybackState *playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) TAVTwitterVideoContextCTAInfo *currentCTAInfo; // @synthesize currentCTAInfo=_currentCTAInfo;
@property(readonly, nonatomic) __weak TAVPlayer *tavPlayer; // @synthesize tavPlayer=_tavPlayer;
@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(nonatomic) __weak id <T1AmplifyControlBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)private_updatePlayPauseButton;
- (void)_updateCTAButtonWithCTAType:(unsigned long long)arg1 appId:(id)arg2 appName:(id)arg3 url:(id)arg4 isAd:(_Bool)arg5 adVideoContext:(id)arg6;
- (void)updateCTAWithPlaylistItem:(id)arg1;
- (void)_layoutPlayButton;
- (void)_layoutHairlineSeparator;
- (void)_layoutCTAButton;
- (void)_layoutElements;
- (void)layoutSubviews;
- (void)updateWithCurrentPlaybackState:(id)arg1;
- (void)_playButtonDidTap;
- (void)_ctaButtonDidTap;
@property(retain, nonatomic) NSString *ctaTitle;
@property(readonly, nonatomic) double preferredHeight;
@property(readonly, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(readonly, nonatomic) UIView *hairlineSeparator; // @synthesize hairlineSeparator=_hairlineSeparator;
@property(readonly, nonatomic) UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
- (id)initWithTAVPlayer:(id)arg1 account:(id)arg2;

@end

