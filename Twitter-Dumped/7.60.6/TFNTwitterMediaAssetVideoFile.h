//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterMediaAsset.h>

@class AVAsset, NSArray, NSString, TFNAVAssetExportSession, TFSReferencedFile, UIImage;

@interface TFNTwitterMediaAssetVideoFile : TFNTwitterMediaAsset
{
    TFSReferencedFile *_videoFileReference;
    int _exportID;
    _Bool _renderingPreview;
    _Bool _exportingVideo;
    NSArray *_renderPreviewCallbacks;
    TFNAVAssetExportSession *_exportSession;
    NSArray *_exportVideoCallbacks;
    NSArray *_exportVideoProgressCallbacks;
    AVAsset *_cachedAsset;
    struct CGSize _cachedAssetDimensions;
    double _cachedAssetDuration;
    UIImage *_cachedAssetPreviewImage;
    TFSReferencedFile *_exportedVideoFileReference;
    _Bool _stripAudioTrack;
    _Bool _exportSessionUsePassthroughEncoding;
}

@property(nonatomic) _Bool exportSessionUsePassthroughEncoding; // @synthesize exportSessionUsePassthroughEncoding=_exportSessionUsePassthroughEncoding;
@property(nonatomic) _Bool stripAudioTrack; // @synthesize stripAudioTrack=_stripAudioTrack;
- (void).cxx_destruct;
- (void)_tfn_exportWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_tfn_updateExportProgress:(float)arg1;
- (void)_tfn_completeExport;
- (void)_tfn_completePreviewLoad;
- (void)_tfn_generateAVAssetWithOptions:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)renderFinalDataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderPreviewWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)estimatedPreviewSizeThatFits:(struct CGSize)arg1;
- (unsigned long long)attachmentType;
@property(readonly, nonatomic) double duration;
- (struct CGSize)assetDimensions;
- (id)deprecatedPreview;
- (void)markAsAlreadyExported;
@property(readonly, copy, nonatomic) NSString *exportedFilePath;
@property(readonly, copy, nonatomic) NSString *filePath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPermanentFile:(id)arg1;
- (id)initWithTemporaryFile:(id)arg1;
- (id)initWithTemporaryFile:(id)arg1 assetDimensions:(struct CGSize)arg2;

@end

