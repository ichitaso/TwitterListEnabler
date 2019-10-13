//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1NewsCameraCaptureCameraModeEditViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraCaptureReactModeCaptureViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1NewsCameraCaptureReactModePhotoGalleryViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNSwappingContainerViewControllerHelperDelegate-Protocol.h>

@class NSString, T1NewsCameraCaptureCameraModeEditViewController, T1NewsCameraCaptureOutput, T1NewsCameraCaptureReactModeCaptureViewController, T1NewsCameraCaptureReactModePhotoGalleryViewController, T1NewsCameraCaptureViewController, TFNSwappingContainerViewControllerHelper, TFSTwitterScribeContext, UIView;

@interface T1NewsCameraCaptureReactModeViewController : TFNViewController <T1NewsCameraCaptureReactModeCaptureViewControllerDelegate, T1NewsCameraCaptureCameraModeEditViewControllerDelegate, T1NewsCameraCaptureReactModePhotoGalleryViewControllerDelegate, TFNSwappingContainerViewControllerHelperDelegate>
{
    TFSTwitterScribeContext *_scribeContext;
    T1NewsCameraCaptureViewController *_captureViewController;
    TFNSwappingContainerViewControllerHelper *_containerViewControllerHelper;
    T1NewsCameraCaptureReactModePhotoGalleryViewController *_photoGalleryViewController;
    T1NewsCameraCaptureCameraModeEditViewController *_editViewController;
    T1NewsCameraCaptureReactModeCaptureViewController *_reactCaptureModeViewController;
    T1NewsCameraCaptureOutput *_reactionBackgroundCaptureOutput;
}

@property(retain, nonatomic) T1NewsCameraCaptureOutput *reactionBackgroundCaptureOutput; // @synthesize reactionBackgroundCaptureOutput=_reactionBackgroundCaptureOutput;
@property(retain, nonatomic) T1NewsCameraCaptureReactModeCaptureViewController *reactCaptureModeViewController; // @synthesize reactCaptureModeViewController=_reactCaptureModeViewController;
@property(retain, nonatomic) T1NewsCameraCaptureCameraModeEditViewController *editViewController; // @synthesize editViewController=_editViewController;
@property(retain, nonatomic) T1NewsCameraCaptureReactModePhotoGalleryViewController *photoGalleryViewController; // @synthesize photoGalleryViewController=_photoGalleryViewController;
@property(retain, nonatomic) TFNSwappingContainerViewControllerHelper *containerViewControllerHelper; // @synthesize containerViewControllerHelper=_containerViewControllerHelper;
@property(readonly, nonatomic) __weak T1NewsCameraCaptureViewController *captureViewController; // @synthesize captureViewController=_captureViewController;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (void).cxx_destruct;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)newsCameraCaptureReactModePhotoGalleryViewController:(id)arg1 didSelectAttachment:(id)arg2;
- (void)newsCameraCaptureReactCaptureModeViewController:(id)arg1 transitionToEditModeWithCompositorContext:(id)arg2;
- (void)newsCameraCaptureCameraModeEditViewController:(id)arg1 didSendNewsCameraComposition:(id)arg2;
- (void)newsCameraCaptureCameraModeEditViewControllerDidCancel:(id)arg1;
- (void)newsCameraCaptureCameraModeEditViewController:(id)arg1 requestsUpdateCurrentLocationWithCompletion:(CDUnknownBlockType)arg2;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)arg1;
- (void)_t1_transitionToEditModeViewControllerWithCompositorContext:(id)arg1;
- (void)_t1_transitionToReactCaptureModeViewControllerWithAttachment:(id)arg1;
- (void)_t1_transitionToPhotoGalleryViewController;
- (id)contentViewController;
- (void)_t1_prepareEditViewControllerWithCompositorContext:(id)arg1;
- (id)_t1_loadEditViewController;
- (id)_t1_loadReactCaptureViewViewController;
- (id)_t1_loadPhotoGalleryViewViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCaptureViewController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *swappingContainerView;

@end

