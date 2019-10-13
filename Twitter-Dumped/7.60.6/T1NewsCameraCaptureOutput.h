//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL, T1NewsCameraCaptureCameraScribeValue, TFNNewsCameraVideoCompositorContext, TFNTwitterMediaAsset, TFSReferencedFile, UIImage;

@interface T1NewsCameraCaptureOutput : NSObject
{
    unsigned long long _type;
    UIImage *_transitioningPreviewImage;
    NSData *_imageData;
    NSURL *_videoURL;
    TFNNewsCameraVideoCompositorContext *_videoCompositorContext;
    TFNTwitterMediaAsset *_attachment;
    T1NewsCameraCaptureCameraScribeValue *_cameraScribeValue;
    TFSReferencedFile *_videoReferencedFile;
}

@property(readonly, nonatomic) TFSReferencedFile *videoReferencedFile; // @synthesize videoReferencedFile=_videoReferencedFile;
@property(readonly, nonatomic) T1NewsCameraCaptureCameraScribeValue *cameraScribeValue; // @synthesize cameraScribeValue=_cameraScribeValue;
@property(readonly, nonatomic) TFNTwitterMediaAsset *attachment; // @synthesize attachment=_attachment;
@property(readonly, nonatomic) TFNNewsCameraVideoCompositorContext *videoCompositorContext; // @synthesize videoCompositorContext=_videoCompositorContext;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) UIImage *transitioningPreviewImage; // @synthesize transitioningPreviewImage=_transitioningPreviewImage;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTwitterMediaAsset:(id)arg1 cameraScribeValue:(id)arg2;
- (id)initWithVideoCompositorContext:(id)arg1;
- (id)initWithVideoURL:(id)arg1 cameraScribeValue:(id)arg2;
- (id)initWithImageData:(id)arg1 cameraScribeValue:(id)arg2;
- (id)initWithTransitioningPreviewImage:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

@end

