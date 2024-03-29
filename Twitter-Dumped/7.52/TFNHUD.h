//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, TFNHUDBlockingView, TFNHUDContainerView, TFNHUDWindow, UIImage, UIWindow;

@interface TFNHUD : NSObject
{
    NSTimer *_timer;
    _Bool _useCenteredImage;
    TFNHUDBlockingView *_blockingView;
    TFNHUDContainerView *_containerView;
    TFNHUDWindow *_HUDWindow;
    UIWindow *_containerWindow;
}

+ (void)private_showInMode:(long long)arg1 text:(id)arg2 blocking:(_Bool)arg3 duration:(double)arg4;
+ (void)showAndHideHUDMode:(long long)arg1 text:(id)arg2 blocking:(_Bool)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)showAndHideBlockingCustomHUD:(id)arg1 image:(id)arg2;
+ (void)showAndHideBlockingCustomHUD:(id)arg1 image:(id)arg2 duration:(double)arg3;
+ (void)showAndHideBlockingBusyHUD:(id)arg1;
+ (void)showAndHideBlockingBusyHUD:(id)arg1 duration:(double)arg2;
+ (void)showAndHideBlockingSuccessHUD:(id)arg1;
+ (void)showAndHideBlockingSuccessHUD:(id)arg1 duration:(double)arg2;
+ (void)showAndHideBlockingErrorHUD:(id)arg1;
+ (void)showAndHideBlockingErrorHUD:(id)arg1 duration:(double)arg2;
+ (void)showAndHideCustomHUD:(id)arg1 image:(id)arg2;
+ (void)showAndHideCustomHUD:(id)arg1 image:(id)arg2 duration:(double)arg3;
+ (void)showAndHideCustomHUD:(id)arg1 image:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)showAndHideBusyHUD:(id)arg1;
+ (void)showAndHideBusyHUD:(id)arg1 duration:(double)arg2;
+ (void)showAndHideSuccessHUD:(id)arg1;
+ (void)showAndHideSuccessHUD:(id)arg1 duration:(double)arg2;
+ (void)showAndHideErrorHUD:(id)arg1;
+ (void)showAndHideErrorHUD:(id)arg1 duration:(double)arg2;
+ (_Bool)isAnyHUDShowing;
@property(readonly, nonatomic) UIWindow *containerWindow; // @synthesize containerWindow=_containerWindow;
@property(readonly, nonatomic) TFNHUDWindow *HUDWindow; // @synthesize HUDWindow=_HUDWindow;
@property(readonly, nonatomic) TFNHUDContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TFNHUDBlockingView *blockingView; // @synthesize blockingView=_blockingView;
@property(nonatomic) _Bool useCenteredImage; // @synthesize useCenteredImage=_useCenteredImage;
- (void).cxx_destruct;
- (void)_hideDidFinish;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideAfterDelayWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideAfterDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hideAfterDelayTimerDidFire:(id)arg1;
- (void)_animateIn;
- (void)_show:(_Bool)arg1;
- (void)showAndBlockUserInteraction;
- (void)show;
@property(retain, nonatomic) UIImage *customImage;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) long long mode;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (id)initWithText:(id)arg1 mode:(long long)arg2;
- (id)initWithText:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCustomTextAndHideAfterDelay:(id)arg1 image:(id)arg2 duration:(double)arg3;
- (void)setCustomTextAndHideAfterDelay:(id)arg1 image:(id)arg2;
- (void)setErrorTextAndHideAfterDelay:(id)arg1 duration:(double)arg2;
- (void)setErrorTextAndHideAfterDelay:(id)arg1;
- (void)setSuccessTextAndHideAfterDelay:(id)arg1 duration:(double)arg2;
- (void)setSuccessTextAndHideAfterDelay:(id)arg1;
- (void)setBusyTextAndHideAfterDelay:(id)arg1 duration:(double)arg2;
- (void)setBusyTextAndHideAfterDelay:(id)arg1;
- (void)setCustomText:(id)arg1 image:(id)arg2;
- (void)setCustomText:(id)arg1;
- (void)setErrorText:(id)arg1;
- (void)setSuccessText:(id)arg1;
- (void)setBusyText:(id)arg1;
- (void)hideAfterDelay;
- (void)hideAfterDelay:(double)arg1;
- (void)hide;

@end

