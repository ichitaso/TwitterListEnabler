//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1CameraCaptureButton;
@protocol T1CameraControlsBarDelegate;

@interface T1CameraControlsBar : UIView
{
    T1CameraCaptureButton *_captureButton;
    _Bool _modeButtonHidden;
    double _stateTransitionPercentage;
    long long _lockOrientation;
    _Bool _captureButtonEnabled;
    _Bool _recording;
    _Bool _modeButtonHiding;
    long long _mode;
    long long _state;
    id <T1CameraControlsBarDelegate> _delegate;
    T1CameraCaptureButton *_modeButton;
    long long _modeButtonType;
}

@property(readonly, nonatomic) long long modeButtonType; // @synthesize modeButtonType=_modeButtonType;
@property(nonatomic) _Bool modeButtonHiding; // @synthesize modeButtonHiding=_modeButtonHiding;
@property(readonly, nonatomic) T1CameraCaptureButton *modeButton; // @synthesize modeButton=_modeButton;
@property(readonly, nonatomic) T1CameraCaptureButton *captureButton; // @synthesize captureButton=_captureButton;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic, getter=isCaptureButtonEnabled) _Bool captureButtonEnabled; // @synthesize captureButtonEnabled=_captureButtonEnabled;
@property(nonatomic) __weak id <T1CameraControlsBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_modeButtonTapped;
- (void)_captureButtonTouchUp;
- (void)_captureButtonTouchDown;
- (void)_captureButtonTapped;
- (void)_updateCaptureButtonAnimated:(_Bool)arg1;
- (void)_updateCaptureButtonEnabled;
- (void)_showModeButtonAnimated:(_Bool)arg1;
- (void)_hideModeButtonAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateModeButtonAnimated:(_Bool)arg1;
- (void)_updateBackgroundColor;
- (void)_updateControlsLockOrientation;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;
- (void)unlockControlsOrientation;
- (void)lockControlsOrientation:(long long)arg1;
- (void)setRecording:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setModeButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isModeButtonHidden) _Bool modeButtonHidden;
- (id)initWithFrame:(struct CGRect)arg1;

@end

