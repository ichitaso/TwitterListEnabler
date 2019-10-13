//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PTVMergeWatchBroadcastViewController, T1WatchBroadcastViewController, UIView, UIWindow;

@interface T1WatchBroadcastViewControllerPresenter : NSObject
{
    T1WatchBroadcastViewController *_broadcastController;
    PTVMergeWatchBroadcastViewController *_contentViewController;
    UIView *_backgroundDimmingView;
    UIWindow *_presentingWindow;
    UIWindow *_fullscreenWindow;
}

@property(retain, nonatomic) UIWindow *fullscreenWindow; // @synthesize fullscreenWindow=_fullscreenWindow;
@property(retain, nonatomic) UIWindow *presentingWindow; // @synthesize presentingWindow=_presentingWindow;
@property(retain, nonatomic) UIView *backgroundDimmingView; // @synthesize backgroundDimmingView=_backgroundDimmingView;
@property(readonly, nonatomic) PTVMergeWatchBroadcastViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) __weak T1WatchBroadcastViewController *broadcastController; // @synthesize broadcastController=_broadcastController;
- (void).cxx_destruct;
- (void)_t1_presentContentViewControllerChildAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_presentContentViewControllerFullscreenAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_returnToPresentingWindow;
- (void)dismissContentViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentContentViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentContentViewControllerAnimated:(_Bool)arg1;
- (id)initWithBroadcastController:(id)arg1 contentViewController:(id)arg2 presentingWindow:(id)arg3;

@end

