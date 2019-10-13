//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNButtonAnimationCoordinator-Protocol.h>
#import <TFNUI/TMGViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, TFNButtonAnimationView;

@interface TFNButtonAnimator : NSObject <TMGViewDelegate, TFNButtonAnimationCoordinator>
{
    NSMutableDictionary *_animationObjectsForSrcStates;
    TFNButtonAnimationView *_animationView;
}

+ (void)_abortInFlightAnimation:(id)arg1;
+ (_Bool)performAnimationType:(id)arg1 onButton:(id)arg2;
@property(retain, nonatomic) TFNButtonAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) NSMutableDictionary *animationObjectsForSrcStates; // @synthesize animationObjectsForSrcStates=_animationObjectsForSrcStates;
- (void).cxx_destruct;
- (_Bool)_animateButton:(id)arg1 usingAnimationName:(id)arg2 fromVisualFacade:(id)arg3 toVisualFacade:(id)arg4 forTransitionFromState:(unsigned long long)arg5 toState:(unsigned long long)arg6;
- (_Bool)animateButton:(id)arg1 fromVisualFacade:(id)arg2 toVisualFacade:(id)arg3 forTransitionFromState:(unsigned long long)arg4 toState:(unsigned long long)arg5;
- (void)motionGraphicsView:(id)arg1 animationDidStop:(_Bool)arg2;
- (id)_compositionWithName:(id)arg1;
- (void)animationForView:(id)arg1 didComplete:(_Bool)arg2;
- (id)runAnimatedComposition:(id)arg1 forTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 forButton:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeAnimationForTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)_animationObjectForTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)compositionForTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)animationNameForTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)animationTypeForTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)_setAnimationObject:(id)arg1 forTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setAnimationName:(id)arg1 forTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setAnimationType:(id)arg1 forTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

