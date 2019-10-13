//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNPreviewable-Protocol.h>

@class NSString, TFNAttributedActiveTextModel, TFNAttributedTextView, TFNTappableHighlightView;
@protocol T1TimelinesStatusConversationContextViewDelegate;

@interface T1TimelinesStatusConversationContextView : UIView <TFNPreviewable>
{
    id _previewingTarget;
    SEL _previewingAction;
    id <T1TimelinesStatusConversationContextViewDelegate> _delegate;
    TFNAttributedActiveTextModel *_activeTextModel;
    TFNAttributedTextView *_textView;
    TFNTappableHighlightView *_highlightView;
}

@property(readonly, nonatomic) TFNTappableHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) TFNAttributedTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) TFNAttributedActiveTextModel *activeTextModel; // @synthesize activeTextModel=_activeTextModel;
@property(nonatomic) __weak id <T1TimelinesStatusConversationContextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)previewConfigurationForLocation:(struct CGPoint)arg1;
- (void)setPreviewingTarget:(id)arg1 action:(SEL)arg2;
- (void)updateWithLayoutState:(id)arg1 resettingFrame:(_Bool)arg2;
- (void)_t1_highlightViewDidTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

