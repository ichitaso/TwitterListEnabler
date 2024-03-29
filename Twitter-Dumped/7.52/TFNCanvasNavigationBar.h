//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TFNButton, TFNPaddedButton, UIImage, UIImageView, UILabel;
@protocol TFNCanvasEventHandler;

@interface TFNCanvasNavigationBar : UIView
{
    id <TFNCanvasEventHandler> _eventHandler;
    _Bool _controlsEnabled;
    long long _actionType;
    NSString *_title;
    TFNPaddedButton *_closeButton;
    TFNPaddedButton *_dockButton;
    TFNButton *_ctaButton;
    UILabel *_titleLabel;
    UIImageView *_backgroundView;
}

+ (id)_dockButtonImage;
+ (id)_closeButtonImage;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TFNButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) TFNPaddedButton *dockButton; // @synthesize dockButton=_dockButton;
@property(retain, nonatomic) TFNPaddedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)_ctaButtonDidTap:(id)arg1;
- (void)_dockButtonDidTap:(id)arg1;
- (void)_closeButtonDidTap:(id)arg1;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(copy, nonatomic) NSString *callToActionText;
- (void)_updateButtonsForActionType;
- (void)_layoutBackgroundView;
- (void)_layoutTitleLabel;
- (void)_layoutDockButton:(id)arg1;
- (void)_layoutButton:(id)arg1;
- (void)layoutSubviews;
- (void)setCTAButtonHidden:(_Bool)arg1 duration:(double)arg2;
- (void)_createTitleLabel;
- (void)_createCloseButton;
- (void)dispose;
- (id)initWithEventHandler:(id)arg1;

@end

