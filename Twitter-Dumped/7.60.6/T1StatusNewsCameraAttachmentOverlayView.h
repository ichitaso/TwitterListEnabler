//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1StatusBodyTextView, TFNAsymmetricalCornerView, TFNComposableViewLayoutState, TFNTwitterAccount, TFSTwitterScribeContext, UIImageView, UILabel, UITapGestureRecognizer;
@protocol T1StatusBodyTextViewDelegate, T1StatusViewModel;

@interface T1StatusNewsCameraAttachmentOverlayView : UIView
{
    TFNComposableViewLayoutState *_layoutState;
    unsigned long long _statusOptions;
    unsigned long long _statusDisplayTextOptions;
    TFSTwitterScribeContext *_scribeContext;
    TFNAsymmetricalCornerView *_locationBackgroundView;
    UILabel *_locationLabel;
    UIImageView *_locationBadgeImageView;
    TFNAsymmetricalCornerView *_statusTextBackgroundView;
    T1StatusBodyTextView *_statusBodyTextView;
    id <T1StatusViewModel> _viewModel;
    TFNTwitterAccount *_account;
    UITapGestureRecognizer *_locationTapRecognizer;
}

+ (double)chyronViewHeightForViewModel:(id)arg1 options:(unsigned long long)arg2 displayTextOptions:(unsigned long long)arg3 width:(double)arg4 layoutMetrics:(id)arg5;
@property(readonly, nonatomic) UITapGestureRecognizer *locationTapRecognizer; // @synthesize locationTapRecognizer=_locationTapRecognizer;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) T1StatusBodyTextView *statusBodyTextView; // @synthesize statusBodyTextView=_statusBodyTextView;
@property(readonly, nonatomic) TFNAsymmetricalCornerView *statusTextBackgroundView; // @synthesize statusTextBackgroundView=_statusTextBackgroundView;
@property(readonly, nonatomic) UIImageView *locationBadgeImageView; // @synthesize locationBadgeImageView=_locationBadgeImageView;
@property(readonly, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(readonly, nonatomic) TFNAsymmetricalCornerView *locationBackgroundView; // @synthesize locationBackgroundView=_locationBackgroundView;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) unsigned long long statusDisplayTextOptions; // @synthesize statusDisplayTextOptions=_statusDisplayTextOptions;
@property(readonly, nonatomic) unsigned long long statusOptions; // @synthesize statusOptions=_statusOptions;
@property(retain, nonatomic) TFNComposableViewLayoutState *layoutState; // @synthesize layoutState=_layoutState;
- (void).cxx_destruct;
- (void)_t1_locationTapped:(id)arg1;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 displayTextOptions:(unsigned long long)arg3 account:(id)arg4;
@property(nonatomic) __weak id <T1StatusBodyTextViewDelegate> statusBodyTextViewDelegate;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

