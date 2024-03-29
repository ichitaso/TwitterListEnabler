//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>

@class NSString, T1ImageViewFetchHelper, T1ZoomableImageView, UIActivityIndicatorView, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIViewController;
@protocol T1ImageDisplayViewDelegate, T1ImageDisplayViewDownloadDelegate;

@interface T1ImageDisplayView : UIView <T1ImageViewFetchHelperDelegate>
{
    T1ImageViewFetchHelper *_fetchHelper;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIActivityIndicatorView *_indeterminateProgressView;
    UIImageView *_errorImageView;
    _Bool _isPreviewForPlayableMedia;
    id _tapTarget;
    SEL _tapAction;
    SEL _tapActionWithGestureRecognizer;
    id _doubleTapTarget;
    SEL _doubleTapAction;
    _Bool _forceHighQualityImage;
    id <T1ImageDisplayViewDownloadDelegate> _downloadDelegate;
    id <T1ImageDisplayViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_viewController;
    T1ZoomableImageView *_zoomableImageView;
}

+ (CDUnknownBlockType)variantSelectionBehaviorCustomizationForShouldLoadHighQualityImage:(_Bool)arg1;
@property(readonly, nonatomic) T1ZoomableImageView *zoomableImageView; // @synthesize zoomableImageView=_zoomableImageView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak id <T1ImageDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <T1ImageDisplayViewDownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(nonatomic) _Bool forceHighQualityImage; // @synthesize forceHighQualityImage=_forceHighQualityImage;
- (void).cxx_destruct;
- (void)_tfn_longPressAction:(id)arg1;
- (void)_tfn_doubleTapAction:(id)arg1;
- (void)_tfn_tapAction:(id)arg1;
- (void)t1_fetchHelper:(id)arg1 didFailToLoadImageWithError:(id)arg2;
- (void)t1_fetchHelper:(id)arg1 didUpdateImageFromSource:(long long)arg2 isFinal:(_Bool)arg3;
- (void)t1_fetchHelper:(id)arg1 didLoadInitialImageFromSource:(long long)arg2;
- (_Bool)_tfn_shouldUseHighQualityImage;
- (void)_tfn_updateShouldUseHighQualityImage;
- (void)loadImageWithAccountForSigningImageRequests:(id)arg1 templateURL:(id)arg2 dimensions:(struct CGSize)arg3 transformer:(id)arg4 previewImage:(id)arg5 isPreviewForPlayableMedia:(_Bool)arg6;
- (void)setDoubleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)setTapTarget:(id)arg1 forActionWithGestureRecognizer:(SEL)arg2;
- (void)setTapTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) NSString *imageURLString;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImagePipeline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

