//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1NativeCameraViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraCaptureViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1TweetComposeContainerViewControllerDelegate-Protocol.h>

@class NSString, T1ComposeSessionConfig, TFNViewController, UIViewController;
@protocol T1ComposeControllerDelegate;

@interface T1ComposeController : NSObject <T1NativeCameraViewControllerDelegate, T1NewsCameraCaptureViewControllerDelegate, T1TweetComposeContainerViewControllerDelegate>
{
    _Bool _isWindowScene;
    _Bool _presentingComposerAnimated;
    id <T1ComposeControllerDelegate> _delegate;
    T1ComposeSessionConfig *_sessionConfig;
    unsigned long long _state;
    UIViewController *_sourceViewController;
    CDUnknownBlockType _presentingComposerCompletionBlock;
    TFNViewController *_presentedContentViewController;
    CDUnknownBlockType _dismissContentViewControllerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissContentViewControllerBlock; // @synthesize dismissContentViewControllerBlock=_dismissContentViewControllerBlock;
@property(nonatomic) __weak TFNViewController *presentedContentViewController; // @synthesize presentedContentViewController=_presentedContentViewController;
@property(copy, nonatomic) CDUnknownBlockType presentingComposerCompletionBlock; // @synthesize presentingComposerCompletionBlock=_presentingComposerCompletionBlock;
@property(nonatomic, getter=isPresentingComposerAnimated) _Bool presentingComposerAnimated; // @synthesize presentingComposerAnimated=_presentingComposerAnimated;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool isWindowScene; // @synthesize isWindowScene=_isWindowScene;
@property(readonly, nonatomic) T1ComposeSessionConfig *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(nonatomic) __weak id <T1ComposeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)newsCameraCaptureViewControllerPreferredPresentation:(id)arg1;
- (void)newsCameraCaptureViewController:(id)arg1 dismissWithResult:(id)arg2;
- (void)nativeCameraViewControllerDidCancel:(id)arg1;
- (void)nativeCameraViewController:(id)arg1 didCaptureAttachment:(id)arg2;
- (void)tweetComposeContainerViewController:(id)arg1 dismissWithResult:(id)arg2;
- (void)_dismissContentViewControllerForcibly:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissComposerWithCompletion:(CDUnknownBlockType)arg1;
- (void)forciblyDismissComposerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_topParentViewController;
- (void)_presentModalComposerViewController:(id)arg1;
- (void)_presentComposer;
- (void)_presentNativeCamera;
- (void)_presentNewsCamera;
- (void)_presentCamera;
- (void)_promptCameraAuthorization;
- (void)_didEndSession;
- (void)_didBeginSession;
- (void)_transitionAccordingToSessionConfig;
- (void)_prepareInitialComposition;
- (void)presentComposerFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) TFNViewController *currentContentViewController;
- (id)initWithSessionConfig:(id)arg1;
- (id)initWithSessionConfig:(id)arg1 isWindowScene:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

