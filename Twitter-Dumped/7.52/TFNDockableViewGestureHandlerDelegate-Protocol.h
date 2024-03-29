//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class UIView;
@protocol TFNDockableView, TFNDockableViewGestureHandlerProtocol;

@protocol TFNDockableViewGestureHandlerDelegate <NSObject>
- (struct CGRect)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 dockFrameInHostView:(UIView *)arg2 forDockableView:(UIView<TFNDockableView> *)arg3;

@optional
- (void)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 didChangeDeviceOrientation:(long long)arg2;
- (_Bool)dockableViewControllerShouldAnimateFullscreenWithBounce:(id <TFNDockableViewGestureHandlerProtocol>)arg1;
- (void)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 willAnimateToFullscreenDockableView:(UIView<TFNDockableView> *)arg2 viaGesture:(_Bool)arg3;
- (void)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 willAnimateToDockDockableView:(UIView<TFNDockableView> *)arg2 viaGesture:(_Bool)arg3;
- (void)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 willAnimateToDismissDockableView:(UIView<TFNDockableView> *)arg2 viaGesture:(_Bool)arg3;
- (void)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 didProgressFullscreenPanDockableView:(UIView<TFNDockableView> *)arg2 withCompletionPercentage:(double)arg3;
- (void)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 didFullscreenDockableView:(UIView<TFNDockableView> *)arg2;
- (void)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 didDockDockableView:(UIView<TFNDockableView> *)arg2;
- (void)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 didDismissDockableView:(UIView<TFNDockableView> *)arg2;
- (void)dockableViewController:(id <TFNDockableViewGestureHandlerProtocol>)arg1 didBeginPanDockableView:(UIView<TFNDockableView> *)arg2;
@end

