//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1DockingControllerGestureRecognizerState : NSObject
{
    _Bool _touchDownActive;
    struct CGPoint _translation;
    struct CGPoint _velocity;
    struct CGPoint _panLocationInView;
}

@property(readonly, nonatomic, getter=isTouchDownActive) _Bool touchDownActive; // @synthesize touchDownActive=_touchDownActive;
@property(readonly, nonatomic) struct CGPoint panLocationInView; // @synthesize panLocationInView=_panLocationInView;
@property(readonly, nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToState:(id)arg1;
- (id)initWithTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 panLocationInView:(struct CGPoint)arg3 touchDownActive:(_Bool)arg4;
- (id)init;

@end

