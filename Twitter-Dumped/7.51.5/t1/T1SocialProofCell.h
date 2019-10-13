//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSString, T1DismissButton, TFNTappableHighlightView, TFNTwitterStatus, UIView;

@interface T1SocialProofCell : TFNTableViewCell <TFNLayoutMetricsEnvironment>
{
    TFNTappableHighlightView *_highlightView;
    UIView *_conversationConnectorView;
    _Bool _showConversationConnector;
    _Bool _enableTappableSocialProof;
    _Bool _showCaret;
    TFNTwitterStatus *_status;
    long long _avatarSize;
    CDUnknownBlockType _socialProofTapActionBlock;
    CDUnknownBlockType _caretTapActionBlock;
    T1DismissButton *_caretButton;
}

+ (void)configureTextLabel:(id)arg1;
+ (double)heightForStatus:(id)arg1 socialText:(id)arg2 layoutMetrics:(id)arg3;
@property(readonly, nonatomic) T1DismissButton *caretButton; // @synthesize caretButton=_caretButton;
@property(nonatomic) _Bool showCaret; // @synthesize showCaret=_showCaret;
@property(copy, nonatomic) CDUnknownBlockType caretTapActionBlock; // @synthesize caretTapActionBlock=_caretTapActionBlock;
@property(nonatomic) _Bool enableTappableSocialProof; // @synthesize enableTappableSocialProof=_enableTappableSocialProof;
@property(nonatomic) _Bool showConversationConnector; // @synthesize showConversationConnector=_showConversationConnector;
@property(copy, nonatomic) CDUnknownBlockType socialProofTapActionBlock; // @synthesize socialProofTapActionBlock=_socialProofTapActionBlock;
@property(nonatomic) long long avatarSize; // @synthesize avatarSize=_avatarSize;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)private_updateConversationConnector;
- (void)_tapCaretAction;
- (void)_tapAction;
- (void)layoutSubviews;
- (void)cleanup;
@property(copy, nonatomic) NSString *socialText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

