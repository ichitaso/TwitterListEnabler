//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <T1Twitter/T1BoundedSliderThumbViewAccessibilityDelegate-Protocol.h>

@class NSString, T1BoundedSliderContinuousLongPressDetector, T1BoundedSliderThumbView, T1BoundedSliderTrackView, UIView;
@protocol T1BoundedSliderBackdropDelegate;

@interface T1BoundedSlider : UIControl <T1BoundedSliderThumbViewAccessibilityDelegate>
{
    double _leftExtent;
    double _rightExtent;
    _Bool _snap;
    double _lowerSnapValue;
    double _upperSnapValue;
    int _backdropRequestID;
    struct CGSize _backdropImageDisplaySize;
    struct CGRect _backdropViewFrame;
    double _leftExtentValue;
    double _rightExtentValue;
    T1BoundedSliderContinuousLongPressDetector *_longPressDetector;
    long long _touchEventCounter;
    struct CGPoint _zoomInPoint;
    double _minimumValue;
    double _maximumValue;
    double _value;
    double _lowerBound;
    double _upperBound;
    double _maximumBoundsRange;
    double _minimumBoundsRange;
    id <T1BoundedSliderBackdropDelegate> _delegate;
    unsigned long long _trackingMode;
    UIView *_innerView;
    UIView *_zoomedInBackdropView;
    UIView *_zoomedOutBackdropView;
    UIView *_leftShadeView;
    UIView *_rightShadeView;
    UIView *_valueShadeView;
    T1BoundedSliderTrackView *_trackView;
    T1BoundedSliderThumbView *_leftThumbView;
    T1BoundedSliderThumbView *_rightThumbView;
}

@property(readonly, nonatomic) T1BoundedSliderThumbView *rightThumbView; // @synthesize rightThumbView=_rightThumbView;
@property(readonly, nonatomic) T1BoundedSliderThumbView *leftThumbView; // @synthesize leftThumbView=_leftThumbView;
@property(readonly, nonatomic) T1BoundedSliderTrackView *trackView; // @synthesize trackView=_trackView;
@property(readonly, nonatomic) UIView *valueShadeView; // @synthesize valueShadeView=_valueShadeView;
@property(readonly, nonatomic) UIView *rightShadeView; // @synthesize rightShadeView=_rightShadeView;
@property(readonly, nonatomic) UIView *leftShadeView; // @synthesize leftShadeView=_leftShadeView;
@property(readonly, nonatomic) UIView *zoomedOutBackdropView; // @synthesize zoomedOutBackdropView=_zoomedOutBackdropView;
@property(readonly, nonatomic) UIView *zoomedInBackdropView; // @synthesize zoomedInBackdropView=_zoomedInBackdropView;
@property(readonly, nonatomic) UIView *innerView; // @synthesize innerView=_innerView;
@property(readonly, nonatomic) unsigned long long trackingMode; // @synthesize trackingMode=_trackingMode;
@property(nonatomic) __weak id <T1BoundedSliderBackdropDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double minimumBoundsRange; // @synthesize minimumBoundsRange=_minimumBoundsRange;
@property(nonatomic) double maximumBoundsRange; // @synthesize maximumBoundsRange=_maximumBoundsRange;
@property(nonatomic) double upperBound; // @synthesize upperBound=_upperBound;
@property(nonatomic) double lowerBound; // @synthesize lowerBound=_lowerBound;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
- (void).cxx_destruct;
- (void)animateIntroWithCompletion:(CDUnknownBlockType)arg1;
- (void)_longPressDetectorForInactivity:(long long)arg1 withLocation:(struct CGPoint)arg2 atTime:(double)arg3;
- (void)_queueLongPressDetectorForInactivity:(struct CGPoint)arg1 atTime:(double)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)_zoomed;
- (void)_zoomOut;
- (void)_zoomIn;
- (struct CGRect)_clickTargetForFrame:(struct CGRect)arg1;
- (double)_xFromValue:(double)arg1;
- (double)_valueFromX:(double)arg1;
- (void)_showZoomedOutBackdropView:(id)arg1;
- (struct CGAffineTransform)_zoomedInTransformFrom:(struct CGPoint)arg1 boundedBy:(double)arg2;
- (void)_showZoomedBackdropView:(id)arg1;
- (void)_insertBackdropImage:(id)arg1 inView:(id)arg2 atIndex:(long long)arg3 requestID:(int)arg4;
- (void)_requestBackdropImagesFromDelegate:(_Bool)arg1;
- (id)_createNewBackdropViewWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect rangeRect;
- (void)_positionValueThumb;
- (void)_positionAllThumbs:(_Bool)arg1;
- (void)_maximizeAllThumbs;
- (void)_zeroAllThumbs;
- (void)_loadSubviews;
- (id)accessibilityValueForBoundedSliderThumbView:(id)arg1;
- (id)accessibilityLabelForBoundedSliderThumbView:(id)arg1;
- (void)boundedSliderThumbViewDidReceiveAccessibilityDecrement:(id)arg1;
- (void)boundedSliderThumbViewDidReceiveAccessibilityIncrement:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

