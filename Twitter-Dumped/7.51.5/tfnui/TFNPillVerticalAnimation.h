//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNPillAnimationProvider-Protocol.h>

@class NSString, TFNPillControl, UIColor;

@interface TFNPillVerticalAnimation : NSObject <TFNPillAnimationProvider>
{
    _Bool _shouldSuppressTransformAnimation;
    _Bool _hasDismissScaleAnimation;
    _Bool _isDismissingPill;
    double _textPromptInterval;
    TFNPillControl *_pillControl;
    UIColor *_startingBackgroundColor;
    unsigned long long _animationDirection;
    struct CGPoint _startingCenter;
}

@property(nonatomic) unsigned long long animationDirection; // @synthesize animationDirection=_animationDirection;
@property(retain, nonatomic) UIColor *startingBackgroundColor; // @synthesize startingBackgroundColor=_startingBackgroundColor;
@property(nonatomic) _Bool isDismissingPill; // @synthesize isDismissingPill=_isDismissingPill;
@property(nonatomic) __weak TFNPillControl *pillControl; // @synthesize pillControl=_pillControl;
@property(nonatomic) struct CGPoint startingCenter; // @synthesize startingCenter=_startingCenter;
@property(nonatomic) double textPromptInterval; // @synthesize textPromptInterval=_textPromptInterval;
@property(nonatomic) _Bool hasDismissScaleAnimation; // @synthesize hasDismissScaleAnimation=_hasDismissScaleAnimation;
@property(nonatomic) _Bool shouldSuppressTransformAnimation; // @synthesize shouldSuppressTransformAnimation=_shouldSuppressTransformAnimation;
- (void).cxx_destruct;
- (id)_arrowCenterAnimationWithStartingWidth:(double)arg1;
- (id)_arrowRotationAnimation;
- (id)_arrowOpacityAnimation;
- (id)_labelCenterAnimationWithStartingWidth:(double)arg1;
- (id)_labelScaleAnimation;
- (id)_labelOpacityAnimation;
- (id)_pillOpacityAnimation;
- (id)_pillDismissMoveAnimation;
- (id)_pillDismissScaleAnimation;
- (id)_pillWidthAnimation;
- (id)_pillColorAnimation;
- (id)_pillPresentAnimationWithOffset:(double)arg1;
- (id)_yPositionAnimationWithFrames:(const CDStruct_56705b1e *)arg1 numberOfFrames:(unsigned long long)arg2 duration:(double)arg3 layer:(id)arg4 offset:(double)arg5;
- (id)_widthAnimationWithFrames:(const CDStruct_56705b1e *)arg1 numberOfFrames:(unsigned long long)arg2 duration:(double)arg3 layer:(id)arg4;
- (id)_transformAnimationWithFrames:(const CDStruct_56705b1e *)arg1 numberOfFrames:(unsigned long long)arg2 duration:(double)arg3 layer:(id)arg4;
- (id)_opacityAnimationWithFrames:(const CDStruct_56705b1e *)arg1 numberOfFrames:(unsigned long long)arg2 duration:(double)arg3 layer:(id)arg4;
- (id)_centerAnimationWithFrames:(const CDStruct_56705b1e *)arg1 numberOfFrames:(unsigned long long)arg2 duration:(double)arg3 layer:(id)arg4 startingWidth:(double)arg5;
- (id)_colorAnimationWithFrames:(const CDStruct_56705b1e *)arg1 numberOfFrames:(unsigned long long)arg2 duration:(double)arg3 layer:(id)arg4;
- (id)_animationGroupWithAnimations:(id)arg1 duration:(double)arg2;
- (id)_keyFrameAnimationWithKeyPath:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 duration:(double)arg4;
- (void)_performArrowAnimation;
- (void)resetAllAnimationsOnPillControl:(id)arg1;
- (void)hidePillControl:(id)arg1 pillTapped:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPillControl:(id)arg1 fromView:(id)arg2 withOffset:(double)arg3 autoHideInterval:(double)arg4;
- (void)_autoHideAfterDelay:(double)arg1;
@property(readonly, nonatomic) double dismissDuration;
@property(readonly, nonatomic) double dropDuration;
- (id)init;
- (id)initWithAnimationDirection:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

