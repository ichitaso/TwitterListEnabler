//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNKeyboardDismissalContainerView;

@protocol TFNKeyboardDismissalContainerViewDelegate <NSObject>

@optional
- (void)keyboardDismissalContainerView:(TFNKeyboardDismissalContainerView *)arg1 didEndDraggingWithVelocity:(struct CGPoint)arg2 state:(unsigned long long)arg3;
- (void)keyboardDismissalContainerView:(TFNKeyboardDismissalContainerView *)arg1 didChangeDraggingWithTranslation:(struct CGPoint)arg2;
- (void)keyboardDismissalContainerViewDidBeginDragging:(TFNKeyboardDismissalContainerView *)arg1;
- (_Bool)keyboardDismissalContainerView:(TFNKeyboardDismissalContainerView *)arg1 shouldBeginDraggingAtLocation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)keyboardDismissalContainerView:(TFNKeyboardDismissalContainerView *)arg1 keyboardDidChangeFrameInView:(struct CGRect)arg2;
@end

